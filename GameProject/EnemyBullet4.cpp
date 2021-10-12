#include "framework.h"

EnemyBullet4::EnemyBullet4(float px, float py) : Sprite("Enemy", "", true, px, py)
{

}

EnemyBullet4::~EnemyBullet4()
{

}

void EnemyBullet4::start()
{
	setImage("Asset/EnemyBullet.bmp", 24, 0, 8, 8);

	addBoxCollider2D(0, 0, 8, 8);
}

void EnemyBullet4::update()
{

}