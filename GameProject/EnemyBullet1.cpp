#include "framework.h"

EnemyBullet1::EnemyBullet1(float px, float py) : Sprite("Enemy", "", true, px, py)
{

}

EnemyBullet1::~EnemyBullet1()
{

}

void EnemyBullet1::start()
{
	setImage("Asset/EnemyBullet.bmp", 0, 0, 8, 8);

	addBoxCollider2D(0, 0, 8, 8);
}

void EnemyBullet1::update()
{

}