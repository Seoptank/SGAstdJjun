#pragma once
#include "GameObject.h"

class Bullet:public GameObject
{
public:
	virtual void Start()override;
	virtual void Start(Vector3 _position)override;
	virtual int Update()override;
	virtual void Render(HDC hdc)override;
	virtual void Destroy()override;

	//** override:***********************공부하기***********************
	//			  override붙이면 함수 이름변경시 상위에 같은 함수 이름이 없으면 오류남

public:
	Bullet();
	virtual ~Bullet();

};

