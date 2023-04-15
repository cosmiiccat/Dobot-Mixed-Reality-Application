using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class ParabolaCurve : MonoBehaviour
{
    public Transform target0;
    public Transform target1;
    [Range(1, 256)]
    [SerializeField] int resolution = 1;//line resolution
    [Range(0.1f, 100f)]
    [SerializeField] float height = 0.1f;

    LineRenderer line;
    public GameObject circle;
    public GameObject ellipse;
    public GameObject parabola;
    public GameObject cubic;
    public GameObject anchorPosition;
    private string dobot_Pose;
    private Vector3 sendPos;
    private Vector3 anchorPos, QR_Position;
    private string IP_Address;
    public GameObject projectionPlane;
    private Vector3 projectionPlanePos;

    private void Awake()
    {
        line = GetComponent<LineRenderer>();
    }
    private void Update()
    {
        IP_Address = Enter_IP_Address.enterIP_Address;
        anchorPos = anchorPosition.transform.position;
        projectionPlanePos = projectionPlane.transform.position;
        //GenerateParabola();
        //new
    }

    public void CreateParabola()
    {
        parabola.GetComponent<LineRenderer>().enabled = true;
        circle.GetComponent<LineRenderer>().enabled = false;
        ellipse.GetComponent<LineRenderer>().enabled = false;
        cubic.GetComponent<LineRenderer>().enabled = false;
        /*
        parabola.SetActive(true);
        cubic.SetActive(true);
        circle.SetActive(true);
        ellipse.SetActive(true);
        circle.SetActive(false);
        ellipse.SetActive(false);
        parabola.SetActive(true);
        cubic.SetActive(false);
        */
        GenerateParabola();
    }
    public void GenerateParabola()
    {
        if (target0 != null && target1 != null)
            DrawParabola();
    }
    /*Eqation
       x^2 = 4p(y-height) :p<0 
        => draw between 
        pos0(sqrt(-4p*height):a, 0)~ pos1(b:b<0,c)
    */
    private void DrawParabola()
    {
        Vector3 pos0 = target0.position;
        Vector3 pos1 = target1.position;

        float deltaX = (pos1.x - pos0.x) / resolution;
        float deltaZ = (pos1.z - pos0.z) / resolution;

        float p, a, b, c = pos1.y - pos0.y;
        float h = c <= height ? height : c;
        Vector3[] vertices = new Vector3[resolution + 1];

        if (c == 0)
        {
            a = (pos0.x - pos1.x) * 0.5f;
            b = -a;

            p = a * a / (-4 * h);
            if (p == 0)
            {
                StraightLine();
                return;
            }
        }
        else
        {
            p = pos0.x - pos1.x;
            p /= Mathf.Sqrt(4 * h) + Mathf.Sqrt(4 * (h - c));
            p *= -p;
            if (p == 0)
            {
                StraightLine();
                return;
            }

            a = deltaX >= 0 ? -Mathf.Sqrt(4 * p * -h) : Mathf.Sqrt(4 * p * -h);
            b = deltaX >= 0 ? Mathf.Sqrt(4 * p * (c - h)) : -Mathf.Sqrt(4 * p * (c - h));
        }

        //setVertices
        vertices[0] = pos0;
        vertices[resolution] = pos1;
        for (int i = 0; i <= resolution; i++)
        {
            float x = a + (deltaX * i);
            float y = x * x / (4 * p) + h;
            vertices[i].x = pos0.x + x - a;
            //vertices[i].z = pos0.y + y;
            //vertices[i].y = pos0.z + (deltaZ * i);
            //vertices[i].z = y-0.05f;
            vertices[i].z = pos0.z + y;
            vertices[i].y = pos0.y;
            sendPos = new Vector3(anchorPos.x-vertices[i].x, anchorPos.y - vertices[i].y, anchorPos.z - vertices[i].z);
            StartCoroutine(PostRequest("http://" + IP_Address + ":5000/parabola", sendPos.x.ToString("f5") + "," + sendPos.y.ToString("f5") + "," + sendPos.z.ToString("f5") + "," + QR_Position.ToString("f5") + "," + anchorPos.ToString("f5") + "," + sendPos.ToString("f5") + "," + "Parabola" ));

        }

        //setLine
        line.positionCount = resolution + 1;
        line.SetPositions(vertices);
    }
    void StraightLine()
    {
        line.positionCount = 2;
        line.SetPosition(0, target0.position);
        line.SetPosition(1, target1.position);
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

