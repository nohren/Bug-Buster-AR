using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleController : MonoBehaviour
{
    private GameObject parent;

    void Start()
    {
       parent = transform.parent.gameObject;
    }
    void OnParticleSystemStopped()
    {
      Destroy(parent);
    }
}
