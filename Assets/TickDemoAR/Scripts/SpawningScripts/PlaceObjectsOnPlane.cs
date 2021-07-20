using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.EventSystems;

[RequireComponent(typeof(ARRaycastManager))]
public class PlaceObjectsOnPlane : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Instantiates this prefab on a plane at the touch location.")]
    GameObject m_PlacedPrefab;


    /// <summary>
    /// The prefab to instantiate on touch.
    /// </summary>
    public GameObject placedPrefab
    {
        get { return m_PlacedPrefab; }
        set { m_PlacedPrefab = value; }
    }

    /// <summary>
    /// The object instantiated as a result of a successful raycast intersection with a plane.
    /// </summary>
    public GameObject spawnedObject { get; private set; }

    /// <summary>
    /// Invoked whenever an object is placed in on a plane.
    /// </summary>
    public static event Action onPlacedObject;

    ARRaycastManager m_RaycastManager;

    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
    
    [SerializeField]
    int m_objectsPerTouch = 1;

    [SerializeField]
    bool m_CanReposition = true;

    public bool canReposition
    {
        get => m_CanReposition;
        set => m_CanReposition = value;
    }
    UIManager m_UIManager;
    bool previousTouchMadeObject = false; //as opposed to made UI
    void Awake()
    {
      m_RaycastManager = GetComponent<ARRaycastManager>();
    }
    void Start()
    {
      m_UIManager = GameObject.FindGameObjectWithTag("AROnboarding").GetComponent<UIManager>();
    }
   
    // going to update this area to accept instantiation on the "+" feature points (as well as planes).  I want to update the max number of objects to number of objects per touch to instantiate.  Let's say 1 for now.
    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                if (EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
                {
                    // touched the UI, do not raycast.
                    return;
                }  
                // Debug.Log("Count of queue" + m_UIManager.UXOrderedQueue.Count);
                //previous touch was UI AND at least 1 or 0 instructions, then we can place a spider.
                if (previousTouchMadeObject == false && m_UIManager.UXOrderedQueue.Count < 2) 
                {
                  if (m_RaycastManager.Raycast(touch.position, s_Hits, TrackableType.PlaneWithinPolygon | TrackableType.FeaturePoint))
                  {
                      Pose hitPose = s_Hits[0].pose;
  
                      for (int s = 0; s < m_objectsPerTouch; s++)
                      {
                          spawnedObject = Instantiate(m_PlacedPrefab, hitPose.position, hitPose.rotation);
                      }
                      
                      if (m_CanReposition)
                      {
                          spawnedObject.transform.SetPositionAndRotation(hitPose.position, hitPose.rotation);
                      }
  
                      if (onPlacedObject != null)
                      {
                          onPlacedObject();
                      }
                      previousTouchMadeObject = true;
                      // disable feature points and plane manager prefabs, there is a script for this called ToggleTracked visuals
                      // it kinda sucks though
                  }
                }
                else 
                {
                    ResetUI();
                    previousTouchMadeObject = false;
                }
            }
        }
    }

    private void ResetUI()
    {
        m_UIManager.AddToQueue(new UXHandle(UIManager.InstructionUI.CrossPlatformFindAPlane, UIManager.InstructionGoals.FoundAPlane));
        m_UIManager.AddToQueue(new UXHandle(UIManager.InstructionUI.TapToPlace, UIManager.InstructionGoals.PlacedAnObject));
        // enable feature point and plane prefabs!
    }
}
