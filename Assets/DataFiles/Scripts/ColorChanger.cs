using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;

public class ColorChanger : MonoBehaviour, IMixedRealityTouchHandler
{
    [SerializeField]
    private TextMesh debugMessage = null;
    [SerializeField]
    private TextMesh debugMessage2 = null;

    #region Event handlers
    public TouchEvent OnTouchCompleted;
    public TouchEvent OnTouchStarted;
    public TouchEvent OnTouchUpdated;
    #endregion

    private Renderer TargetRenderer;
    private Color originalColor;
    private Color highlightedColor;
    protected float duration = 1.5f;
    protected float t = 0;
    private Color objectColor;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void IMixedRealityTouchHandler.OnTouchCompleted(HandTrackingInputEventData eventData)
    {
        OnTouchCompleted.Invoke(eventData);
        

    }

    void IMixedRealityTouchHandler.OnTouchStarted(HandTrackingInputEventData eventData)
    {
        OnTouchStarted.Invoke(eventData);



        if (debugMessage != null)
        {
            debugMessage.text = "OnTouchStarted: " + Time.unscaledTime.ToString();
        }

        if (TargetRenderer != null)
        {
            TargetRenderer.sharedMaterial.color = Color.Lerp(Color.red, Color.white, 2.0f);
        }
    }

    void IMixedRealityTouchHandler.OnTouchUpdated(HandTrackingInputEventData eventData)
    {
        OnTouchUpdated.Invoke(eventData);

        if (debugMessage2 != null)
        {
            debugMessage2.text = "OnTouchUpdated: " + Time.unscaledTime.ToString();
        }

        if ((TargetRenderer != null) && (TargetRenderer.material != null))
        {
            TargetRenderer.material.color = Color.Lerp(Color.red, Color.white, 2.0f);
            t = Mathf.PingPong(Time.time, duration) / duration;
        }


    }
}
