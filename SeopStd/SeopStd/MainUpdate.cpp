#include "MainUpdate.h"
MainUpdate::MainUpdate()
{

}

MainUpdate::~MainUpdate()
{

}

void MainUpdate::Start()
{
	m_hdc = GetDC(g_hWnd);

	rcPoint.left = 100;
	rcPoint.top = 100;
	rcPoint.right = 200;
	rcPoint.bottom = 200;
}
	

void MainUpdate::Update()
{
	if (GetAsyncKeyState(VK_UP))
	{
		
	}
	if (GetAsyncKeyState(VK_DOWN))
	{

	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		rcPoint.left-= 0.2;
		rcPoint.right-= 0.2;
	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		rcPoint.left += 0.2;
		rcPoint.right += 0.2;
	}
}

void MainUpdate::Render()
{
	Rectangle(m_hdc,
		rcPoint.left,
		rcPoint.top,
		rcPoint.right,
		rcPoint.bottom);
}

void MainUpdate::Destroy()
{

}



