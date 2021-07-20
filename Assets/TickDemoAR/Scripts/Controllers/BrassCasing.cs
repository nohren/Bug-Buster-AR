using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BrassCasing : MonoBehaviour
{
    private float timeElapsed = 0f;
    public float recycleTimeInSeconds = 2f;
    private float ejectionUnitsPerSecond = 1.33f;
    
    void Start()
    {
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        transform.localPosition += Vector3.right * ejectionUnitsPerSecond * Time.deltaTime;
        //fling the shell using rb, once out of sight recycle.
        timeElapsed += Time.fixedDeltaTime;
        if (timeElapsed >= 2f)
        {
            timeElapsed = 0f;
            gameObject.SetActive(false);
        }
    }
}
