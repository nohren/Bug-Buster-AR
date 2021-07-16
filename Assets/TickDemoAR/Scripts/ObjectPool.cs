using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPool : MonoBehaviour
{
    public static ObjectPool SharedInstance;
    public List<GameObject> pooledObjects;
    public GameObject objectToPool;
    public int amountToPool;
    public int runtimeExpansionAmount;
    public GameObject parentGameObject;

    private void Awake()
    {
        SharedInstance = this;
    }
    void Start()
    {
        PopulatePooledObjects();
    }

    private void PopulatePooledObjects()
    {
        pooledObjects = new List<GameObject>();
        GameObject tmp;
        for (int i = 0; i < amountToPool; i++)
        {
            tmp = Instantiate(objectToPool, parentGameObject.transform);
            tmp.SetActive(false);
            pooledObjects.Add(tmp);
        }
    }

    public GameObject RetrieveAPooledObject()
    {
        for (int i = 0; i < pooledObjects.Count; i++)
        {
            if (!pooledObjects[i].activeInHierarchy)
            {
                return pooledObjects[i];
            }
        }
        return null;
    }

    public GameObject GetPooledObject()
    {
        GameObject retrievedObject = RetrieveAPooledObject();
        if (retrievedObject != null)
        {
            return retrievedObject;
        } else {
            GameObject tmp;
            for (int i = 0; i < runtimeExpansionAmount; i++)
            {
              tmp = Instantiate(objectToPool, parentGameObject.transform);
              tmp.SetActive(false);
              pooledObjects.Add(tmp);
            }
            // return GetPooledObject();
            return GetPooledObject();
        }
    }
}
