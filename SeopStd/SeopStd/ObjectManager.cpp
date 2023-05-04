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
	//Ű�� ã�� �ڵ�
	
	//** itorator: List�� �������� ������ �������� �������� map�̶�� ��
	//             List�տ��� key�� �����ִ�. key������ �������� �ʹ� ���ſ����Ƿ�
	//             �����͸� �༭ ������ ã���� �ְ� �ϴ� ��
	//             ex) ����ȭ�鿡 .exe������ �ٷΰ��� ����� ��  
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
		//&: ���̴� ������ �ٸ� �뵵�� ����


}
