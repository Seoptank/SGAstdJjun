#include "MainUpdate.h"
#include "Player.h"
#include "Enemy.h"
#include "ObjectManager.h"

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
	m_pPlayer->Start();

	m_pEnemy = new Enemy();
	m_pEnemy->Start();

	ObjectManager::GetInstance()->AddObject(m_pEnemy);
	
}


void MainUpdate::Update()
{
	

	if (m_pPlayer)
	{
		m_pPlayer->Update();
	}
	
}

void MainUpdate::Render()
{
	list<GameObject*>* EnemyList = ObjectManager::GetInstance()->GetObjectList("Enemy");
	list<GameObject*>* BulletList = ObjectManager::GetInstance()->GetObjectList("Bullet");

	Rectangle(m_hdc, 0, 0, WIDTH, HEIGHT);

	if (m_pPlayer)
	{
		m_pPlayer->Render(m_hdc);
	}

	if (EnemyList!=nullptr&&!EnemyList ->empty())
	{
		for (list<GameObject*>::iterator lter = EnemyList->begin(); lter != EnemyList->end(); ++lter)
		{
			(*lter)->Render(m_hdc);
		}
	}

	if (BulletList != nullptr && !BulletList->empty())
	{
		for (list<GameObject*>::iterator lter = BulletList->begin(); lter != EnemyList->end(); ++lter)
		{
			(*lter)->Render(m_hdc);
		}
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



