#include "MainUpdate.h"
#include "Player.h"
#include "Enemy.h"

//** 상속
// 모든 class는 서로에 대한 의존관계가 형성됨
// 내가 속해있는 class에서 생성이 되어야 실행이 된다.
// ex) 아버지가 태어나지 않았으면 나는 없다. 우리아빠도 할아버지 없으면 아빠는 없다....


MainUpdate::MainUpdate() : m_pPlayer(NULL)
{

}

MainUpdate::~MainUpdate()
{
	Destroy();
}
void MainUpdate::Start()
{
	m_hdc = GetDC(g_hWnd);

	m_pPlayer = new Player();
	m_pEnemy = new Enemy();
	if (m_pPlayer)
	{
		m_pPlayer->Start();
	}
	if (m_pEnemy)
	{
		m_pEnemy->Start();
	}
}


void MainUpdate::Update()
{
	if (m_pPlayer)
	{
		m_pPlayer->Update();
	}
	if (m_pEnemy)
	{
		m_pEnemy->Update();
	}
}

void MainUpdate::Render()
{
	Rectangle(m_hdc, 0, 0, WIDTH, HEIGHT);

	if (m_pPlayer)
	{
		m_pPlayer->Render(m_hdc);
	}

	if (m_pEnemy)
	{
		m_pEnemy->Render(m_hdc);
	}
}

void MainUpdate::Destroy()
{
	if (m_pPlayer)
	{
		delete m_pPlayer;
		m_pPlayer = NULL;
	}
}



