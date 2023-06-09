#include "Player.h"
#include "Bullet.h"
#include "ObjectManager.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::Start()
{
    transform.Position = Vector3(WIDTH * 0.5f, HEIGHT * 0.5f, 0.0f);
    transform.Rotation = Vector3(0.0f, 0.0f, 0.0f);
    transform.Scale = Vector3(100.0f, 100.0f, 0.0f);

    Speed = 5.0f;
    //** nullptr: 널 포인터 값(null pointer value)을 나타내는 포인터 리터럴(pointer literal)이라 하는데
    //            포인터를 표현하는 값 중에 "널을 표현한 값"이다.라고 할 수 있습니다.

}

int Player::Update()
{
   

    /*if (-1 < index)
    {
        delete BulletList[index];
        BulletList[index] = nullptr;
    }*/

    if (GetAsyncKeyState(VK_UP))
        transform.Position.y -= Speed;

    if (GetAsyncKeyState(VK_DOWN))
        transform.Position.y += Speed;

    if (GetAsyncKeyState(VK_LEFT))
        transform.Position.x -= Speed;

    if (GetAsyncKeyState(VK_RIGHT))
        transform.Position.x += Speed;

    if (GetAsyncKeyState(VK_SPACE))
    {
        ObjectManager::GetInstance()->AddObject(CreateBullet());
    }

    return 0;
}

void Player::Render(HDC hdc)
{
    Rectangle(hdc,
        int(transform.Position.x - (transform.Scale.x * 0.5f)),
        int(transform.Position.y - (transform.Scale.y * 0.5f)),
        int(transform.Position.x + (transform.Scale.x * 0.5f)),
        int(transform.Position.y + (transform.Scale.y * 0.5f)));


}

void Player::Destroy()
{
}

GameObject* Player::CreateBullet()
{
    GameObject* bullet = new Bullet;
    bullet->Start(transform.Position);

    //bullet->SetPosition(transform.Position);

    return bullet;
}