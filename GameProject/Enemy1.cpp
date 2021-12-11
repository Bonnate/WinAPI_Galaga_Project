#include "framework.h"

enum Direction
{
	LEFT = 1,
	RIGHT,
	TOP,
	BOTTOM
};

Enemy1::Enemy1(float px, float py) : Sprite("Enemy", "", true, px, py)
{
	this->xPosMagnitude = 30;
	this->yPosMagnitude = 50;
}

Enemy1::~Enemy1()
{

}

void Enemy1::start()
{
	int imgRand = Random::Range(1, 4);

	switch (imgRand)
	{
	case 1:
		setImage("Asset/Enemy1.bmp");
		addBoxCollider2D(0, 0, 31, 33);
		break;

	case 2:
		setImage("Asset/Enemy2.bmp");
		addBoxCollider2D(0, 0, 31, 33);
		break;

	case 3:
		setImage("Asset/Enemy3.bmp");
		addBoxCollider2D(0, 0, 26, 22);
		break;

	case 4:
		setImage("Asset/Enemy4.bmp");
		addBoxCollider2D(0, 0, 26, 22);
		break;
	}

}

void Enemy1::update()
{
	translate(xPosMagnitude * Time::deltaTime * (EnemyManager::misForwardMag ? 1 : -1) , yPosMagnitude * Time::deltaTime);
}

void Enemy1::onTriggerStay(GameObject* other)
{
	if (other->getTag() == "PlayerBullet")
	{
		GameManager::AddScore(1);
		other->setActive(false);
		destroy(this);

		ObjectManager::instantiate(new Explosion(getPx() - 12 , getPy() - 12), 4);
	}
}

void Enemy1::SetDirection(int code)
{
	switch (code)
	{
		case Direction::LEFT:	//1
		{
			xPosMagnitude = 10;
			yPosMagnitude = 0;

			break;
		}

		case Direction::RIGHT:
		{
			xPosMagnitude = -10;
			yPosMagnitude = 0;

			break;
		}

		case Direction::TOP:
		{
			xPosMagnitude = 0;
			yPosMagnitude = 10;

			break;
		}

		case Direction::BOTTOM:
		{
			xPosMagnitude = 0;
			yPosMagnitude = -10;

			break;
		}
	}
}