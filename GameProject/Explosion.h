#pragma once

#include "Animation.h"

class Explosion : public Animation
{
private:
public:
	Explosion(float px, float py);
	~Explosion();

	void start();

	void onAnimationEnd();
};