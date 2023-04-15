using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Windows.Speech;
using System.Linq;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit;
using UnityEngine.Networking;
using Microsoft.MixedReality.Toolkit.Utilities;

public class SpeechInput : MonoBehaviour
{
    //fields to your class to store the recognizer and keyword->action dictionary
    KeywordRecognizer keywordRecognizer;
    Dictionary<string, System.Action> keywords = new Dictionary<string, System.Action>();
    private string word;
    public GameObject robotOrigin;
    public static Vector3 robotOriginPosition;
    public static Vector3 pointerPos;
    public static Vector3 robot_path;
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

    [SerializeField]
    [Tooltip("Assign SpeechConfirmationTooltip.prefab here to display confirmation label. Optional.")]
    private SpeechConfirmationTooltip speechConfirmationTooltipPrefab = null;

    /// <summary>
    /// Tooltip prefab used to display confirmation label. Optional.
    /// </summary>
    public SpeechConfirmationTooltip SpeechConfirmationTooltipPrefab
    {
        get { return speechConfirmationTooltipPrefab; }
        set { speechConfirmationTooltipPrefab = value; }
    }

    private SpeechConfirmationTooltip speechConfirmationTooltipPrefabInstance = null;

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
        //Create keywords for keyword recognizer
        keywords.Add("activate", () =>
        {
            // action to be performed when this keyword is spoken
            Debug.Log("hi");
        });

        keywords.Add("Plan", Update);

        keywords.Add("Stop", Update);

        keywords.Add("pick", Update);

        keywords.Add("place", Update);

        keywords.Add("deactivate", () =>
        {
            // action to be performed when this keyword is spoken
            // keywordRecognizer.OnPhraseRecognized -= KeywordRecognizer_OnPhraseRecognized;
            //keywordRecognizer.Stop();
           
        });

        // Create the keyword recognizer and tell it what we want to recognize:
        keywordRecognizer = new KeywordRecognizer(keywords.Keys.ToArray());

        //register for the OnPhraseRecognized event
        keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
        keywordRecognizer.Start();

    }

    public void onClick()
    {
        IP_Address = Enter_IP_Address.enterIP_Address;
    }

    private void KeywordRecognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        System.Action keywordAction;
        // if the keyword recognized is in our dictionary, call that Action.
        if (keywords.TryGetValue(args.text, out keywordAction))
        {
            keywordAction.Invoke();
            Debug.Log(args.text);
            word = args.text;

            speechConfirmationTooltipPrefabInstance = Instantiate(speechConfirmationTooltipPrefab);

            // Update the text label with recognized keyword
            speechConfirmationTooltipPrefabInstance.SetText(args.text);

            // Trigger animation of the Speech Confirmation Tooltip prefab
            speechConfirmationTooltipPrefabInstance.TriggerConfirmedAnimation();

        }
    }

    private void OnApplicationQuit()
    {
        if (keywordRecognizer != null && keywordRecognizer.IsRunning)
        {
            keywordRecognizer.OnPhraseRecognized -= KeywordRecognizer_OnPhraseRecognized;
            keywordRecognizer.Stop();
        }
    }


    // Update is called once per frame

    private void Update()
    {
        indexObject.GetComponent<Renderer>().enabled = false;
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, Handedness.Right, out pose))
        {
            indexObject.GetComponent<Renderer>().enabled = true;
            indexObject.transform.position = pose.Position;
            indexObjectPosition = indexObject.transform.position;
            Debug.Log("Index object position "+ indexObject.transform.position);
            Debug.Log(IP_Address);

        }
    }
    void FixedUpdate()
    {
        IP_Address = Enter_IP_Address.enterIP_Address;

        foreach (var source in MixedRealityToolkit.InputSystem.DetectedInputSources)
        {
            // Turn off all hand rays
            PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOff);

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

        if (word == "Plan")
        {
            if (startTime > 5.0f)
            {
                POS.Add(indexObjectPosition);// add the current coordinate into the linked list 
                path = POS.ToArray();// convert to array 
                Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
                Line.SetPositions(path);// set the vertex position
                StartCoroutine(PostRequest("http://" + IP_Address + ":5000/MR_HandPath", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));
            }

            else
            {
                startTime = startTime + Time.deltaTime;
            } 
            
        }

        if (word != "Plan")
        {
            startTime = 0.0f;
            POS.Clear();
            path = POS.ToArray();
            //Destroy(clone.gameObject.GetComponent<LineRenderer>());
        }



        switch (word)
        {
            case "Plan":
                Debug.Log("hi");
                //StartCoroutine(PostRequest("http://" + IP_Address + ":5000/MR_HandPath", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));
                break;
            case "Stop":
                StartCoroutine(StartRobotRequest("http://" + IP_Address + ":5000/api", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));
                word = null;
                break;
            case "delete":
                StartCoroutine(PostRequest("http://" + IP_Address + ":5000/MR_HandPath_delete", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));
                word = null;
                break;
            case "pick":
                StartCoroutine(PostRequest("http://" + IP_Address + ":5000/pick", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));
                word = null;
                break;
            case "place":
                StartCoroutine(PostRequest("http://" + IP_Address + ":5000/place", robot_path.x.ToString("f5") + "," + robot_path.y.ToString("f5") + "," + robot_path.z.ToString("f5")));
                word = null;
                break;
            default:
                Debug.Log("waiting for input speech command");
                break;
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
}
