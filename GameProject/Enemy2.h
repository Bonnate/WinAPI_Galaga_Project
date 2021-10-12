#pragma once

#include "Sprite.h"

class Enemy2 : public Sprite
{
private:

public:
	Enemy2(float px, float py);
	~Enemy2();

	void start();
	void update();
};
