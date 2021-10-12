#pragma once

#include "Sprite.h"

class EnemyBullet5 : public Sprite
{
private:

public:
	EnemyBullet5(float px, float py);
	~EnemyBullet5();

	void start();
	void update();
};
