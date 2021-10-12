#include "framework.h"

Player::Player(float px, float py) : Sprite("Player", "", true, px, py)
{
	this->mMoveSpeed = 200.0f;
}

Player::~Player() 
{

}

void Player::start()
{
	setImage("Asset/Player.bmp");
}

void Player::update()
{
	move();
	fire();
}

void Player::move()
{
	if (Input::getKey("up") && getPy() > HEIGHT - HEIGHT_SCENE)
	{
		translate(0, -mMoveSpeed * Time::deltaTime);
	}
	if (Input::getKey("down") && getPy() + getheight() < HEIGHT)
	{
		translate(0, mMoveSpeed * Time::deltaTime);
	}
	if (Input::getKey("left") && getPx() > 0)
	{
		translate(-mMoveSpeed * Time::deltaTime, 0);
	}
	if (Input::getKey("right") && getPx() + getwidth() < WIDTH_SCENE)
	{
		translate(mMoveSpeed * Time::deltaTime, 0);
	}
}

void Player::fire()
{
	if (Input::getKeyDown("space"))
	{
		printf("ÃÑ¾Ë ¹ß»ç\n");
		ObjectManager::instantiate(new PlayerBullet(getPx() + PLAYER_BULLET_X_GAP, getPy()), 4);
	}
}