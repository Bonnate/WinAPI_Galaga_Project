#include "framework.h"

BGLayout::BGLayout(float px, float py) : Sprite("", "", true, px, py)
{

}

BGLayout::~BGLayout()
{

}

void BGLayout::start()
{
	setImage("Asset/BGLayout2.bmp");
}

void BGLayout::update()
{

}