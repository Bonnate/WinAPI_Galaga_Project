#include "framework.h"

TextManager::TextManager() : GameObject("", "TextManager", true, 0, 0)
{
	score = nullptr;
}

TextManager::~TextManager()
{

}

void TextManager::start()
{
	Text* S = (Text*)addChildObject(new Text(20, 50), UI_LAYER); 
	S->setText(L"S");
	S->setColor(255, 64, 129);
	S->setSize(53);
	S->setFontFamily("Asset/font/DungGeunMo.ttf");

	Text* PACEINVADER = (Text*)addChildObject(new Text(50, 50), UI_LAYER); 
	PACEINVADER->setText(L"PACE INVADER");
	PACEINVADER->setColor(93,93,93);
	PACEINVADER->setSize(53);
	PACEINVADER->setFontFamily("Asset/font/DungGeunMo.ttf");
	
	Text* scoreTitle = (Text*)addChildObject(new Text(407, 92), UI_LAYER);  
	scoreTitle->setText(L"SCORE");
	scoreTitle->setColor(255, 255, 255);
	scoreTitle->setSize(28);
	scoreTitle->setFontFamily("Asset/font/DungGeunMo.ttf");

	score = (Text*)addChildObject(new Text(430, 140), UI_LAYER); 
	score->setText(L"0");
	score->setColor(255, 255, 255);
	score->setSize(36);
	score->setFontFamily("Asset/font/DungGeunMo.ttf");

}

void TextManager::update()
{

}

void TextManager::UpdateScore(int val)
{
	WCHAR buffer[10];
	wsprintf(buffer, L"%d", val);

	score->setText(buffer);
}