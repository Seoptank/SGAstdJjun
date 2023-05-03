#pragma once
#include "Include.h"

class GameObject
{
protected:
	Transform transform;
	float Speed;


//** virtual: 가상 함수를 만들기 위한 조건
//            실제 함수는 존재하지 않고 가상으로만 존재
//** =0     : 순수하게 가상의 함수로만 존재하기 위한 작업
// 	          "순수 가상함수"라고 부름.
// 	        ※ =0이 들어가면 "추상 클래스"임
// 	           존재하지 않기에 생성은 못한다. 하지만, 추상클래스의 형태는 사용할 수 있다.
//** 가상함수를 쓰는 이유?: 어떤 클래스에서 사용하느냐에따라 
//	                        그 클래스에 대한 함수가 실행
// 우리가 Unity에서 Start등의 함수를 쓰는것과 같은 개념

public:
	virtual void Start()PURE;
	virtual void Start(Vector3 _position)PURE;
	virtual int Update()PURE;
	virtual void Render(HDC hdc)PURE;
	virtual void Destroy()PURE;
	//PURE : "=0"이라는 뜻임

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
	//**소멸할때도 GameObject는소멸되나 Player가 소멸되지 않아 힙에 계속 찬다.
	// 그래서 소멸자에 virtual을 붙여 문제를 해결한다.
};

