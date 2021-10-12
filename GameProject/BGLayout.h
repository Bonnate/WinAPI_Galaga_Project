#pragma once

#include "Sprite.h"

class BGLayout : public Sprite
{
private:

public:
	BGLayout(float px, float py);
	~BGLayout();

	void start();
	void update();
};

