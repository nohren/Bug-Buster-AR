using System.Collections;
using System;
using UnityEngine;

public class SpiderBrain : MonoBehaviour
{
    private Animator anim;
    private Rigidbody rb;
    // private Vector3 eulerAngleVelocity;
    //Use hash to improve efficiency by removing the string parameter lookup in update.
    private int biteHashId = Animator.StringToHash("Bite");
    private int rotateHashId = Animator.StringToHash("Rotate");
    private int runHashId = Animator.StringToHash("Run");
    private int dieHashId = Animator.StringToHash("Die");
    private bool animationLoop = false;
    private float rotationDegreesPerSecond = 0f;
    private float speedInCentimetersPerSecond = 0f;
    private float spiderSpeed;
    private const float centimeterToMeter = 0.01f;
    private float rotationDegreesPerFrame;
    private bool spiderCentimeters = true;
    private Vector3 spiderDirection;
    delegate IEnumerator AnimationMethod();
    AnimationMethod[] animationMethods;
    Coroutine currentAnimation;
    private ParticleSystem part;
    private GameObject parent;
    
    private void Start()
    {
        anim = GetComponent<Animator>();
        rb = GetComponent<Rigidbody>();
        animationMethods = new AnimationMethod[] {
          AnimationSequence1,
          AnimationSequence2,
          AnimationSequence3,
          AnimationSequence4
        };
        parent = transform.parent.gameObject;
        part = parent.GetComponentInChildren<ParticleSystem>();
    }

    private void FixedUpdate()
    {
        if (animationLoop == false)
        {
            animationLoop = true;
            currentAnimation = StartCoroutine(animationMethods[GenerateRandomNumber()]());
        }
        MovementUpdater();
    }

    private IEnumerator AnimationSequence1()
    {
      ConstantRunning(SpeedGenerator());
      yield return new WaitForSecondsRealtime(2f);
      ConstantRunning(0f);
      Bite();
      yield return new WaitForSecondsRealtime(4);
      rotationDegreesPerSecond = 90f;
      yield return new WaitForSecondsRealtime(5f);
      rotationDegreesPerSecond = 0f;
      animationLoop = false;
    }
    private IEnumerator AnimationSequence2()
    {
      yield return new WaitForSecondsRealtime(3f);
      Bite();
      yield return new WaitForSecondsRealtime(2f);
      ConstantRunning(SpeedGenerator());
      yield return new WaitForSecondsRealtime(2f);
      ConstantRunning(0f);  
      ConstantRotation(-30f);
      yield return new WaitForSecondsRealtime(3f);
      ConstantRotation(0f);
      animationLoop = false;
    }
    private IEnumerator AnimationSequence3()
    {
      yield return new WaitForSecondsRealtime(3f);
      ConstantRunning(SpeedGenerator());
      yield return new WaitForSecondsRealtime(2f);
      ConstantRunning(0f);  
      ConstantRotation(90f);
      yield return new WaitForSecondsRealtime(2f);
      ConstantRotation(0f);
      Bite();
      yield return new WaitForSecondsRealtime(7f);
      animationLoop = false;
    }
    private IEnumerator AnimationSequence4()
    {
      ConstantRotation(-18f);
      yield return new WaitForSecondsRealtime(5f);
      ConstantRotation(0f);
      Bite();
      yield return new WaitForSecondsRealtime(5f);
      ConstantRunning(SpeedGenerator());
      yield return new WaitForSecondsRealtime(2f);
      ConstantRunning(0f);
      animationLoop = false;
    }

    private void Bite()
    {
        anim.SetTrigger(biteHashId);
    }
    private void ConstantRunning(float speedInCmPerSecond)
    {
      speedInCentimetersPerSecond = speedInCmPerSecond;
    }
    private void ConstantRotation(float degreesPerSecond)
    {
      rotationDegreesPerSecond = degreesPerSecond;
    }
    private void StopMovement()
    {
      animationLoop = true;
      speedInCentimetersPerSecond = 0f;
      rotationDegreesPerSecond = 0f;
    }
    public void Die()
    {
      part.Play();
      gameObject.SetActive(false);
    }

    private void MovementUpdater()
    {
      // this method is designed to sit in the fixed update, update values each frame and apply forces as needed.
      anim.SetFloat(rotateHashId, Math.Abs(rotationDegreesPerSecond));
      anim.SetFloat(runHashId, Math.Abs(speedInCentimetersPerSecond));
      rotationDegreesPerFrame = rotationDegreesPerSecond * Time.deltaTime;
      transform.Rotate(Vector3.up, rotationDegreesPerFrame);

      // constantly calculate new vector3 for spider to move in that direction and rate of speed
      spiderDirection = transform.rotation * Vector3.forward;
      if (spiderCentimeters == true)
      {
        spiderSpeed = speedInCentimetersPerSecond * centimeterToMeter;
      } else {
        spiderSpeed = speedInCentimetersPerSecond; // this becomes meters per second
      }
      rb.velocity = spiderDirection * spiderSpeed;
    }
    private int GenerateRandomNumber()
    {
        return UnityEngine.Random.Range(0, animationMethods.Length - 1);
    }
    private float SpeedGenerator()
    {
        //initally provides speeds between 0.1 and 4 cm/s, can scale to 0.1 and 4 m/s given if the bug size gets scaled.
        return UnityEngine.Random.Range(0.1f, 4f);
    }
}
