#pragma once
#include "Include.h"

class GameObject;
class ObjectManager
{
	//** ½Ì±ÛÅæ
private:
	static ObjectManager* Instance;
public:
	static ObjectManager* GetInstance()
	{
		if (Instance == nullptr) 
		{
			Instance = new ObjectManager;
			return Instance;
		}

	}
private:
	//¹è¿­ »ç¿ë
	//map:À¯´ÏÆ¼ÀÇ µñ¼Å³Ê¸®
	map<string,list<GameObject*>> ObjectList;

public:
	void AddObject(GameObject* _Object);

	list<GameObject*>* GetObjectList(string key);

private:
	ObjectManager();
public:
	~ObjectManager();
};



