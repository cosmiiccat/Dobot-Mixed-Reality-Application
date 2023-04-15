using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineRend : MonoBehaviour
{
    public GameObject clone;// this is an empty object. Only one linerenderer component is added 
    private LineRenderer Line;
    Vector3[] path;
    List<Vector3> POS = new List<Vector3>();
    private Vector3 Hand_POS;

    void Awake()
    {
        path = POS.ToArray();// initialize 
        Line = clone.GetComponent<LineRenderer>();// get the linerender component 
        //Line.material = new Material(Shader.Find("particles/additive"));
        Line.SetColors(Color.blue, Color.red);// set the color 
        Line.SetWidth(0.05f, 0.01f);// set the width 
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    [System.Obsolete]
    void Update()
    {
        Hand_POS = SpeechInput.indexObjectPosition;
        POS.Add(Hand_POS);// add the current coordinate into the linked list 
        path = POS.ToArray();// convert to array 
        Line.SetVertexCount(path.Length); //when there is data;// set the vertex number 
        Line.SetPositions(path);// set the vertex position 
    }
}
