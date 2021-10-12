#pragma once

#include "Sprite.h"

class Enemy5 : public Sprite
{
private:

public:
	Enemy5(float px, float py);
	~Enemy5();

	void start();
	void update();
};
