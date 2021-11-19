#pragma once

class TextManager;

class GameManager
{
private:
	static int sScore;
	static TextManager* sTextManager;

public:
	static void InitGameManager();
	static void AddScore(int val);
};