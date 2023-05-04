#pragma once
#include "Include.h"
#include "GameObject.h"

class CollisionManager
{
public:
	//** 구(Circle) 충돌
	static bool Collision(GameObject* temp, GameObject* dest)
	{
		//** x값과 y값을 구한다.
		// temp: 중심이 되는 오브젝트
		// dest: 타겟의 오브젝트
		//※ 반대로 빼면 방향이 달라지니 주의

		//** x의 값과 y의 값을 구한다.
		float fx = dest->GetPosition().x - temp->GetPosition().x;
		float fy = dest->GetPosition().y - temp->GetPosition().y;
		
		//** 각각의 구의 반지름의 합을 구함
		float sum = dest->GetScale().x * temp->GetScale().x;

		//** 거리를 구함
		float distance = sqrt((fx * fx) + (fy * fy));
		

		if (distance < sum)
			return true;

		return false;
	}

	//** 사각형(Rect) 충돌
	static bool Collision(GameObject* temp, GameObject* dest)
	{
		if (temp->GetPosition().x + (temp->GetScale().x * 0.5f) > dest->GetPosition().x - (dest->GetScale().x * 0.5f) &&
			dest->GetPosition().x + (dest->GetScale().x * 0.5f) > temp->GetPosition().x - (temp->GetScale().x * 0.5f) &&
			temp->GetPosition().y + (temp->GetScale().y * 0.5f) > dest->GetPosition().y - (dest->GetScale().y * 0.5f) &&
			dest->GetPosition().y + (dest->GetScale().y * 0.5f) > temp->GetPosition().y - (temp->GetScale().y * 0.5f))
				return true;
		return false;
		
			
		
	}

};
