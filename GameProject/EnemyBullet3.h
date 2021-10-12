#pragma once

#include "Sprite.h"

class EnemyBullet3 : public Sprite
{
private:

public:
	EnemyBullet3(float px, float py);
	~EnemyBullet3();

	void start();
	void update();
};
