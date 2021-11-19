#pragma once

#include "Sprite.h"

class PlayerBullet : public Sprite
{
private:
	float mMoveSpeed;
	float mLifeTime;

public:
	PlayerBullet(float px, float py);
	~PlayerBullet();

	void start();
	void update();
	void onEnable();
};