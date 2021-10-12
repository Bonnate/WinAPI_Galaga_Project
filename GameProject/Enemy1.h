#pragma once

#include "Sprite.h"

class Enemy1 : public Sprite
{
private:

public:
	Enemy1(float px, float py);
	~Enemy1();

	void start();
	void update();
};

