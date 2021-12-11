#pragma once

class EnemyManager
{
public:
	static float mCoolTime;
	static bool misForwardMag;

	static void UpdateTime();
	static void InitValues();
};