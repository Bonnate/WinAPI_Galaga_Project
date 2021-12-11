#include "framework.h"

Wall::Wall(int left, int top, int right, int bottom, string tag) : GameObject(tag, "", true, 0, 0)
{
	mleft		= left;
	mright		= right;
	mtop		= top;
	mbottom		= bottom;
}

void Wall::start()
{
	addBoxCollider2D(mleft, mtop, mright, mbottom);
}

void Wall::onTriggerStay(GameObject* other)
{
	if (!GameManager::GetIsPlayingGame()) return;


	if (other->getTag() == "Enemy")
	{
		if (this->getTag() == "LeftWall")
		{
			//other->SetDirection(1);
		}

		else if (this->getTag() == "RightWall")
		{
			//other->SetDirection(2);
		}

		else if (this->getTag() == "TopWall")
		{
			//other->SetDirection(3);
		}

		else if (this->getTag() == "BottomWall")
		{
			GameManager::FinishGame();
		}
	}
}


