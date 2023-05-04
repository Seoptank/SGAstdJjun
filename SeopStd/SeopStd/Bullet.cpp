#include "Bullet.h"

Bullet::Bullet()
{

}
Bullet::~Bullet()
{

}

void Bullet::Start()
{
	transform.Position = Vector3(0.0f, 0.0f, 0.0f);
	transform.Rotation = Vector3(0.0f, 0.0f, 0.0f);
	transform.Scale = Vector3(30.0f, 30.0f, 0.0f);
	
	key = "Bullet";
	Speed = 15.0f;

}

void Bullet::Start(Vector3 _position) 
{
	transform.Position = Vector3(_position);
	transform.Rotation = Vector3(0.0f, 0.0f, 0.0f);
	transform.Scale = Vector3(30.0f, 30.0f, 0.0f);

	Speed = 15.0f;

	key = "Bullet";
}

int Bullet::Update()
{
	
	transform.Position.x += Speed;

	if (transform.Position.x > WIDTH)
	{
		return 1;
	}
	return 0;
}
void Bullet::Render(HDC hdc)
{
	Ellipse(hdc,
		int(transform.Position.x - (transform.Scale.x * 0.5f)),
		int(transform.Position.y - (transform.Scale.y * 0.5f)),
		int(transform.Position.x + (transform.Scale.x * 0.5f)),
		int(transform.Position.y + (transform.Scale.y * 0.5f))
	);
}
void Bullet::Destroy()
{

}

//숙제: 충돌하면 사라지게