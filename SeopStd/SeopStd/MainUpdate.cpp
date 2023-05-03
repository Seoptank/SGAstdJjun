#include "MainUpdate.h"
#include "Player.h"
#include "Enemy.h"

//** ���
// ��� class�� ���ο� ���� �������谡 ������
// ���� �����ִ� class���� ������ �Ǿ�� ������ �ȴ�.
// ex) �ƹ����� �¾�� �ʾ����� ���� ����. �츮�ƺ��� �Ҿƹ��� ������ �ƺ��� ����....


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



