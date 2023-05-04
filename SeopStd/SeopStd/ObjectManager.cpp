#include "ObjectManager.h"
#include "GameObject.h"

ObjectManager* ObjectManager::Instance = nullptr;

ObjectManager::ObjectManager()
{
	
}

ObjectManager::~ObjectManager()
{

}

void ObjectManager::AddObject(GameObject* _Object)
{
	//BulletList.push_back(_Bullet);
	//키를 찾는 코드
	
	//** itorator: List가 여러개가 있을때 여러개를 모은것을 map이라고 함
	//             List앞에는 key가 각각있다. key원본을 가져오면 너무 무거워지므로
	//             포인터를 줘서 원본을 찾을수 있게 하는 것
	//             ex) 바탕화면에 .exe파일을 바로가기 만드는 것  
	map<string, list<GameObject*>>::iterator iter = ObjectList.find(
		_Object->GetKey());

	if (iter == ObjectList.end())
	{
		list<GameObject*> tempList;
		tempList.push_back(_Object);

		ObjectList.insert(make_pair(_Object->GetKey(), tempList));
	}
	else
		iter->second.push_back(_Object);

	iter->first; //key
	

}



list<GameObject*>*ObjectManager::GetObjectList(string key)
{
	map<string, list<GameObject*>>::iterator iter = ObjectList.find(key);

	if (iter == ObjectList.end())
		return nullptr;
	else
		return &iter->second; 
		//&: 쓰이는 곳마다 다른 용도로 쓰임


}
