#pragma once
#include "Include.h"

class MainUpdate
{
	//�ر�Ģ: ������ public���� ������ ���� 
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

