#pragma once
#include "GameObject.h"

//** �Լ� ���δ� �������� �ʴ´�.
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

