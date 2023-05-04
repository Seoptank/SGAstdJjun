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

//** class�� ������ �Ͱ� h(���)�� ���� ���� ����?
//   �켱���� �ִ� �Լ�(inline �Լ�)
//   class�ȿ� �ۼ��ϸ� inline�Լ��� �ȴ�.��,�켱���� ������.
//   ��, �ڵ��� ��ġ ������ ������ �ִ� �ڵ带 �ۼ��ؾ��Ѵ�.

};

