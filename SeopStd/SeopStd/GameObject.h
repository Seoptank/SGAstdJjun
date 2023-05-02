#pragma once
#include "Include.h"

class GameObject
{
protected:
	Transform transform;
	int Speed;

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
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Render(HDC hdc) = 0;
	virtual void Destroy() = 0;

public:
	GameObject();
	~GameObject();
};

