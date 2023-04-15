using Microsoft.MixedReality.QR;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;


namespace QRTracking
{
    public class ExperimentActivation : MonoBehaviour
    {
        public GameObject[] experimentActivation;
        private int i, activeComponent,j,z;
        private string IP_Address;
        private string dobot_Pose;
        private Vector3 sendPos;
        private Vector3 QR_Position;
        private Vector3 sendPos_QR;
        public GameObject anchorPosition, mapObject,SLAM_object;
        private Vector3 anchorPos;

        private Vector3 head_position, head_rotation_angles, robot_originAngel, human_handAngle;
        private Quaternion head_rotation_quaternion;
        private float x_value, y_value, z_value;

        public GameObject sphere;
        private Vector3 spherePos, mapObjectPos, SLAM_objectPos, SLAM_objectPos_Anchor, SLAM_objectPos_mapObject,anchor_mapobj;

        // Start is called before the first frame update
        void Start()
        {
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            sphere.AddComponent<MeshRenderer>();
            sphere.AddComponent<MeshFilter>();
            sphere.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
            i = 0;
            activeComponent = 0;
            while (i < 22)
            {
                experimentActivation[i].SetActive(false);
                experimentActivation[i].GetComponent<Renderer>().material.color = Color.red;
                i = i + 1;
            }

            j = 0;
            while (j < 22)
            {
                experimentActivation[j].SetActive(false);
                experimentActivation[j].GetComponent<Renderer>().material.color = Color.red;
                j = j + 1;
            }

            while (z < 22)
            {
                experimentActivation[z].SetActive(false);
                experimentActivation[z].GetComponent<Renderer>().material.color = Color.red;
                z = z + 1;
            }
        }

        // Update is called once per frame
        void Update()
        {
            IP_Address = Enter_IP_Address.enterIP_Address;
            QR_Position = QRCode.QR_Position;
            anchorPos = anchorPosition.transform.position;
            spherePos = sphere.transform.position;
            mapObjectPos = mapObject.transform.position;
            SLAM_objectPos = SLAM_object.transform.position;
            SLAM_objectPos_Anchor = anchorPos - SLAM_objectPos;
            SLAM_objectPos_mapObject = SLAM_objectPos - mapObjectPos;
            anchor_mapobj = anchorPos - mapObjectPos;

            head_position = Camera.main.transform.position;
            head_rotation_quaternion = Camera.main.transform.rotation;
            head_rotation_angles = Camera.main.transform.localEulerAngles;
            Debug.Log("head position " + Camera.main.transform.position.ToString());
            Debug.Log("head rotation quaternion " + Camera.main.transform.rotation.ToString());
            Debug.Log("head rotation angles " + Camera.main.transform.localEulerAngles.ToString());

            //x_value = anchorPosition.transform.position.x - experimentActivation[activeComponent].transform.position.x;
            //y_value = anchorPosition.transform.position.y - experimentActivation[activeComponent].transform.position.y;
            //z_value = anchorPosition.transform.position.z - experimentActivation[activeComponent].transform.position.z;

            x_value = anchorPosition.transform.position.x - sphere.transform.position.x;
            y_value = anchorPosition.transform.position.y - sphere.transform.position.y;
            z_value = anchorPosition.transform.position.z - sphere.transform.position.z;
        }

        public void OnClick()
        {
            
            while (i < 22)
            {
                experimentActivation[i].SetActive(false);
                experimentActivation[i].GetComponent<Renderer>().material.color = Color.red;
                i = i + 1;
            }
            if (activeComponent >= 21)
            {
                activeComponent = 21;
            }
            experimentActivation[activeComponent].SetActive(true);
            sendPos = experimentActivation[activeComponent].transform.position;
            sphere.transform.position = sendPos;
            sendPos_QR = anchorPos - sendPos;
            Debug.Log("send position"+ anchorPos.ToString("f5") + sendPos.ToString("f5") + sendPos_QR.ToString("f5"));
            i = 0;
            activeComponent = activeComponent + 1;
            StartCoroutine(PostRequest("http://" + IP_Address + ":5000/LRTransform", sendPos_QR.x.ToString("f5") + "," + sendPos_QR.y.ToString("f5") + "," + sendPos_QR.z.ToString("f5")+ "," + QR_Position.ToString("f5") + "," + anchorPos.ToString("f5") + "," + sendPos.ToString("f5") + "," + head_position.ToString("f5") +"," + head_rotation_angles.ToString("f3") + "," + mapObjectPos.ToString("f5") + "," +SLAM_objectPos_Anchor.ToString("f5") + "," +SLAM_objectPos_mapObject.ToString("f5") + "," + anchor_mapobj.ToString("f5") +","+ sphere.transform.position.ToString("f5")));
            
            //StartCoroutine(PostRequest("http://" + IP_Address + ":5000/LRTransform", x_value.ToString("f5") + "," + y_value.ToString("f5") + "," + z_value.ToString("f5")+ "," + QR_Position.ToString("f5") + "," + anchorPos.ToString("f5") + "," + sendPos.ToString("f5") + "," + head_position.ToString("f5") +"," + head_rotation_angles.ToString("f3")));

        }

        public void HomoTransform()
        {
            
            while (j < 22)
            {
                experimentActivation[j].SetActive(false);
                experimentActivation[j].GetComponent<Renderer>().material.color = Color.red;
                j = j + 1;
            }
            if (activeComponent >= 21)
            {
                activeComponent = 21;
            }
            experimentActivation[activeComponent].SetActive(true);
            sendPos = experimentActivation[activeComponent].transform.position;
            sphere.transform.position = sendPos;
            sendPos_QR = anchorPos - sendPos;
            Debug.Log("send position" + anchorPos.ToString("f5") + sendPos.ToString("f5") + sendPos_QR.ToString("f5"));
            j = 0;
            activeComponent = activeComponent + 1;
            StartCoroutine(PostRequest("http://" + IP_Address + ":5000/homoTransform", sendPos_QR.x.ToString("f5") + "," + sendPos_QR.y.ToString("f5") + "," + sendPos_QR.z.ToString("f5") + "," + QR_Position.ToString("f5") + "," + anchorPos.ToString("f5") + "," + sendPos.ToString("f5") + "," + head_position.ToString("f5") + "," + head_rotation_angles.ToString("f3") + "," + mapObjectPos.ToString("f5") + "," + SLAM_objectPos_Anchor.ToString("f5") + "," + SLAM_objectPos_mapObject.ToString("f5") + "," + anchor_mapobj.ToString("f5") + "," + sphere.transform.position.ToString("f5")));
            
            //StartCoroutine(PostRequest("http://" + IP_Address + ":5000/homoTransform", x_value.ToString("f5") + "," + y_value.ToString("f5") + "," + z_value.ToString("f5") + "," + QR_Position.ToString("f5") + "," + anchorPos.ToString("f5") + "," + sendPos.ToString("f5") + "," + head_position.ToString("f5") + "," + head_rotation_angles.ToString("f3")));

        }

        public void ManualMove()
        {
            while (z < 22)
            {
                experimentActivation[z].SetActive(false);
                experimentActivation[z].GetComponent<Renderer>().material.color = Color.red;
                z = z + 1;
            }
            if (activeComponent >= 21)
            {
                activeComponent = 21;
            }
            experimentActivation[activeComponent].SetActive(true);
            sendPos = experimentActivation[activeComponent].transform.position;
            sphere.transform.position = sendPos;
            sendPos_QR = anchorPos - sendPos;
            Debug.Log("send position" + anchorPos.ToString("f5") + sendPos.ToString("f5") + sendPos_QR.ToString("f5"));
            z = 0;
            activeComponent = activeComponent + 1;
            StartCoroutine(PostRequest("http://" + IP_Address + ":5000/ManualMove", sendPos_QR.x.ToString("f5") + "," + sendPos_QR.y.ToString("f5") + "," + sendPos_QR.z.ToString("f5") + "," + QR_Position.ToString("f5") + "," + anchorPos.ToString("f5") + "," + sendPos.ToString("f5") + "," + head_position.ToString("f5") + "," + head_rotation_angles.ToString("f3")));
            
        }

        public void ChangeHeightX()
        {
            sphere.transform.position = new Vector3(spherePos.x +0.1f, spherePos.y , spherePos.z);
        }

        public void ChangeHeightY()
        {
            sphere.transform.position = new Vector3(spherePos.x, spherePos.y + 0.05f, spherePos.z);
        }

        public void ChangeHeightZ()
        {
            sphere.transform.position = new Vector3(spherePos.x, spherePos.y, spherePos.z + 0.08f);
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

