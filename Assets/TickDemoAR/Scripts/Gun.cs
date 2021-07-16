using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gun : MonoBehaviour
{
    Animator anim;
    private int fireHashId = Animator.StringToHash("Fire");
    private bool firing = false;
    public GameObject flash;
    private int thompsonM1a1RPM = 700;
    private float wholeBrass = 0f;
    public Transform muzzle;
    private Vector3 muzzleDirection;
    Coroutine present;
    Coroutine stow;

    void Start()
    {
      anim = GetComponent<Animator>(); 
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
      // get current muzzle direction using the struct transform.rotation, also get the current position in world space using the struct transform.postion
      muzzleDirection = muzzle.rotation * Vector3.forward;
      RaycastHit hit;
      Ray bulletDirection = new Ray(muzzle.position, muzzleDirection);
      // Debug.DrawRay(muzzle.position, muzzleDirection, Color.red, 1f); // for debug purposes.
      if (Physics.Raycast(bulletDirection, out hit))
      {
        if (hit.collider.tag == "Spider")
        {
          Debug.Log("Hit a spider");
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
