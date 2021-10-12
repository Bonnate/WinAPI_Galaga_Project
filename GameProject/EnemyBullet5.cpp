#include "framework.h"

EnemyBullet5::EnemyBullet5(float px, float py) : Sprite("Enemy", "", true, px, py)
{

}

EnemyBullet5::~EnemyBullet5()
{

}

void EnemyBullet5::start()
{
	setImage("Asset/EnemyBullet.bmp", 32, 0, 8, 8);

	addBoxCollider2D(0, 0, 8, 8);
}

void EnemyBullet5::update()
{

}