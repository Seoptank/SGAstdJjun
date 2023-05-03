#pragma once
#include <iostream>
#include <cmath>
#include "GameObject.h"

class Bullet;
class Enemy : public GameObject
{
public:
    virtual void Start()override;
    virtual void Start(Vector3 _position)override
    {

    }
    virtual int Update()override;
    virtual void Render(HDC hdc)override;
    virtual void Destroy()override;
public:
    double Distance(Transform _e, Transform _b);

public:
    Enemy();
    virtual ~Enemy();
};