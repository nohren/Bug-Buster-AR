using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Unity.Collections.LowLevel.Unsafe;
using System;
using TMPro;
using Unity.Collections;
using UnityEngine.UI;


public class ARInstantiateInVicinityOfPoints : MonoBehaviour
{
    public GameObject tick;
    public float shakeFactor;
    public float floorFactor;
    public TMP_Text acceleromterData;
    public TMP_Text shakingTest;
    public TMP_Text featurePointText;
    public GameObject tickTarget;
    private RectTransform tickTargetRect;
    public Camera cam;
    private Dictionary<Vector3, bool> pointTable;
    private GameObject spawnedObject;
    private ARPointCloud _arPointCloud;
    private ARSessionOrigin _arSessionOrigin;
    // private List<Vector3> featurePoints;
    private Vector3 lowPassValue = Vector3.zero;
    private float accelerometerUpdateInterval = 1.0f / 60.0f;
    private float lowPassKernelWidthInSeconds = 1.0f;
    private float lowPassFilterFactor; 
    private float xMax = 0;
    private float xMin = 0;
    private bool possibleShake = false;
    private bool checkingForShaking = false;
    private bool featurePointListConstructed = false;
    private bool inScene = false;
    private bool accumulatePoints = false;
    private Vector3 initialCheckForShaking;
    
    void OnEnable()
    {
      OnButtonClick.AROnboarding += CheckForPointsAndShaking;
      OnButtonClick.FinishedShakingTree += FinishCheckForPointsAndShaking;
    }
    void OnDisable()
    {
      OnButtonClick.AROnboarding -= CheckForPointsAndShaking;
      OnButtonClick.FinishedShakingTree -= FinishCheckForPointsAndShaking;
    }

    // Start is called before the first frame update
    void Start()
    {
        _arSessionOrigin = GetComponent<ARSessionOrigin>();
        lowPassFilterFactor = accelerometerUpdateInterval / lowPassKernelWidthInSeconds;
        lowPassValue = Input.acceleration;
        tickTarget.SetActive(false);
        tickTargetRect = tickTarget.GetComponent<RectTransform>();
    }

    // Update is called once per frame.  Used when we want to do things with frames.
    // Don't forget scope and separation of concerns.
    void Update()
    {
      if (pointTable != null)
      {
        // Debug.Log("Feature points accumulated: " + pointTable.Count);
      }
       // sample and low pass filter on each frame
       lowPassValue = LowPassFilterAccelerometer(lowPassValue);
      
       // record greatest x acceleration value and greatest x acceleration value in opposite direction (-)
       if (checkingForShaking == true)
       {   
         ValueCheck();
       }

       // get a reference to the point cloud component
       if (_arPointCloud == null) 
       {
           _arPointCloud = _arSessionOrigin.trackablesParent.GetComponentInChildren<ARPointCloud>();
       } 
       else 
       {
         // we have a reference
         if (_arPointCloud.positions != null)
         {
          if (accumulatePoints == true)
          {
            if (pointTable == null)
            {
              SetNewPointerForFeaturePointList(_arPointCloud.positions);
            }
            else
            {
              AddNewFeaturePoints(_arPointCloud.positions);
            }
            
          }
         }
       }
    }
    
    public void SetNewPointerForFeaturePointList(NativeSlice<Vector3>? list)
    {
      Debug.Log("Point Table has data");
      pointTable = new Dictionary<Vector3, bool>();
      foreach(Vector3 point in list)
      {
        if (!pointTable.ContainsKey(point))
        {
          pointTable.Add(point, true);
        }
      }
    }

    public void AddNewFeaturePoints(NativeSlice<Vector3>? list)
    {
      foreach(Vector3 point in list)
      {
        if (!pointTable.ContainsKey(point))
        {
          pointTable.Add(point, true);
        }
      }
    }

    public void ValueCheck() 
    {
        // sampling... updating max and min higher and lower based on the original starting max and min's
           UpdateMinMaxValues(lowPassValue);
             // Now check for movement in x axis left or right from the initialCheck
           if (lowPassValue.x > (initialCheckForShaking.x + shakeFactor) || lowPassValue.x < (initialCheckForShaking.x - shakeFactor))
           {
             if (possibleShake == false)
             {
               possibleShake = true;
               // check for a move in the opposite direction in 1 second
               StartCoroutine(OppositeValueCheck(lowPassValue));
             }
           }
    }

    IEnumerator OppositeValueCheck(Vector3 trigger)
    {
        // set the current reference values to the trigger passed in and measure any further movement right (xMax) or left (xMin) over 1 second
        xMax = trigger.x;
        xMin = trigger.x;
        yield return new WaitForSeconds(1f);

        // had travel to the right, look for an opposite value to the left greater than shakeFactor
        if (trigger.x > initialCheckForShaking.x)
        {
           if (trigger.x - xMin >= shakeFactor)
           {
             ShakingEffects();
           }
        } 
        else 
        {
          // had travel to the left, look for an opposite value to the right greater than shakeFactor
          if (xMax - trigger.x >= shakeFactor)
          {
            ShakingEffects();
          }
        }
        yield return new WaitForSeconds(0.5f);
        NotShakingEffects();
        // RESET! current X axis value to be new initialCheck
        initialCheckForShaking = lowPassValue;
        possibleShake = false;
    }

    public void ShakingEffects()
    {
      //trigger the feature point collection!
      shakingTest.text = "The Phone is shaking!";
      shakingTest.color = Color.red;
      possibleShake = false;
    }
    public void NotShakingEffects()
    {
      shakingTest.text = "The Phone is not shaking!";
      shakingTest.color = Color.white; 
    }

    public void CheckForPointsAndShaking()
    {
      tickTarget.SetActive(true);
      accumulatePoints = true;
      checkingForShaking = true;
      initialCheckForShaking = Input.acceleration;
    }

    public void FinishCheckForPointsAndShaking()
    {
      featurePointText.text = "";
      tickTarget.SetActive(false);
      accumulatePoints = false;
      checkingForShaking = false;  
      if (pointTable != null)
      {
        float zAvg = PositionZAverage(pointTable);
        List<Vector3> targetPoints = SelectFeaturePointWithinRadius(zAvg, pointTable);
        foreach(Vector3 point in targetPoints)
        {
          Instantiate(tick, point, Quaternion.identity);
        }
        pointTable = null;
      } else {
        Debug.Log("Point dictionary is null, so coming in from AR_pointCloud null");
      }
    }

    public List<Vector3> SelectFeaturePointWithinRadius(float zAvg, Dictionary<Vector3, bool> featurePoints)
    {
      // get circle radius on device
      Vector2 screenPixelCenter = tickTarget.transform.position;
      Vector3[] v = new Vector3[4];
      tickTargetRect.GetWorldCorners(v);
      float radius = Math.Abs(screenPixelCenter.x - v[0].x);

      // Camera.WorldToScreenPoint is doing the perspective projection conversion.
      // O(n) time complexity, unless I can vectorize using SIMD or burst
      List<Vector3> targetPoints = new List<Vector3>();
      foreach(KeyValuePair<Vector3, bool> point in featurePoints)
      {
        //if screen point value is within radius of center of reticle, push to instantiation list
        Vector2 featurePointScreenPos = cam.WorldToScreenPoint(point.Key);
        if (Vector2.Distance(screenPixelCenter, featurePointScreenPos) <= radius && point.Key.z >= (zAvg * floorFactor))
        {
          targetPoints.Add(point.Key);
        }
      }
      return targetPoints;
    }

  

    public void UpdateMinMaxValues(Vector3 sample)
    {
        if (sample.x > xMax)
        {
            xMax = sample.x;
        }
        if (sample.x < xMin)
        {
            xMin = sample.x;
        }
    }


    // this is in local space, need to convert to world space.
    public float PositionZAverage(Dictionary<Vector3, bool> pointCloud)
    {
      // calculates as much data as is stored in the Dictionary.
      // estimates the average Z value or projection from camera to the surface.
      float avgZ = 0;
      float count = pointCloud.Count;
      
      foreach(KeyValuePair<Vector3, bool> point in pointCloud)
      {
          avgZ += point.Key.z;
      }
      avgZ /= count;
      // Debug.Log("Average Z: " + avgZ);
      return avgZ;
    }

    public Vector3 LowPassFilterAccelerometer(Vector3 prevValue)
    {
        Vector3 newValue = Vector3.Lerp(prevValue, Input.acceleration, lowPassFilterFactor);
        return newValue;
    }

}