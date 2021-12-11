#include "framework.h"

int GameManager::sScore = 0;
bool GameManager::isPlayingGame = false;
TextManager* GameManager::sTextManager = nullptr;
EndingBox* GameManager::sEndingBox = nullptr;

void GameManager::InitGameManager()
{
	sTextManager = (TextManager*)ObjectManager::find("TextManager");
	ResetGame();

	if (sTextManager == nullptr)
	{
		cout << "텍스트 매니저 찾을 수 없음" << endl;
		
		exit(-3);
	}
}

void GameManager::AddScore(int val)
{
	sScore += val;

	sTextManager->UpdateScore(sScore);

	if (sScore >= 8) FinishGame();
}

void GameManager::FinishGame()
{
	sEndingBox = (EndingBox*)ObjectManager::instantiate(new EndingBox(), UI_LAYER);
	Time::timeScale = .0f;
	isPlayingGame = false;
}

void GameManager::DisplayEndingBox()
{
	if (!isPlayingGame)
	{
		if (Input::getKeyDown("y"))
		{
			ResetGame();
		}
		else if (Input::getKeyDown("n"))
		{
			Application::quit();
		}
	}
}

int GameManager::GetScore()
{
	return sScore;
}

void GameManager::ResetGame()
{
	EnemyManager::InitValues();
	isPlayingGame = true;

	if(sEndingBox!=nullptr)sEndingBox->setDead(true);

	ObjectManager::clear(3);
	ObjectManager::clear(4);

	sScore = 0;
	AddScore(0);
	Time::timeScale = 1.0f;

	ObjectManager::instantiate(new Player(300, 700), 3);

	ObjectManager::instantiate(new Enemy1(-30, 200), 3);
	ObjectManager::instantiate(new Enemy1(70, 200), 3);
	ObjectManager::instantiate(new Enemy1(170, 200), 3);
	ObjectManager::instantiate(new Enemy1(270, 200), 3);

	ObjectManager::instantiate(new Enemy1(20, 100), 3);
	ObjectManager::instantiate(new Enemy1(120, 100), 3);
	ObjectManager::instantiate(new Enemy1(220, 100), 3);
	ObjectManager::instantiate(new Enemy1(320, 100), 3);
}

bool GameManager::GetIsPlayingGame()
{
	return isPlayingGame;
}