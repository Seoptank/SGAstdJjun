#pragma once
#include "Include.h"

class MainUpdate
{
	//※규칙: 변수는 public으로 만들지 말자 
private:
	HDC m_hdc;
	
	RECT rcPoint;


public:
	void Start();
	void Update();
	void Render();
	void Destroy();

public:
	MainUpdate();
	~MainUpdate();

};

