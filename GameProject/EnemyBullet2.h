#pragma once

#include "Sprite.h"

class EnemyBullet2 : public Sprite
{
private:

public:
	EnemyBullet2(float px, float py);
	~EnemyBullet2();

	void start();
	void update();
};
