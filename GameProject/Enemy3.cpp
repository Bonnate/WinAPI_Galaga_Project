#include "framework.h"

Enemy3::Enemy3(float px, float py) : Sprite("Enemy", "", true, px, py)
{

}

Enemy3::~Enemy3()
{

}

void Enemy3::start()
{
	setImage("Asset/Enemy3.bmp");
}

void Enemy3::update()
{

}