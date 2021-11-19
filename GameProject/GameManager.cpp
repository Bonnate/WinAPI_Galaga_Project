#include "framework.h"

int GameManager::sScore = 0;
TextManager* GameManager::sTextManager = nullptr;

void GameManager::InitGameManager()
{
	sTextManager = (TextManager*)ObjectManager::find("TextManager");

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
}