#pragma once
#include "Include.h"

class Scene;
class SceneManager
{
private:
	static SceneManager* Instance;

public:
	static SceneManager* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new SceneManager;
			return Instance;
		}

	}

private:
	Scene* SceneState;
public:
	void SetScene(SENEID _State);

private:
	SceneManager();
public:
	~SceneManager();

//** class로 형성한 것과 h(헤더)만 만든 것의 차이?
//   우선권이 있는 함수(inline 함수)
//   class안에 작성하면 inline함수가 된다.즉,우선권을 가진다.
//   즉, 코드의 위치 마저도 이유가 있는 코드를 작성해야한다.

};

