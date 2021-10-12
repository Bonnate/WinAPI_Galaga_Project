#include "framework.h"

BG::BG(float px, float py) : Sprite("", "", true, px, py)
{
	this->mMoveSpeed = 50.0f;
}

BG::~BG()
{

}

void BG::start()
{
	setImage("Asset/BG.bmp");
}

void BG::update()
{
	translate(0, mMoveSpeed * Time::deltaTime);

	if (getPy() >= HEIGHT)
	{
		translate(0, -HEIGHT * 2);
	}
}