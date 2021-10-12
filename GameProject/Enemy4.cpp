#include "framework.h"

Enemy4::Enemy4(float px, float py) : Sprite("Enemy", "", true, px, py)
{

}

Enemy4::~Enemy4()
{

}

void Enemy4::start()
{
	setImage("Asset/Enemy4.bmp");
}

void Enemy4::update()
{

}