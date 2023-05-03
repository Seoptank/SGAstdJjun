#include "Enemy.h"

Enemy::Enemy()
{

}
Enemy::~Enemy()
{

}

void Enemy::Start()
{
    srand((unsigned int)GetTickCount64());
    transform.Position = Vector3(WIDTH+75.0f,float(rand() % (HEIGHT-150)+75),0.0f);
    transform.Rotation = Vector3(0.0f, 0.0f, 0.0f);
    transform.Scale = Vector3(150.0f, 150.0f, 0.0f);

    Speed = 0.5f;
}
int Enemy::Update()
{
    transform.Position.x -= Speed;

    if (transform.Position.x < 0)
        return 2;

    return 0;
}
void Enemy::Render(HDC hdc)
{
    Ellipse(hdc,
        int(transform.Position.x - (transform.Scale.x * 0.5f)),
        int(transform.Position.y - (transform.Scale.y * 0.5f)),
        int(transform.Position.x + (transform.Scale.x * 0.5f)),
        int(transform.Position.y + (transform.Scale.y * 0.5f)));
}
void Enemy::Destroy()
{

}