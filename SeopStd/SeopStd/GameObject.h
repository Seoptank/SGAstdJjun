#pragma once
#include "Include.h"

class GameObject
{
protected:
	Transform transform;
	int Speed;

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
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Render(HDC hdc) = 0;
	virtual void Destroy() = 0;

public:
	GameObject();
	~GameObject();
};

