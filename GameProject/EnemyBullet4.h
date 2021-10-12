#pragma once

#include "Sprite.h"

class EnemyBullet4 : public Sprite
{
private:

public:
	EnemyBullet4(float px, float py);
	~EnemyBullet4();

	void start();
	void update();
};
