using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class QuadraticCurve : MonoBehaviour
{
    public Vector2 radius = new Vector2(0.05f, 0.05f);
    public float width = 0.01f;
    public float rotationAngle = 45;
    public int resolution = 400;

    private Vector3[] positions;
    private LineRenderer self_lineRenderer;

    //new
    public GameObject projectionPlane;
    private Vector3 projectionPlanePos;
    public GameObject circle;
    public GameObject ellipse;
    public GameObject parabola;
    public GameObject cubic;
    public GameObject anchorPosition;
    private string dobot_Pose;
    private Vector3 sendPos;
    private Vector3 anchorPos, QR_Position;
    private string IP_Address;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        IP_Address = Enter_IP_Address.enterIP_Address;
        anchorPos = anchorPosition.transform.position;
        //UpdateEllipse();
        //projectionPlanePos = projectionPlane.transform.position;
        Debug.Log("circle radius value "+ radius[0] + radius[1]);
    }

    public void CreateEllipse()
    {
        parabola.GetComponent<LineRenderer>().enabled = false;
        circle.GetComponent<LineRenderer>().enabled = false;
        ellipse.GetComponent<LineRenderer>().enabled = true;
        cubic.GetComponent<LineRenderer>().enabled = false;

        /*
        parabola.SetActive(true);
        cubic.SetActive(true);
        circle.SetActive(true);
        ellipse.SetActive(true);
        parabola.SetActive(false);
        cubic.SetActive(false);
        */
        UpdateEllipse();
    }

    public void UpdateEllipse()
    {
        projectionPlanePos = projectionPlane.transform.position;
        if (self_lineRenderer == null)
            self_lineRenderer = GetComponent<LineRenderer>();

        self_lineRenderer.SetVertexCount(resolution + 3);

        //self_lineRenderer.SetWidth(width, width);


        AddPointToLineRenderer(0f, 0);
        for (int i = 1; i <= resolution + 1; i++)
        {
            AddPointToLineRenderer((float)i / (float)(resolution) * 2.0f * Mathf.PI, i);
        }
        AddPointToLineRenderer(0f, resolution + 2);
    }

    void AddPointToLineRenderer(float angle, int index)
    {
        Quaternion pointQuaternion = Quaternion.AngleAxis(rotationAngle, Vector3.forward);
        Vector3 pointPosition;

        pointPosition = new Vector3(radius.x * Mathf.Cos(angle) + projectionPlanePos.x , projectionPlanePos.y , radius.y * Mathf.Sin(angle) + projectionPlanePos.z);
        pointPosition = pointQuaternion * pointPosition;
        sendPos = new Vector3(anchorPos.x - pointPosition.x, anchorPos.y - pointPosition.y, anchorPos.z - pointPosition.z);
        StartCoroutine(PostRequest("http://" + IP_Address + ":5000/parabola", sendPos.x.ToString("f5") + "," + sendPos.y.ToString("f5") + "," + sendPos.z.ToString("f5") + "," + QR_Position.ToString("f5") + "," + anchorPos.ToString("f5") + "," + sendPos.ToString("f5") + "," + "Ellipse"));


        self_lineRenderer.SetPosition(index, pointPosition);
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
            dobot_Pose = uwr.downloadHandler.text;
            Debug.Log("Dobot Position" + dobot_Pose);
        }
    }
}
