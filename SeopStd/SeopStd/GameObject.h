#pragma once
#include "Include.h"

class GameObject
{
protected:
	Transform transform;
	float Speed;


//** virtual: ���� �Լ��� ����� ���� ����
//            ���� �Լ��� �������� �ʰ� �������θ� ����
//** =0     : �����ϰ� ������ �Լ��θ� �����ϱ� ���� �۾�
// 	          "���� �����Լ�"��� �θ�.
// 	        �� =0�� ���� "�߻� Ŭ����"��
// 	           �������� �ʱ⿡ ������ ���Ѵ�. ������, �߻�Ŭ������ ���´� ����� �� �ִ�.
//** �����Լ��� ���� ����?: � Ŭ�������� ����ϴ��Ŀ����� 
//	                        �� Ŭ������ ���� �Լ��� ����
// �츮�� Unity���� Start���� �Լ��� ���°Ͱ� ���� ����

public:
	virtual void Start()PURE;
	virtual void Start(Vector3 _position)PURE;
	virtual int Update()PURE;
	virtual void Render(HDC hdc)PURE;
	virtual void Destroy()PURE;
	//PURE : "=0"�̶�� ����

//Getter,Setter
public:
	Transform GetTransform() { return transform; }
	//void SetTransform(Transform _transform) { transform = _transform; }

	Vector3 GetPosition() { return transform.Position; }
	void SetPosition(Vector3 _position) 
	{ transform.Position = _position; }


public:
	GameObject();
	virtual ~GameObject();
	//**�Ҹ��Ҷ��� GameObject�¼Ҹ�ǳ� Player�� �Ҹ���� �ʾ� ���� ��� ����.
	// �׷��� �Ҹ��ڿ� virtual�� �ٿ� ������ �ذ��Ѵ�.
};

