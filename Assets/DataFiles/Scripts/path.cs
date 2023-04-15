using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class path : MonoBehaviour
{
    public GameObject robotOrigin;
    public static Vector3 robotOriginPosition;
    public static Vector3 pointerPos;
    public static Vector3 robot_path;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void OnClick()
    {
        foreach (var source in MixedRealityToolkit.InputSystem.DetectedInputSources)
        {
            // Ignore anything that is not a hand because we want articulated hands
            if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
            {
                foreach (var p in source.Pointers)
                {
                    if (p is IMixedRealityNearPointer)
                    {
                        // Ignore near pointers, we only want the rays

                        pointerPos = p.Position;
                        Debug.Log("Hitpos " + pointerPos);
                    }
                }
            }
        }
        robotOriginPosition = gameObject.transform.position;
        robot_path = (robotOriginPosition - pointerPos);
        Debug.Log("robot path " + robot_path);
        StartCoroutine(PostRequest("http://192.168.189.131:5000/api", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));

    }


    public void FixedUpdate()
    {
        foreach (var source in MixedRealityToolkit.InputSystem.DetectedInputSources)
        {
            // Ignore anything that is not a hand because we want articulated hands
            if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
            {
                foreach (var p in source.Pointers)
                {
                    if (p is IMixedRealityNearPointer)
                    {
                        // Ignore near pointers, we only want the rays

                        pointerPos = p.Position;
                        Debug.Log("Hitpos " + pointerPos);
                    }
                }
            }
        }
        robotOriginPosition = gameObject.transform.position;
        robot_path = (robotOriginPosition - pointerPos);
        Debug.Log(robot_path);
        var arlist1 = new ArrayList();
        arlist1.Add(robot_path);

    }
    

    // Update is called once per frame
    public static void Update()
    {
        foreach (var source in MixedRealityToolkit.InputSystem.DetectedInputSources)
        {
            // Ignore anything that is not a hand because we want articulated hands
            if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
            {
                foreach (var p in source.Pointers)
                {
                    if (p is IMixedRealityNearPointer)
                    {
                        // Ignore near pointers, we only want the rays

                        pointerPos = p.Position;
                        Debug.Log("Hitpos " + pointerPos);
                    }
                }
            }
        }

        robot_path = (robotOriginPosition - pointerPos);
        Debug.Log("robot path " + robot_path);

    }

    IEnumerator PostRequest(string url, string json)
    {
        var uwr = new UnityWebRequest(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();


        //Send the request then wait here until it returns
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
        }
    }
}
