#include "Player.h"

Player::Player() 
{

}

Player::~Player()
{
	
}

void Player::Start()
{
	transform.Position = new Vector3(700.0f, 350.0f, 0.0f);
	transform.Rotation = new Vector3(0.0f, 0.0f, 0.0f);
	transform.Scale = new Vector3(100.0f, 100.0f, 0.0f);
}
void Player::Update()
{
	if (GetAsyncKeyState(VK_UP))
	{
		transform.Position->y -= 5.0f;
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		transform.Position->y += 5.0f;
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		transform.Position->x -= 5.0f;

	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		transform.Position->x += 5.0f;

	}
}
void Player::Render(HDC hdc)
{
	Rectangle(hdc,
		int(transform.Position->x - (transform.Scale->x * 0.5f)),
		int(transform.Position->y - (transform.Scale->y * 0.5f)),
		int(transform.Position->x + (transform.Scale->x * 0.5f)),
		int(transform.Position->y + (transform.Scale->y * 0.5f))
		);
}
void Player::Destroy()
{

}
