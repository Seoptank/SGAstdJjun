#pragma once
#include "GameObject.h"

//** 함수 내부는 정의하지 않는다.
class Player: public GameObject
{
public:
	void Start();
	void Update();
	void Render(HDC hdc);
	void Destroy();

public:
	Player();
	~Player();
	
};

