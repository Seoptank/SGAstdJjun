#pragma once
#include "GameObject.h"


//** 함수 내부는 정의하지 않는다.
class Player: public GameObject
{
private:
	GameObject* BulletList[BULLETCOUNT];
public:
	 virtual void Start()override;
	 virtual void Start(Vector3 _position)override 
	 {

	 }
	 virtual int Update()override;
	 virtual void Render(HDC hdc)override;
	 virtual void Destroy()override;
//** 커스텀 함수↓
public:
	GameObject* CreateBullet();
	 
public:
	Player();
	virtual ~Player();
};

