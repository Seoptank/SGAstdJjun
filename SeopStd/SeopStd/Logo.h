#pragma once
#include "Include.h"
#include "Scene.h"

class Logo : class Scene
{
public:
	virtual void Start()override;
	virtual void Start(Vector3 _position)override;
	virtual int Update()override;
	virtual void Render(HDC hdc)override;
	virtual void Destroy()override;

public:
	Stage();
	~Stage();
}