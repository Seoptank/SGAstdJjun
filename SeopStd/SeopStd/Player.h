#pragma once
#include "GameObject.h"
#include "Bullet.h"


//** �Լ� ���δ� �������� �ʴ´�.
class Bullet;
class Player: public GameObject
{
private:
	GameObject* BulletList[BULLETCOUNT];
public:
	 virtual void Start()override;
	 virtual void Start(Vector3 _position)override;
	 virtual int Update()override;
	 virtual void Render(HDC hdc)override;
	 virtual void Destroy()override;
//** Ŀ���� �Լ���
public:
	GameObject* CreateBullet();
	 
public:
	Player();
	virtual ~Player();
};

