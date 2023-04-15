using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit;
using UnityEngine.Networking;

public class DataSenderHTTP : MonoBehaviour, IMixedRealityTouchHandler
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

    private string IP_Address;
    public GameObject indexObject;
    MixedRealityPose pose;
    public static Vector3 indexObjectPosition;

    public GameObject clone;// this is an empty object. Only one linerenderer component is added 
    private LineRenderer Line;
    public static Vector3[] Line_path;
    public static List<Vector3> Line_POS = new List<Vector3>();
    private float startTime;
    private Color C1;
    private Color C2;
    private Color C3;
    private Color C4;

    public GameObject[] startPoint;
    public GameObject robotOrigin;
    public static Vector3 robotOriginPosition;
    public static Vector3 pointerPos;
    public static Vector3 robot_path;
    public static Vector3 send_robot_path;
    public static string dobot_Pose;
    public static bool objectClick;
    private float currentTime;

    void Awake()
    {
        Line_path = Line_POS.ToArray();// initialize 
        Line = clone.GetComponent<LineRenderer>();// get the linerender component 
        //Line.material = new Material(Shader.Find("particles/additive"));
        //Line.SetColors(Color.blue, Color.red);// set the color 
        //Line.SetWidth(0.05f, 0.01f);// set the width 
    }

    // Start is called before the first frame update
    void Start()
    {
        startTime = 0;
        C1 = Color.green;
        C2 = Color.green;
        C3 = Color.red;
        C4 = Color.red;
        objectClick = false;
    }

    // Update is called once per frame
    void Update()
    {
        indexObject.GetComponent<Renderer>().enabled = false;
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
        {
            indexObject.GetComponent<Renderer>().enabled = true;
            indexObject.transform.position = pose.Position;
            indexObjectPosition = indexObject.transform.position;
            Debug.Log("Index object position " + indexObject.transform.position);
            Debug.Log(IP_Address);

        }

        IP_Address = Enter_IP_Address.enterIP_Address;

        currentTime = Timer.curTime;

    }

    public void onClick()
    {
        IP_Address = Enter_IP_Address.enterIP_Address;
        Debug.Log("IP_Address" + IP_Address);
    }

    public void FixedUpdate()
    {
        IP_Address = Enter_IP_Address.enterIP_Address;
        Debug.Log("IP_Address" + IP_Address);

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


        C1 = Color.green;
        C2 = Color.green;
        Debug.Log("Fixed Update");
        if (objectClick == true)
        {
            Debug.Log("Fixed Update");
            Line_POS.Add(indexObjectPosition);// add the current coordinate into the linked list 
            Line_path = Line_POS.ToArray();// convert to array 
            Line.SetVertexCount(Line_path.Length); //when there is data;// set the vertex number 
            Line.SetPositions(Line_path);// set the vertex position
            Line.material = new Material(Shader.Find("Sprites/Default"));
            Line.SetColors(C1, C2);
            Debug.Log("line path"+ Line_path);
            IP_Address = Enter_IP_Address.enterIP_Address;
            Debug.Log("IP_Address" + IP_Address);
            StartCoroutine(PostRequest("http://" + IP_Address + ":5000/MR_HandPath", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5") + "," + currentTime.ToString("f5")));
            Debug.Log("Line Pos" + Line_POS);
        }


    }

    void IMixedRealityTouchHandler.OnTouchCompleted(HandTrackingInputEventData eventData)
    {
        OnTouchCompleted.Invoke(eventData);
        onClick();
        objectClick = true;
        Debug.Log(objectClick + "objectClick");
        Debug.Log("IP_Address" + IP_Address);
        startPoint[0].GetComponent<Renderer>().material.color = Color.green;
        startPoint[1].GetComponent<Renderer>().material.color = Color.green;
        startPoint[2].GetComponent<Renderer>().material.color = Color.green;
        startPoint[3].GetComponent<Renderer>().material.color = Color.green;
    }

    void IMixedRealityTouchHandler.OnTouchStarted(HandTrackingInputEventData eventData)
    {
        OnTouchStarted.Invoke(eventData);
        startPoint[0].GetComponent<Renderer>().material.color = Color.red;
        startPoint[1].GetComponent<Renderer>().material.color = Color.red;
        startPoint[2].GetComponent<Renderer>().material.color = Color.red;
        startPoint[3].GetComponent<Renderer>().material.color = Color.red;
        startTime = 0.0f;
        Line_POS.Clear();
        Line_path = Line_POS.ToArray();
        objectClick = true;
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
        startPoint[0].GetComponent<Renderer>().material.color = Color.red;
        startPoint[1].GetComponent<Renderer>().material.color = Color.red;
        startPoint[2].GetComponent<Renderer>().material.color = Color.red;
        startPoint[3].GetComponent<Renderer>().material.color = Color.red;
        objectClick = true;

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

    IEnumerator PostRequest(string url, string json)
    {
        var uwr = new UnityWebRequest(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        //yield return new WaitForSeconds(5);

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

        //yield return new WaitForSeconds(5);

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
}
