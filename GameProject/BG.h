#pragma once

#include "Sprite.h"

class BG : public Sprite
{
private:
	float mMoveSpeed;

public:
	BG(float px, float py);
	~BG();

	void start();
	void update();
};

