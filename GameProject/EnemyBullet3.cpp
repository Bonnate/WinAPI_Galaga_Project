#include "framework.h"

EnemyBullet3::EnemyBullet3(float px, float py) : Sprite("Enemy", "", true, px, py)
{

}

EnemyBullet3::~EnemyBullet3()
{

}

void EnemyBullet3::start()
{
	setImage("Asset/EnemyBullet.bmp", 16, 0, 8, 8);

	addBoxCollider2D(0, 0, 8, 8);
}

void EnemyBullet3::update()
{

}