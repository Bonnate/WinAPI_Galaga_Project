#include "framework.h"

BGLayout::BGLayout(float px, float py) : Sprite("", "", true, px, py)
{

}

BGLayout::~BGLayout()
{

}

void BGLayout::start()
{
	setImage("Asset/BGLayout.bmp");
}

void BGLayout::update()
{

}