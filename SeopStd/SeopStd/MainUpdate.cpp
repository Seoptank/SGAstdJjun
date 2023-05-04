#include "MainUpdate.h"
#include "Player.h"
#include "Enemy.h"
#include "ObjectManager.h"

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



