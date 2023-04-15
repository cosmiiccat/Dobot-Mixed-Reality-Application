using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Timer : MonoBehaviour
{
    bool timerActive = false;
    public static float curTime;


    // Start is called before the first frame update
    void Start()
    {
        curTime = 0;
        timerActive = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (timerActive == true)
        {
            curTime = curTime + Time.deltaTime;
        }

    }

    public void StartTimer()
    {
        timerActive = true;

    }
    public void StopTimer()
    {
        timerActive = false;
    }
}
