#include "framework.h"

Enemy2::Enemy2(float px, float py) : Sprite("Enemy", "", true, px, py)
{

}

Enemy2::~Enemy2()
{

}

void Enemy2::start()
{
	setImage("Asset/Enemy2.bmp");
}

void Enemy2::update()
{

}