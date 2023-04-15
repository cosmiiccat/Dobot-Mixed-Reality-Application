using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoRotation : MonoBehaviour
{
    public GameObject anchor;
    private Quaternion anchorRotation;
    private Quaternion newanchorRotation;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        anchorRotation = anchor.transform.rotation;
        newanchorRotation = new Quaternion(0, 0, 0, 1);
        anchor.transform.rotation = newanchorRotation;
    }
}
