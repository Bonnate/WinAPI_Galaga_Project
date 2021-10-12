#pragma once

#include "Sprite.h"

class Enemy3 : public Sprite
{
private:

public:
	Enemy3(float px, float py);
	~Enemy3();

	void start();
	void update();
};
