#pragma once
#include "EndingBox.h"

class TextManager;

class GameManager
{
private:
	static int sScore;
	static bool isPlayingGame;
	static TextManager* sTextManager;
	static EndingBox* sEndingBox;

public:
	static void InitGameManager();
	static void AddScore(int val);
	static void FinishGame();
	static int	GetScore();
	static void ResetGame();
	static void DisplayEndingBox();
	static bool GetIsPlayingGame();
};