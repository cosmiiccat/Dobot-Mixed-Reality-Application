using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit;
using UnityEngine.Networking;

public class RobotActiveHTTP : MonoBehaviour, IMixedRealityTouchHandler
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
    Vector3[] path;
    List<Vector3> POS = new List<Vector3>();
    private float startTime;
    private Color C1;
    private Color C2;
    private Color C3;
    private Color C4;

    public GameObject[] endPoint;
    public GameObject robotOrigin;
    public static Vector3 robotOriginPosition;
    public static Vector3 pointerPos;
    public static Vector3 robot_path;
    public static Vector3 send_robot_path;
    public static string dobot_Pose;
    private float currentTime;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

        IP_Address = Enter_IP_Address.enterIP_Address;
        Debug.Log("IP_Address" + IP_Address);
        currentTime = Timer.curTime;
    }


    

    void IMixedRealityTouchHandler.OnTouchCompleted(HandTrackingInputEventData eventData)
    {
        OnTouchCompleted.Invoke(eventData);
        Debug.Log("IP_Address" + IP_Address);
        DataSenderHTTP.objectClick = false;
        DataSenderHTTP.Line_POS.Clear();
    }

    void IMixedRealityTouchHandler.OnTouchStarted(HandTrackingInputEventData eventData)
    {
        OnTouchStarted.Invoke(eventData);

        StartCoroutine(StartRobotRequest("http://" + IP_Address + ":5000/api", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5") + "," + currentTime.ToString("f5")));



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


        DataSenderHTTP.Line_POS.Clear();
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

