#include "framework.h"

EndingBox::EndingBox() : Sprite("", "EndingBox", true, 50, 300)
{

}

EndingBox::~EndingBox()
{

}

void EndingBox::start()
{
	setImage("Asset/EndingBox.bmp");

	Text* Title = (Text*)addChildObject(new Text(20, 30), UI_LAYER); 
	Title->setSize(28);
	Title->setFontFamily("Asset/font/DungGeunMo.ttf");

	if (GameManager::GetScore() >= 8)
	{
		Title->setText(L"YOU WIN!!");
		Title->setColor(0, 192, 0);
	}
	else
	{
		Title->setText(L"YOU LOOSE!!");
		Title->setColor(192, 0, 0);
	}

	Text* Score = (Text*)addChildObject(new Text(20, 60), UI_LAYER);
	Score->setText(L"SCORE");
	Score->setColor(255, 255, 255);
	Score->setSize(28);
	Score->setFontFamily("Asset/font/DungGeunMo.ttf");

	WCHAR buffer[10];
	wsprintf(buffer, L"SCORE: %d", GameManager::GetScore());
	Score->setText(buffer);

	Text* PlayAgain = (Text*)addChildObject(new Text(20, 120), UI_LAYER);
	PlayAgain->setText(L"Play Again? (y/n)");
	PlayAgain->setColor(255, 255, 255);
	PlayAgain->setSize(28);
	PlayAgain->setFontFamily("Asset/font/DungGeunMo.ttf");
}
void EndingBox::update()
{

}

void EndingBox::UpdateScore(int val)
{

}