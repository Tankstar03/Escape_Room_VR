using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleImpact : MonoBehaviour
{
    public AudioSource collisionEffect;

    private float velocityThreshold = 1.0F;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.relativeVelocity.magnitude > velocityThreshold)
        {
            collisionEffect.Play();
        }
    }
}
