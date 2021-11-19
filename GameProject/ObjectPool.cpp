#include "framework.h"

GameObject* ObjectPool::getFromPool()
{
	cout << objPool.size();

	for (int i = 0; i < objPool.size(); ++i)
	{
		if (objPool[i]->getActive())
		{
			continue;
		}

		else
		{
			return objPool[i];
		}
	}

	return nullptr;
}

void ObjectPool::PushPool(GameObject* o)
{
	objPool.push_back(o);
}