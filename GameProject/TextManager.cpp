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
	Text* S = (Text*)instantiate(new Text(20, 50), UI_LAYER);  //타이틀
	S->setText(L"S");
	S->setColor(255, 64, 129);
	S->setSize(53);
	S->setFontFamily("Asset/font/DungGeunMo.ttf");

	Text* PACEINVADER = (Text*)instantiate(new Text(50, 50), UI_LAYER);  //타이틀
	PACEINVADER->setText(L"PACE INVADER");
	PACEINVADER->setColor(93,93,93);
	PACEINVADER->setSize(53);
	PACEINVADER->setFontFamily("Asset/font/DungGeunMo.ttf");
	
	Text* scoreTitle = (Text*)instantiate(new Text(407, 92), UI_LAYER);  //체력 텍스트
	scoreTitle->setText(L"SCORE");
	scoreTitle->setColor(255, 255, 255);
	scoreTitle->setSize(28);
	scoreTitle->setFontFamily("Asset/font/DungGeunMo.ttf");

	score = (Text*)instantiate(new Text(420, 140), UI_LAYER);  //체력 텍스트
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