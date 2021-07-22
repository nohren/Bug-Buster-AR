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

    bool m_featurePointsDisabled;
    bool m_planesDisabled;
    
    void OnEnable()
    {
        PlaceObjectsOnPlane.onPlacedObject += ToggleViewDisabled;
        OnARInstructionsClick.AROnboarding += ToggleViewEnabled;
        m_PlaneManager.planesChanged += ARPlaneViewListener;
        m_PointCloudManager.pointCloudsChanged += ARPointCloudListener;
    }

    void OnDisable()
    {
        PlaceObjectsOnPlane.onPlacedObject -= ToggleViewDisabled;
        OnARInstructionsClick.AROnboarding -= ToggleViewEnabled;
        m_PlaneManager.planesChanged -= ARPlaneViewListener;
        m_PointCloudManager.pointCloudsChanged -= ARPointCloudListener;
    }

    void ToggleViewDisabled()
    {
        m_planesDisabled = true;
        m_featurePointsDisabled = true;
        DisablePointCloudPrefabs();
        DisablePlanePrefabs();
    }
    void ToggleViewEnabled()
    {
       EnablePlanePrefabs();
       EnablePointCloudPrefabs();
    }
    
    // listeners, they are invoked when an event is invoked matching their return type and signature (signature meaning paramter type and amount).  Once invoked interesting information is passed into them.
    void ARPlaneViewListener(ARPlanesChangedEventArgs e)
    {
      DisablePlanePrefabs();
    }
    void ARPointCloudListener(ARPointCloudChangedEventArgs e)
    {
      DisablePointCloudPrefabs();
    }

    void DisablePlanePrefabs()
    {
        if (m_DisablePlaneRendering && m_planesDisabled)
        {
            m_PlaneManager.SetTrackablesActive(false);
        }
    }
    void DisablePointCloudPrefabs()
    {
       if (m_DisableFeaturePoints && m_featurePointsDisabled)
        {
            m_PointCloudManager.SetTrackablesActive(false);
        }
    }
    void EnablePlanePrefabs()
    {
        if (m_DisablePlaneRendering)
        {   
            m_planesDisabled = false;
            m_PlaneManager.SetTrackablesActive(true);
        }
    }
    void EnablePointCloudPrefabs()
    {
       if (m_DisableFeaturePoints)
        {
            m_featurePointsDisabled = false;
            m_PointCloudManager.SetTrackablesActive(true);
        }
    }

}
