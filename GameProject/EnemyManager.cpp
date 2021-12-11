#include "framework.h"

float EnemyManager::mCoolTime = .0f;
bool EnemyManager::misForwardMag = true;

void EnemyManager::UpdateTime()
{
	mCoolTime += Time::deltaTime;

	if (mCoolTime > 2.0f)
	{
		misForwardMag = !misForwardMag;

		mCoolTime = .0f;

		cout << misForwardMag << endl;;
	}
}

void EnemyManager::InitValues()
{
	 mCoolTime = .0f;
  	misForwardMag = true;
}