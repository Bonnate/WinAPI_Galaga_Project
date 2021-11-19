#include "framework.h"

PlayerBullet::PlayerBullet(float px, float py) : Sprite("PlayerBullet", "", true, px, py)
{
	this->mMoveSpeed = 300.0f;
	this->mLifeTime = 10.0f;
}

PlayerBullet::~PlayerBullet()
{
	
}

void PlayerBullet::start()
{
	setImage("Asset/PlayerBullet.bmp");
	addBoxCollider2D(0, 0, 7, 13);
}

void PlayerBullet::onEnable()
{
	this->setActive(true);
	mLifeTime = 10.0f;
}

void PlayerBullet::update()
{
	//시간이 지나면 파괴됩니다.. 메모리 누수 방지
	mLifeTime -= Time::deltaTime;
	if (mLifeTime < .0f)
	{
		this->setActive(false);
	}


	//벽에 닿으면 파괴됩니다.. 메모리 누수 방지
	if (getPy() < HEIGHT - HEIGHT_SCENE)
	{
		this->setActive(false);
	}

	
	//플레이어의 공격은 위로 향합니다.
	translate(0, -mMoveSpeed * Time::deltaTime);
}