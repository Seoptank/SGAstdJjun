#pragma once
#include "Include.h"

class GameObject;
class MainUpdate
{
	//※규칙1: 변수는 public으로 만들지 말자 
private:
	HDC m_hdc;
	
	GameObject* m_pPlayer;

public:
	void Start();
	void Update();
	void Render();
	void Destroy();

public:
	MainUpdate();
	~MainUpdate();

};

