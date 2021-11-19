#include "framework.h"

Player::Player(float px, float py) : Sprite("Player", "", true, px, py)
{
	this->mFireDelay = .2f;
	this->mCurrentFireDelay = .0f;
	this->mMoveSpeed = 200.0f;
	this->mShotSound = nullptr;
}

Player::~Player() 
{

}

void Player::start()
{
	addBoxCollider2D(0, 18, 35, 21);
	addBoxCollider2D(13, 0, 7, 39);

	setImage("Asset/Player.bmp");

	mShotSound = (Sound*)ObjectManager::find("PlayerShot");
}

void Player::update()
{
	mCurrentFireDelay += Time::deltaTime;

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
	if (Input::getKey("left") && getPx() > ZERO)
	{
		translate(-mMoveSpeed * Time::deltaTime, ZERO);
	}
	if (Input::getKey("right") && getPx() + getwidth() < WIDTH_SCENE)
	{
		translate(mMoveSpeed * Time::deltaTime, ZERO);
	}
}

void Player::fire()
{
	if (Input::getKey("space") && mCurrentFireDelay >= mFireDelay)
	{
		mShotSound->playSound();

		GameObject* poolReady = mBulletPool.getFromPool();

		if (poolReady == nullptr)
		{
			mBulletPool.PushPool(ObjectManager::instantiate(new PlayerBullet(getPx() + PLAYER_BULLET_X_GAP, getPy()), 4));
			cout << "생성!"<<endl;
		}
		else
		{
			poolReady->translateWorld(getPx() + PLAYER_BULLET_X_GAP, getPy());
			poolReady->onEnable();
			cout << "재활용!" << endl;
		}
		
		mCurrentFireDelay = .0f;
	}
}