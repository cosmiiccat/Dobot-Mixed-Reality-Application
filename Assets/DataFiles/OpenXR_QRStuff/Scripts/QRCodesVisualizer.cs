using System.Collections;

using System.Collections.Generic;

using UnityEngine;

using Microsoft.MixedReality.QR;
namespace QRTracking
{
    public class QRCodesVisualizer : MonoBehaviour
    {
        public GameObject qrCodePrefab;
        public GameObject Anchor,mappingObject;
        private Vector3 Anchor_Position, mappingObjectPos,QR_Position;
        private string QR_Tittle;


        private System.Collections.Generic.SortedDictionary<System.Guid, GameObject> qrCodesObjectsList;
        private bool clearExisting = false;

        struct ActionData
        {
            public enum Type
            {
                Added,
                Updated,
                Removed
            };
            public Type type;
            public Microsoft.MixedReality.QR.QRCode qrCode;

            public ActionData(Type type, Microsoft.MixedReality.QR.QRCode qRCode) : this()
            {
                this.type = type;
                qrCode = qRCode;
            }
        }

        private System.Collections.Generic.Queue<ActionData> pendingActions = new Queue<ActionData>();
        void Awake()
        {

        }

        // Use this for initialization
        void Start()
        {
            Debug.Log("QRCodesVisualizer start");
            qrCodesObjectsList = new SortedDictionary<System.Guid, GameObject>();

            QRCodesManager.Instance.QRCodesTrackingStateChanged += Instance_QRCodesTrackingStateChanged;
            QRCodesManager.Instance.QRCodeAdded += Instance_QRCodeAdded;
            QRCodesManager.Instance.QRCodeUpdated += Instance_QRCodeUpdated;
            QRCodesManager.Instance.QRCodeRemoved += Instance_QRCodeRemoved;
            if (qrCodePrefab == null)
            {
                throw new System.Exception("Prefab not assigned");
            }
        }
        private void Instance_QRCodesTrackingStateChanged(object sender, bool status)
        {
            if (!status)
            {
                clearExisting = true;
            }
        }

        private void Instance_QRCodeAdded(object sender, QRCodeEventArgs<Microsoft.MixedReality.QR.QRCode> e)
        {
            Debug.Log("QRCodesVisualizer Instance_QRCodeAdded");

            lock (pendingActions)
            {
                pendingActions.Enqueue(new ActionData(ActionData.Type.Added, e.Data));
            }
        }

        private void Instance_QRCodeUpdated(object sender, QRCodeEventArgs<Microsoft.MixedReality.QR.QRCode> e)
        {
            Debug.Log("QRCodesVisualizer Instance_QRCodeUpdated");

            lock (pendingActions)
            {
                pendingActions.Enqueue(new ActionData(ActionData.Type.Updated, e.Data));
            }
        }

        private void Instance_QRCodeRemoved(object sender, QRCodeEventArgs<Microsoft.MixedReality.QR.QRCode> e)
        {
            Debug.Log("QRCodesVisualizer Instance_QRCodeRemoved");

            lock (pendingActions)
            {
                pendingActions.Enqueue(new ActionData(ActionData.Type.Removed, e.Data));
            }
        }

        private void HandleEvents()
        {
            lock (pendingActions)
            {
                while (pendingActions.Count > 0)
                {
                    var action = pendingActions.Dequeue();
                    if (action.type == ActionData.Type.Added)
                    {
                        GameObject qrCodeObject = Instantiate(qrCodePrefab, new Vector3(0, 0, 0), Quaternion.identity);
                        //QR_Tittle = GameObject.Find("QRText").GetComponent<TextMesh>().text;
                        qrCodeObject.GetComponent<SpatialGraphNodeTracker>().Id = action.qrCode.SpatialGraphNodeId;
                        qrCodeObject.GetComponent<QRCode>().qrCode = action.qrCode;
                        qrCodesObjectsList.Add(action.qrCode.Id, qrCodeObject);
                        QR_Tittle = action.qrCode.Data;
                    }
                    else if (action.type == ActionData.Type.Updated)
                    {
                        if (!qrCodesObjectsList.ContainsKey(action.qrCode.Id))
                        {
                            GameObject qrCodeObject = Instantiate(qrCodePrefab, new Vector3(0, 0, 0), Quaternion.identity);
                            //QR_Tittle = GameObject.Find("QRText").GetComponent<TextMesh>().text;
                            qrCodeObject.GetComponent<SpatialGraphNodeTracker>().Id = action.qrCode.SpatialGraphNodeId;
                            qrCodeObject.GetComponent<QRCode>().qrCode = action.qrCode;
                            qrCodesObjectsList.Add(action.qrCode.Id, qrCodeObject);
                            QR_Tittle = action.qrCode.Data;
                        }
                    }
                    else if (action.type == ActionData.Type.Removed)
                    {
                        if (qrCodesObjectsList.ContainsKey(action.qrCode.Id))
                        {
                            Destroy(qrCodesObjectsList[action.qrCode.Id]);
                            qrCodesObjectsList.Remove(action.qrCode.Id);
                            QR_Tittle = action.qrCode.Data;
                        }
                    }
                }
            }
            if (clearExisting)
            {
                clearExisting = false;
                foreach (var obj in qrCodesObjectsList)
                {
                    Destroy(obj.Value);
                }
                qrCodesObjectsList.Clear();

            }
        }

        // Update is called once per frame
        void Update()
        {
            HandleEvents();

            //new
            /*
            QR_Position = QRCode.QR_Position;
            QR_Tittle = QRCode.QR_Tittle;
            Anchor.transform.position = QRCode.QR_Position;
            Anchor_Position = Anchor.transform.position;
            Anchor.transform.position = new Vector3((Anchor_Position.x), (Anchor_Position.y + 0.05f), (Anchor_Position.z));
            */
            /*
            if (QR_Tittle == "Obstacle")
            {
                Anchor.transform.position = QRCode.QR_Position;
                Anchor_Position = Anchor.transform.position;
                Anchor.transform.position = new Vector3((Anchor_Position.x), (Anchor_Position.y + 0.055f), (Anchor_Position.z));

            }

            if (QR_Tittle == "Cylinder")
            {
                mappingObject.transform.position = new Vector3(QR_Position.x, QR_Position.y + 0.05f, QR_Position.z);
            }
            */
            if (QR_Tittle == "Obstacle_1")
            {
                Anchor.transform.position = QRCode.QR_Position;
                Anchor_Position = Anchor.transform.position;
                Anchor.transform.position = new Vector3((Anchor_Position.x), (Anchor_Position.y + 0.055f), (Anchor_Position.z));
            }
            else
            {
                Debug.Log("Look at QR code");
            }

            if (QR_Tittle == "Cylinder")
            {
                mappingObject.transform.position = QRCode.QR_Position;
                //cylinder.transform.rotation = new Quaternion(QRCode.QR_Rotation.x, (QRCode.QR_Rotation.y), QRCode.QR_Rotation.w, 1);
            }

            else
            {
                Debug.Log("Look at QR code");
            }
        }
    }
}