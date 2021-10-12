#include "framework.h"

Enemy1::Enemy1(float px, float py) : Sprite("Enemy", "", true, px, py)
{

}

Enemy1::~Enemy1()
{

}

void Enemy1::start()
{
	setImage("Asset/Enemy1.bmp");
}

void Enemy1::update()
{

}