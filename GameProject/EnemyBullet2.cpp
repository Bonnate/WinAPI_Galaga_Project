#include "framework.h"

EnemyBullet2::EnemyBullet2(float px, float py) : Sprite("Enemy", "", true, px, py)
{

}

EnemyBullet2::~EnemyBullet2()
{

}

void EnemyBullet2::start()
{
	setImage("Asset/EnemyBullet.bmp", 8, 0, 8, 8);

	addBoxCollider2D(0, 0, 8, 8);
}

void EnemyBullet2::update()
{

}