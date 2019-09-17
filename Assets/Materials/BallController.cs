using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BallController : MonoBehaviour
{
    public Text scoreText;
    public Text messageText;
    public GameObject startButton;
    public float popDistance;

    private List<Transform> balls;
    private List<bool> popped;
    private float loopCount;
    private float popCount;

    private float popDuration;
    private float loopTime;

    private int popIndex;
    private int score;
    private int remainLife;
    // Start is called before the first frame update
    void Start()
    {
        balls = new List<Transform>();
        // Transform[] children = GetComponentsInChildren<Transform>();
        foreach (Transform child in transform)
        {
            balls.Add(child);
        }
       
        popped = new List<bool>();
        for (int i = 0; i < 9; i++) popped.Add(false);
        loopCount = loopTime;
        popCount = .0f;
        score = 0;
        remainLife = 3;
        scoreText.gameObject.SetActive(true);
        UpdateScore();
        startButton.SetActive(false);
    }

    private void OnEnable()
    {
        Start();
    }

    // Update is called once per frame
    void Update()
    {
        loopCount -= Time.deltaTime;
        if (loopCount <= 0)
        {
            loopCount = loopTime;
            popIndex = (int)Random.Range(1.0f, 9.0f);
            BallPop(popIndex);
        }
        if (popCount > 0)
        {
            popCount -= Time.deltaTime;
            if (popCount <= 0)
            {
                BallReset(popIndex, false);
            }
        }
    }

    public void BallPop(int popIndex)
    {
        if (popIndex < 0 || popIndex > 8) Debug.Log("Error Indexing");
        if (!popped[popIndex])
        {
            popCount = popDuration;
            balls[popIndex].gameObject.transform.Translate(new Vector3(0, popDistance, 0));
            popped[popIndex] = true;
        }
    }

    public void BallReset(int popIndex, bool hit)
    {
        if (popIndex < 0 || popIndex > 8) Debug.Log("Error Indexing");
        if (popped[popIndex])
        {
            if (hit)
            {
                score++;
            }
            else
            {
                remainLife--;
            }
            UpdateScore();
            popCount = 0;
            balls[popIndex].gameObject.transform.Translate(new Vector3(0, -popDistance, 0));
            popped[popIndex] = false;
        }
    }

    private void UpdateScore()
    {
        if (remainLife<=0)
        {
            GameOver();
        }
        scoreText.text = "Score: " + score + "   Life: " + remainLife;
    }

    private void GameOver()
    {
        messageText.gameObject.SetActive(true);
        messageText.text = "Your Score: "+score;
        this.gameObject.SetActive(false);
        startButton.SetActive(true);
        score = 0;
        remainLife = 3;
    }

    public void ConfigDifficulty(float t1, float t2)
    {
        loopTime = t1;
        popDuration = t2;
        Debug.Log("LoopTime: " + t1 + "   PopDuration: " + t2);
        Start();
    }
}
