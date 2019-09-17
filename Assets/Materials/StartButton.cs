using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartButton : MonoBehaviour, OnTouch3D
{
    public GameObject objectToStart;
    public float debounceTime = 0.3f;
    public float popDuration;
    public float loopTime;

    // Stores a counter for the current remaining wait time.
    private float remainingDebounceTime;

    // Start is called before the first frame update
    void Start()
    {
        remainingDebounceTime = 0.0f;
    }

    // Update is called once per frame
    void Update()
    {
        if (remainingDebounceTime > 0)
            remainingDebounceTime -= Time.deltaTime;
    }

    public void OnTouch()
    {
        this.gameObject.transform.parent.gameObject.transform.parent.gameObject.SetActive(false);
        objectToStart.SetActive(true);
        objectToStart.GetComponent<BallController>().ConfigDifficulty(loopTime, popDuration);
    }
}
