using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class ButtonControl : MonoBehaviour
{
    public GameObject robotOrigin;
    public static Vector3 robotOriginPosition;
    public static Vector3 pointerPos;
    public static Vector3 robot_path;
    public static Vector3 send_robot_path;
    private string IP_Address;
    public static string dobot_Pose;


    public GameObject indexObject;
    MixedRealityPose pose;
    public static Vector3 indexObjectPosition;

    public GameObject clone;// this is an empty object. Only one linerenderer component is added 
    private LineRenderer Line;
    Vector3[] path;
    List<Vector3> POS = new List<Vector3>();
    private float startTime;
    public GameObject button;
    private bool buttonClick;

    
    public GameObject obstacle;
    private double safetyDistance;
    private Vector3 obstaclePosition;
    public GameObject cylinderObstacle;
    private double cylindersafetyDistance;
    private Vector3 cylinderobstaclePosition;
    private Vector3 end, start;
    private Color C1;
    private Color C2;
    private Color C3;
    private Color C4;


    void Awake()
    {
        path = POS.ToArray();// initialize 
        Line = clone.GetComponent<LineRenderer>();// get the linerender component 
        //Line.material = new Material(Shader.Find("particles/additive"));
        //Line.SetColors(Color.blue, Color.red);// set the color 
        //Line.SetWidth(0.05f, 0.01f);// set the width 
    }
    // Start is called before the first frame update
    void Start()
    {
        buttonClick = false;
        startTime = 0;
        C1 = Color.green;
        C2 = Color.green;
        C3 = Color.red;
        C4 = Color.red;
    }

    // Update is called once per frame
    void Update()
    {
        indexObject.GetComponent<Renderer>().enabled = false;
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexDistalJoint, Handedness.Right, out pose))
        {
            end = pose.Position;
        }
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
        {
            indexObject.GetComponent<Renderer>().enabled = true;
            start = pose.Position;
            var dir = end - start;
            var mid = -((dir) * 4.0f) + end;
            //indexObject.transform.position = pose.Position;
            //indexObject.transform.position = new Vector3(pose.Position.x, pose.Position.y, pose.Position.z+0.1f);
            indexObject.transform.position = mid;
            indexObjectPosition = indexObject.transform.position;
            Debug.Log("Index object position " + indexObject.transform.position);
            Debug.Log(IP_Address);

        }
        obstaclePosition = obstacle.transform.position;
        safetyDistance = Math.Sqrt((Math.Pow(indexObjectPosition.x - obstaclePosition.x, 2) + Math.Pow(indexObjectPosition.y - obstaclePosition.y, 2) + Math.Pow(indexObjectPosition.z - obstaclePosition.z, 2)));
        
        cylinderobstaclePosition = cylinderObstacle.transform.position;
        cylindersafetyDistance = Math.Sqrt((Math.Pow(indexObjectPosition.x - cylinderobstaclePosition.x, 2) + Math.Pow(indexObjectPosition.y - cylinderobstaclePosition.y, 2) + Math.Pow(indexObjectPosition.z - cylinderobstaclePosition.z, 2)));
        if (safetyDistance < 0.075)
        {
            FixedUpdate();
        }
        else if(cylindersafetyDistance < 0.1)
        {
            FixedUpdate();
        }
        else
        {
            Debug.Log("safe");
        }

      

    }

    public void onClick()
    {
        IP_Address = Enter_IP_Address.enterIP_Address;
    }


    public void FixedUpdate()
    {
        IP_Address = Enter_IP_Address.enterIP_Address;

        foreach (var source in MixedRealityToolkit.InputSystem.DetectedInputSources)
        {
            // Turn off all hand rays
            //PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOff);

            //Turn off hand rays for the right hand only
            PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOff, Handedness.Right);

            // Turn off hand rays for the right hand only
            //PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOff, Handedness.Right);
            //The following code will return hand rays to their default behavior in MRTK:

            //PointerUtils.SetHandRayPointerBehavior(PointerBehavior.Default);
            //The following code will force hand rays to be on, regardless if near a grabbable:

            // Turn off all hand rays
            //PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOn);
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
        robotOriginPosition = robotOrigin.transform.position;
        robot_path = (robotOriginPosition - indexObjectPosition);
        Debug.Log(robot_path.ToString("f3"));
        var arlist1 = new ArrayList();
        arlist1.Add(robot_path);

        if (buttonClick == true)
        {
            if (startTime > 5.0f)
            {
                POS.Add(indexObjectPosition);// add the current coordinate into the linked list 
                path = POS.ToArray();// convert to array 
                Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                Line.SetPositions(path);// set the vertex position
                Line.material = new Material(Shader.Find("Sprites/Default"));
                if (safetyDistance < 0.075)
                {
                    C1 = Color.red;
                    C2 = Color.red;
                    //Line.SetColors(C3, C4);
                    Debug.Log(safetyDistance + "Safety Distance obstacle");
                    Debug.Log(cylinderobstaclePosition + "Safety Distance Cylinder");
                }
                else if(cylindersafetyDistance < 0.1)
                {
                    C1 = Color.red;
                    C2 = Color.red;
                    //Line.SetColors(C3, C4);
                    Debug.Log(safetyDistance + "Safety Distance obstacle");
                    Debug.Log(cylinderobstaclePosition + "Safety Distance Cylinder");
                }
                else
                {
                    Line.SetColors(C1, C2);
                }
                
                StartCoroutine(PostRequest("http://" + IP_Address + ":5000/MR_HandPath", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));
            }

            else
            {
                startTime = startTime + Time.deltaTime;
            }
           
        }

    }

    public void StartPlanning()
    {
        buttonClick = true;
        /*
        StartCoroutine(makeWait());
        POS.Add(indexObjectPosition);// add the current coordinate into the linked list 
        path = POS.ToArray();// convert to array 
        Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
        Line.SetPositions(path);// set the vertex position
        StartCoroutine(PostRequest("http://" + IP_Address + ":5000/MR_HandPath", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));
        button.GetComponent<Button>().onClick.AddListener(FixedUpdate);
        */
    }


    public void StopPlanning()
    {
        C1 = Color.green;
        C2 = Color.green;
        startTime = 0.0f;
        POS.Clear();
        path = POS.ToArray();
        //Destroy(clone.gameObject.GetComponent<LineRenderer>());
        StartCoroutine(StartRobotRequest("http://" + IP_Address + ":5000/api", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));
        Debug.Log("Robot Path" + robot_path);
        buttonClick = false;
    }

    public void DeletePlanning()
    {
        C1 = Color.green;
        C2 = Color.green;
        startTime = 0.0f;
        POS.Clear();
        path = POS.ToArray();
        StartCoroutine(PostRequest("http://" + IP_Address + ":5000/MR_HandPath_delete", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));
        Debug.Log("Robot Path" + robot_path);
        buttonClick = false;
    }

    public void Pick()
    {
        StartCoroutine(PostRequest("http://" + IP_Address + ":5000/pick", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));

    }

    public void Place()
    {
        StartCoroutine(PostRequest("http://" + IP_Address + ":5000/place", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));

    }

    IEnumerator PostRequest(string url, string json)
    {
        var uwr = new UnityWebRequest(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        yield return new WaitForSeconds(5);

        //Send the request then wait here until it returns
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
            dobot_Pose = uwr.downloadHandler.text;
            Debug.Log("Dobot Position" + dobot_Pose);
        }
    }

    IEnumerator StartRobotRequest(string url, string json)
    {
        var uwr = new UnityWebRequest(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        yield return new WaitForSeconds(5);

        //Send the request then wait here until it returns
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
            dobot_Pose = uwr.downloadHandler.text;
            Debug.Log("Dobot Position" + dobot_Pose);
        }
    }

    IEnumerator makeWait()
    {
        yield return new WaitForSeconds(5.0f);
    }
}
