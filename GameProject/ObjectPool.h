#pragma once

#include <vector>
#include "GameObject.h"

class ObjectPool
{
private:
	vector<GameObject*> objPool;

public:
	GameObject* getFromPool();
	void		PushPool(GameObject* o);
};