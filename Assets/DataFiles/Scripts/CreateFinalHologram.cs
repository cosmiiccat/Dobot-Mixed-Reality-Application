using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System;
using System.Linq;

public class CreateFinalHologram : MonoBehaviour
{
    public GameObject anchor;
    private Vector3 anchorPos;
    private string dobot_Pose;
    private string IP_Address;
    private GameObject _Sphere;
    private List<string> hologramsPosString;
    private float pos;
    private float[] hologramPosition;
    private float Holo_X, Holo_Y, Holo_Z;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        IP_Address = Enter_IP_Address.enterIP_Address;
        anchorPos = anchor.transform.position;
    }

    public void showHolo()
    {
        StartCoroutine(PostRequest("http://" + IP_Address + ":5000/SendVirtualData", 1.ToString()));
        createSphere();
    }

    public void createSphere()
    {
        Holo_X = (anchorPos.x - hologramPosition[0]);
        Holo_Y = anchorPos.y;
        Holo_Z = (anchorPos.z - hologramPosition[2]);
        _Sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        _Sphere.AddComponent<MeshFilter>();
        _Sphere.AddComponent<Renderer>();
        _Sphere.GetComponent<Renderer>().material.color = Color.green;
        _Sphere.transform.position = new Vector3(Holo_X, Holo_Y, Holo_Z);
        _Sphere.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
    }

    public void GoalPosition()
    {
        StartCoroutine(PostRequest("http://" + IP_Address + ":5000/SendGoalVirtualData", 1.ToString()));
        Holo_X = (anchorPos.x - hologramPosition[0]);
        Holo_Y = anchorPos.y;
        Holo_Z = (anchorPos.z - hologramPosition[2]);
        _Sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        _Sphere.AddComponent<MeshFilter>();
        _Sphere.AddComponent<Renderer>();
        _Sphere.GetComponent<Renderer>().material.color = Color.red;
        _Sphere.transform.position = new Vector3(Holo_X, Holo_Y, Holo_Z);
        _Sphere.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
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
            hologramsPosString = dobot_Pose.Split(',').ToList();
            List<float> hologramPos = new List<float>();
            for (int item = 0; item < hologramsPosString.Count; item++)
            {
                pos = pos = float.Parse(hologramsPosString[item]);
                hologramPos.Add(pos);
            }

            Debug.Log("object position in image " + hologramPos);

            hologramPosition = hologramPos.ToArray();
        }
    }
}
