using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

namespace QRTracking
{
    public class MyCubinCurve : MonoBehaviour
    {
        private Vector3 startPoint;
        private Vector3 stopPoint;
        [Range(1, 256)]
        [SerializeField] int resolution = 1;//line resolution
        private float controlPoint_X, controlPoint_Y;
        private int i;
        LineRenderer line;
        private Vector3 convertVector;
        private List<Vector3> cubicPoint;
        private Vector3[] sendPoint;
        private Vector3[] vertices;
        public GameObject projectionPlane;
        private string IP_Address;
        private Vector3 projectionPlanePos;

        private string word;
        private float timeinterval;
        public GameObject circle;
        public GameObject ellipse;
        public GameObject parabola;
        public GameObject cubic;
        public GameObject anchorPosition;
        private string dobot_Pose;
        private Vector3 sendPos;
        private Vector3 anchorPos, QR_Position;

        private void Awake()
        {
            line = GetComponent<LineRenderer>();
        }

        // Start is called before the first frame update
        public void Start()
        {
            startPoint = new Vector3(-0.08f, -0.1f, 0.2f);
            stopPoint = new Vector3(0.08f, -0.1f, 0.2f);
            i = 0;
            vertices = new Vector3[resolution + 1];
            word = "terminate";
        }

        // Update is called once per frame
        void Update()
        {
            //CubicCurve();
            IP_Address = Enter_IP_Address.enterIP_Address;
            QR_Position = QRCode.QR_Position;
            anchorPos = anchorPosition.transform.position;
            QR_Position = QRCode.QR_Position;
            //projectionPlane.transform.position = new Vector3 (QR_Position.x, QR_Position.y + 0.1f, QR_Position.z);
            projectionPlanePos = projectionPlane.transform.position;
        }

        public void CubicCurve()
        {
            //parabola.GetComponent<LineRend>().enabled = false;
            circle.GetComponent<LineRenderer>().enabled = false;
            ellipse.GetComponent<LineRenderer>().enabled = false;
            cubic.GetComponent<LineRenderer>().enabled = true;
            parabola.GetComponent<LineRenderer>().enabled = false;
            /*
            parabola.SetActive(true);
            cubic.SetActive(true);
            circle.SetActive(true);
            ellipse.SetActive(true);
            circle.SetActive(false);
            ellipse.SetActive(false);
            parabola.SetActive(false);
            cubic.SetActive(true);
            word = "start";
            */
            float deltaX = (stopPoint.x - startPoint.x) / resolution;
            float deltaY = (stopPoint.y - startPoint.y) / resolution;

            for (i = 0; i <= resolution; i++)
            {
                controlPoint_X = startPoint.x + deltaX * i;
                controlPoint_Y = controlPoint_X * controlPoint_X * controlPoint_X;
                //controlPoint_Y = (controlPoint_X * controlPoint_X * controlPoint_X)-(0.8f* controlPoint_X * controlPoint_X) + 0.15f* controlPoint_X+1;
                vertices[i].x = controlPoint_X + projectionPlanePos.x;
                vertices[i].y = projectionPlanePos.y;
                vertices[i].z = controlPoint_Y * 100 + projectionPlanePos.z;
                //vertices[i] = Quaternion.EulerAngles(90, 0, 0) * vertices[i];
                Debug.Log("Line position " + vertices[i]);
                sendPos = new Vector3(anchorPos.x - vertices[i].x, anchorPos.y - vertices[i].y, anchorPos.z - vertices[i].z);
                StartCoroutine(PostRequest("http://" + IP_Address + ":5000/parabola",  sendPos.x.ToString("f5") + "," + sendPos.y.ToString("f5") + "," + sendPos.z.ToString("f5") + "," + QR_Position.ToString("f5") + "," + anchorPos.ToString("f5") + "," + sendPos.ToString("f5") + "," + "Cubic"));


            }

            line.positionCount = resolution + 1;
            line.SetPositions(vertices);
            Debug.Log("Vertices " + vertices);
            
        }


        
        private static List<Vector3> SendVector(List<Vector3> cubicPoint)
        {
            List<Vector3> nb = new List<Vector3>();
            for (int i = 0; i < cubicPoint.Count; i++)
            {
                if (i < cubicPoint.Count)
                {
                    nb.Add(cubicPoint[i]);
                }
            }
            return nb;
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

