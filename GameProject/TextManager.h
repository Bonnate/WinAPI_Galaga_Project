#pragma once

#include "GameObject.h"

class TextManager : public GameObject
{
private:
	Text* score;

public:
	TextManager();
	~TextManager();

	void start();
	void update();

	void UpdateScore(int val);
};