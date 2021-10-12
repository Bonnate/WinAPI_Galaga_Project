#pragma once

#include "Sprite.h"

class Enemy4 : public Sprite
{
private:

public:
	Enemy4(float px, float py);
	~Enemy4();

	void start();
	void update();
};
