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
    private const float centimeterToMeterConversion = 0.01f;
    private float minSpeed = 0.6f;
    private float maxSpeed = 4f;
    private float baseSizeInCM = 6f;
    delegate IEnumerator AnimationMethod();
    AnimationMethod[] animationMethods;
    Coroutine currentAnimation;
    private ParticleSystem part;
    private GameObject parent;
    public GameObject bugController;

    private void OnEnable()
    {
      ScaleSlider.ScaleMoved += HandleScaleSizing;
    }
    private void OnDisable()
    {
      ScaleSlider.ScaleMoved -= HandleScaleSizing;
    }
    
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
    public void HandleScaleSizing(float scaleSize)
    {
      // set the scale of the gameobject. Then calculate relative diameter in cm and set speed min and max to 1/40th dia and 2/3 dia
      // in cm per second.
      bugController.transform.localScale = Vector3.one * scaleSize;
      float relativeSizeInCM = baseSizeInCM * scaleSize;
      minSpeed = relativeSizeInCM * 0.1f;
      maxSpeed = relativeSizeInCM * 0.667f;
    }

    private void MovementUpdater()
    {
      // this method is designed to sit in the fixed update, update values each frame and apply forces as needed.
      anim.SetFloat(rotateHashId, Math.Abs(rotationDegreesPerSecond));
      anim.SetFloat(runHashId, Math.Abs(speedInCentimetersPerSecond));
      float rotationDegreesPerFrame = rotationDegreesPerSecond * Time.deltaTime;
      transform.Rotate(Vector3.up, rotationDegreesPerFrame);

      // constantly calculate new vector3 for spider to move in that direction and rate of speed
      Vector3 spiderDirection = transform.rotation * Vector3.forward;
      float spiderSpeedInMetersPerSecond = speedInCentimetersPerSecond * centimeterToMeterConversion;
      rb.velocity = spiderDirection * spiderSpeedInMetersPerSecond;
    }
    private int GenerateRandomNumber()
    {
        return UnityEngine.Random.Range(0, animationMethods.Length - 1);
    }
    private float SpeedGenerator()
    {
        // provides speeds between 0.6 and 4 cm/s at 1 factor. At factor 20, it provides speeds between 12 adn 80 cm/second
        return UnityEngine.Random.Range(minSpeed, maxSpeed);
    }
}
