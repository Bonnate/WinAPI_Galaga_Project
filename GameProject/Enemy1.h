#pragma once

#include "Sprite.h"

class Enemy1 : public Sprite
{
private:

	int xPosMagnitude;
	int yPosMagnitude;

public:
	Enemy1(float px, float py);
	~Enemy1();

	void start();
	void update();

	void onTriggerStay(GameObject* other);

	void SetDirection(int code);
};

