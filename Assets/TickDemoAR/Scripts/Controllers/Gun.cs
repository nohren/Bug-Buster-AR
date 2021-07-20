using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class Gun : MonoBehaviour
{
    public GameObject bulletImpactAndHole;
    Animator anim;
    private int fireHashId = Animator.StringToHash("Fire");
    private bool firing = false;
    public GameObject flash;
    private int thompsonM1a1RPM = 700;
    private float wholeBrass = 0f;
    private float acp45RadiusInMeters = 0.0115f / 2f;
    public Transform muzzle;
    private Vector3 muzzleDirection;
    Coroutine present;
    Coroutine stow;
    List<ARRaycastHit> arPlaneHitResults;
    ARRaycastManager aRRaycastManager;

    void Start()
    {
      anim = GetComponent<Animator>(); 
      aRRaycastManager = GetComponentInParent<ARRaycastManager>();
      arPlaneHitResults = new List<ARRaycastHit>();
      flash.SetActive(false);   
    }

    private void OnEnable()
    {
      OnFireClick.Fire += PresentGun;
      OnFireClick.Stop += StowGun;
    }
    private void OnDisable()
    {
      OnFireClick.Fire -= PresentGun;
      OnFireClick.Stop -= StowGun;
    }

    void FixedUpdate()
    {
      if (firing == true)
      {
        GunMechanics();
      } else {
        wholeBrass = 0f;
      }
    }

    private void ShootABullet()
    {
       // apply the current quaternion transformation to the z vector.
      muzzleDirection = muzzle.rotation * Vector3.forward;
      RaycastHit[] hits;
      Ray bulletDirection = new Ray(muzzle.position, muzzleDirection);
      // Debug.DrawRay(muzzle.position, muzzleDirection, Color.red, 1f); // for debug purposes.
      hits = Physics.SphereCastAll(bulletDirection, acp45RadiusInMeters);
      if (hits.Length > 0) 
      {
        foreach(RaycastHit hit in hits)
        {
          if (hit.collider.tag == "Spider")
          {
            SpiderBrain brainInstance = hit.collider.gameObject.GetComponent<SpiderBrain>();
            brainInstance.Die();
            Instantiate(bulletImpactAndHole, hit.point, Quaternion.identity);
          }
        }
      }
      else 
      {
        if (aRRaycastManager.Raycast(bulletDirection, arPlaneHitResults, TrackableType.PlaneWithinPolygon))
        {
          Instantiate(bulletImpactAndHole, arPlaneHitResults[arPlaneHitResults.Count - 1].pose.position, Quaternion.identity);
        }
      }
    }
    private void GunMechanics()
    {
        // ran in fixed update while firing
        // instantiates and ejects rounds
        float RPF = (thompsonM1a1RPM / 60f) * Time.deltaTime;
        wholeBrass += RPF;
        if (wholeBrass >= 1f)
        {
            wholeBrass = 0f;
            // shoot a bullet
            ShootABullet();
            // eject a casing
            GameObject brassCasing = ObjectPool.SharedInstance.GetPooledObject();
            if (brassCasing != null) 
            {
              brassCasing.transform.localPosition = new Vector3(0.02f, 0.09f, -0.02f);
              brassCasing.transform.localRotation = Quaternion.Euler(0.477f, 1.351f, -73.316f);
              brassCasing.SetActive(true);
            }
        }
    }

    private void PresentGun()
    {
        if ( stow != null)
        {
          StopCoroutine(stow);  
        }  
        present = StartCoroutine(PresentGunAnimation());
        anim.SetBool(fireHashId, true);
        flash.SetActive(true);
        firing = true;
    }
 
    private void StowGun()
    {
      if (present != null)
      {
        StopCoroutine(present);  
      }
      anim.SetBool(fireHashId, false);
      flash.SetActive(false);
      firing = false;
      stow = StartCoroutine(StowGunAnimation());
    }

    private IEnumerator PresentGunAnimation()
    {
      Vector3 pos = transform.localPosition;
      float startPos = pos.z;
      float endPos = 0.07f;
      float distance = Mathf.Abs(startPos - endPos);
      float timeInSeconds = 0.5f;
      float speed = distance / timeInSeconds; //0.12 m/s
      for (float zPos = startPos; zPos <= endPos; zPos+= speed * Time.deltaTime)
      {
        pos.z = zPos;
        transform.localPosition = pos;
        yield return null;
      }
      pos.z = endPos;
      transform.localPosition = pos;
    }
    private IEnumerator StowGunAnimation()
    {
      Vector3 pos = transform.localPosition;
      float startPos = pos.z; //0.07
      float endPos = -0.05f;
      float distance = Mathf.Abs(startPos - endPos);
      float timeInSeconds = 0.7f;
      float speed = distance / timeInSeconds; //0.12 m/s
      for (float zPos = startPos; zPos >= endPos; zPos-= speed * Time.deltaTime)
      {
        pos.z = zPos;
        transform.localPosition = pos;
        yield return null;
      }
      pos.z = endPos;
      transform.localPosition = pos;
    }
}
