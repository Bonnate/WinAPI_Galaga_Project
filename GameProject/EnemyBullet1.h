#pragma once

#include "Sprite.h"

class EnemyBullet1 : public Sprite
{
private:

public:
	EnemyBullet1(float px, float py);
	~EnemyBullet1();

	void start();
	void update();
};

