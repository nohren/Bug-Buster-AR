using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ToggleTrackedVisuals : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Disables spawned feature points and the ARPointCloudManager")]
    bool m_DisableFeaturePoints;

    public bool disableFeaturePoints
    {
        get => m_DisableFeaturePoints;
        set => m_DisableFeaturePoints = value;
    }

    [SerializeField]
    [Tooltip("Disables spawned planes and ARPlaneManager")]
    bool m_DisablePlaneRendering;

    public bool disablePlaneRendering
    {
        get => m_DisablePlaneRendering;
        set => m_DisablePlaneRendering = value;
    }

    [SerializeField]
    ARPointCloudManager m_PointCloudManager;

    public ARPointCloudManager pointCloudManager
    {
        get => m_PointCloudManager;
        set => m_PointCloudManager = value;
    }
    
    [SerializeField]
    ARPlaneManager m_PlaneManager;

    public ARPlaneManager planeManager
    {
        get => m_PlaneManager;
        set => m_PlaneManager = value;
    }

    private GameObject planePrefab;
    private GameObject featurePointPrefab;
    
    void OnEnable()
    {
        PlaceObjectsOnPlane.onPlacedObject += DisableARView;
        OnARInstructionsClick.AROnboarding += EnableARView;
    }

    void OnDisable()
    {
        PlaceObjectsOnPlane.onPlacedObject -= DisableARView;
        OnARInstructionsClick.AROnboarding -= EnableARView;
    }
    
    // void Start()
    // {
    //   planePrefab = m_PlaneManager.planePrefab;
    //   featurePointPrefab = m_PointCloudManager.pointCloudPrefab;
    // }

    // void Update()
    // {
      
    // }
    
    // stategy is to get a reference to the class that inherits the protected abstract class and implement this method. Only 
    // when we are in the state of not disabledARView
    // can create state that tracks that in here.
    void OnCreateTrackable()
    {
        
        
    }

    void DisableARView()
    {
        if (m_DisableFeaturePoints)
        {
            m_PointCloudManager.SetTrackablesActive(false);
        }

        if (m_DisablePlaneRendering)
        {
            m_PlaneManager.SetTrackablesActive(false);
        }
    }
     void EnableARView()
    {
        if (m_DisableFeaturePoints)
        {
            m_PointCloudManager.SetTrackablesActive(true);
        }

        if (m_DisablePlaneRendering)
        {
            m_PlaneManager.SetTrackablesActive(true);
        }
    }
}
