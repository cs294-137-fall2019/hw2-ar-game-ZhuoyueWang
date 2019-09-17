using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallMover : MonoBehaviour, OnTouch3D
{
    public float delayTime;
    public float downDistance;

    private bool hidden;
    private float remainHiddenTime;

    private GameObject father;
    private BallController fathersWond;
    // Start is called before the first frame update
    void Start()
    {
        father = this.gameObject.transform.parent.gameObject;
        fathersWond = father.GetComponent<BallController>();
    }

    // Update is called once per frame
    void Update()
    {
        //if (Input.GetKey("down"))
        //{
        //    int touchIndex = transform.GetSiblingIndex();
        //    fathersWond.BallReset(touchIndex, true);
        //}
    }

    public void OnTouch()
    {
        int touchIndex = transform.GetSiblingIndex();
        fathersWond.BallReset(touchIndex, true);
        Debug.Log("Touched: "+touchIndex);
    }
}
