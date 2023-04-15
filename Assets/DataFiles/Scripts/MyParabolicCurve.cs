using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;


namespace QRTracking
{
    public class MyParabolicCurve : MonoBehaviour
    {
        private Vector3 startPoint;
        private Vector3 stopPoint;
        private float a, k, c;
        private float calculate_Y;
        [Range(1, 256)]
        [SerializeField] int resolution = 1;//line resolution
        [Range(0.1f, 100f)]
        [SerializeField] float h = 0.1f;
        private float calculate_X;
        private int i;
        private Vector3[] vertices;
        LineRenderer line;
        private string dobot_Pose;
        private Vector3 sendingVector;
        private string sendingValue;
        private List<Vector3> cubicPoint;
        private List<string> cubicPointString;
        private Vector3[] sendPoint;
        public GameObject projectionPlane;
        private Vector3 QR_Position, projectionPlanePos;


        private void Awake()
        {
            line = GetComponent<LineRenderer>();
        }
        // Start is called before the first frame update
        void Start()
        {
            //startPoint = new Vector3(0f, 0.1f, 0.3f);
            //stopPoint = new Vector3(0.65f, 0.1f, 0.3f);
            cubicPoint = new List<Vector3>();
            cubicPointString = new List<string>();
            i = 0;
            vertices = new Vector3[resolution + 1];
        }

        // Update is called once per frame
        void Update()
        {
            //Parabola();
            QR_Position = QRCode.QR_Position;
            projectionPlane.transform.position = new Vector3(QR_Position.x, QR_Position.y + 0.1f, QR_Position.z);
            projectionPlanePos = projectionPlane.transform.position;
        }

        public void Parabola()
        {
            startPoint = new Vector3( -0.15f, projectionPlanePos.y, 0.1f);
            stopPoint = new Vector3(0.15f, projectionPlanePos.y,  - 0.1f);
            k = (stopPoint.x - startPoint.x) * 0.5f;
            float deltaX = (stopPoint.x - startPoint.x) / resolution;
            float deltaY = (stopPoint.y - startPoint.y) / resolution;
            c = (stopPoint.y - startPoint.y);

            Vector3[] vertices = new Vector3[resolution + 1];

            a = (startPoint.z - h) / ((startPoint.x - k) * (startPoint.x - k));
            calculate_X = startPoint.x;
            for (i = 0; i <= resolution; i++)
            {

                if (calculate_X<=k)
                {
                    calculate_X = calculate_X + deltaX;
                    calculate_Y = (a * (calculate_X - k) * (calculate_X - k)) + h;
                    vertices[i].y = calculate_Y ;
                }
                else
                {
                    calculate_X = calculate_X + deltaX;
                    calculate_Y = (a * (calculate_X - k) * (calculate_X - k)) + h;
                    vertices[i].y = calculate_Y;
                }


                vertices[i].x = calculate_X;

                vertices[i].z = projectionPlanePos.z;
                Debug.Log("Line position " + vertices[i]);
                //StartCoroutine(PostRequest("http://10.178.240.208:5000/parabola", sendingVector.x.ToString("f4") + "," + sendingVector.z.ToString("f4") + "," + sendingVector.z.ToString("f4")));
            }

            line.positionCount = resolution + 1;
            line.SetPositions(vertices);
            //StartCoroutine(PostRequest("http://10.178.240.208:5000/drawparabola", cubicPoint.ToString()));
        }

        private void SaveData()
        {
            cubicPointString.Add(sendingVector.ToString("f4"));
            Debug.Log("parabola position string value" + cubicPointString);
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
}

