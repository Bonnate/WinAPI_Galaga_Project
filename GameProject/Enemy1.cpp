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
	this->mMoveTimeDelay = .0f;
	this->xPosMagnitude = 0;
	this->yPosMagnitude = 0;
}

Enemy1::~Enemy1()
{

}

void Enemy1::start()
{
	setImage("Asset/Enemy1.bmp");
	addBoxCollider2D(0, 0, 31, 33);

	this->xPosMagnitude = Random::Range(-30, 30);
	this->yPosMagnitude = Random::Range(-30, 30);
}

void Enemy1::update()
{
	mMoveTimeDelay += Time::deltaTime;

	if (mMoveTimeDelay > 3.0f)
	{
		this->xPosMagnitude	= Random::Range(-30, 30);
		this->yPosMagnitude	= Random::Range(-30, 30);

		mMoveTimeDelay = .0f;
	}

	translate(xPosMagnitude * Time::deltaTime, yPosMagnitude * Time::deltaTime);
}

void Enemy1::onTriggerStay(GameObject* other)
{
	if (other->getTag() == "PlayerBullet")
	{
		GameManager::AddScore(1);
		other->setActive(false);
		//destroy(this);
	}
}

void Enemy1::SetDirection(int code)
{
	mMoveTimeDelay = .0f;

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