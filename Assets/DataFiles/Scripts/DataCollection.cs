using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System;
using TMPro;
using UnityEngine.UI;
using System.Linq;
//using Microsoft.MixedReality.Toolkit.Examples.Demos;
using Microsoft.MixedReality.Toolkit;

public class DataCollection : MonoBehaviour, IMixedRealityTouchHandler
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
    private object gameobject;
    private Color objectColor;
    private int i;

    public GameObject[] startPoint;
    public GameObject[] endPoint;
    public GameObject initializer;
    // Start is called before the first frame update
    void Start()
    {
        i = 0;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void IMixedRealityTouchHandler.OnTouchCompleted(HandTrackingInputEventData eventData)
    {

        OnTouchCompleted.Invoke(eventData);

        initializer.SetActive(false);
        startPoint[0].SetActive(false);
        startPoint[1].SetActive(false);
        startPoint[2].SetActive(false);
        startPoint[3].SetActive(false);

        endPoint[0].SetActive(false);
        endPoint[1].SetActive(false);
        endPoint[2].SetActive(false);
        endPoint[3].SetActive(false);

        startPoint[0].GetComponent<Renderer>().material.color = Color.red;
        endPoint[0].GetComponent<Renderer>().material.color = Color.red;
        startPoint[1].GetComponent<Renderer>().material.color = Color.red;
        endPoint[1].GetComponent<Renderer>().material.color = Color.red;
        startPoint[2].GetComponent<Renderer>().material.color = Color.red;
        endPoint[2].GetComponent<Renderer>().material.color = Color.red;
        startPoint[3].GetComponent<Renderer>().material.color = Color.red;
        endPoint[3].GetComponent<Renderer>().material.color = Color.red;

        startPoint[0].SetActive(false);
        endPoint[0].SetActive(false);

        endPoint[0].GetComponent<DataCollection>().enabled = false;
        endPoint[1].GetComponent<DataCollection>().enabled = false;
        endPoint[2].GetComponent<DataCollection>().enabled = false;
        endPoint[3].GetComponent<DataCollection>().enabled = false;

        endPoint[0].GetComponent<RobotActiveHTTP>().enabled = false;
        endPoint[1].GetComponent<RobotActiveHTTP>().enabled = false;
        endPoint[2].GetComponent<RobotActiveHTTP>().enabled = false;
        endPoint[3].GetComponent<RobotActiveHTTP>().enabled = false;

        startPoint[0].GetComponent<DataSenderHTTP>().enabled = false;
        startPoint[1].GetComponent<DataSenderHTTP>().enabled = false;
        startPoint[2].GetComponent<DataSenderHTTP>().enabled = false;
        startPoint[3].GetComponent<DataSenderHTTP>().enabled = false;



        if(i == 0)
        {
            System.Random start = new System.Random();
            int startObject = start.Next(0, 4);
            startPoint[startObject].SetActive(true);
            startPoint[startObject].GetComponent<DataSenderHTTP>().enabled = true;
            startPoint[startObject].GetComponent<Renderer>().material.color = Color.green;

            System.Random final = new System.Random();
            int finalObject = final.Next(0, 4);
            endPoint[finalObject].SetActive(true);
            endPoint[finalObject].GetComponent<Renderer>().material.color = Color.green;
            endPoint[finalObject].GetComponent<DataCollection>().enabled = true;
            endPoint[finalObject].GetComponent<RobotActiveHTTP>().enabled = true;
            i = i + 1;
        }
        else
        {
            startPoint[0].SetActive(false);
            startPoint[1].SetActive(false);
            startPoint[2].SetActive(false);
            startPoint[3].SetActive(false);

            endPoint[0].SetActive(false);
            endPoint[1].SetActive(false);
            endPoint[2].SetActive(false);
            endPoint[3].SetActive(false);
        }
    }

    void IMixedRealityTouchHandler.OnTouchStarted(HandTrackingInputEventData eventData)
    {
        OnTouchStarted.Invoke(eventData);

        startPoint[0].GetComponent<Renderer>().material.color = Color.red;
        endPoint[0].GetComponent<Renderer>().material.color = Color.red;
        startPoint[1].GetComponent<Renderer>().material.color = Color.red;
        endPoint[1].GetComponent<Renderer>().material.color = Color.red;
        startPoint[2].GetComponent<Renderer>().material.color = Color.red;
        endPoint[2].GetComponent<Renderer>().material.color = Color.red;
        startPoint[3].GetComponent<Renderer>().material.color = Color.red;
        endPoint[3].GetComponent<Renderer>().material.color = Color.red;
        initializer.GetComponent<Renderer>().material.color = Color.red;

        if (debugMessage != null)
        {
            debugMessage.text = "OnTouchStarted: " + Time.unscaledTime.ToString();
        }

        if (TargetRenderer != null)
        {
            TargetRenderer.sharedMaterial.color = Color.Lerp(originalColor, highlightedColor, 2.0f);
        }
    }

    void IMixedRealityTouchHandler.OnTouchUpdated(HandTrackingInputEventData eventData)
    {
        OnTouchUpdated.Invoke(eventData);

        startPoint[0].GetComponent<Renderer>().material.color = Color.red;
        endPoint[0].GetComponent<Renderer>().material.color = Color.red;
        startPoint[1].GetComponent<Renderer>().material.color = Color.red;
        endPoint[1].GetComponent<Renderer>().material.color = Color.red;
        startPoint[2].GetComponent<Renderer>().material.color = Color.red;
        endPoint[2].GetComponent<Renderer>().material.color = Color.red;
        startPoint[3].GetComponent<Renderer>().material.color = Color.red;
        endPoint[3].GetComponent<Renderer>().material.color = Color.red;
        initializer.GetComponent<Renderer>().material.color = Color.red;

        if (debugMessage2 != null)
        {
            debugMessage2.text = "OnTouchUpdated: " + Time.unscaledTime.ToString();
        }

        if ((TargetRenderer != null) && (TargetRenderer.material != null))
        {
            TargetRenderer.material.color = Color.Lerp(Color.green, Color.green, t);
            t = Mathf.PingPong(Time.time, duration) / duration;
        }
    }
}
