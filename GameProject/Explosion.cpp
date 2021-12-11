#include "framework.h"

Explosion::Explosion(float px, float py)
			  :Animation("ÇÃ·¹ÀÌ¾îÆøÅºÆø¹ß","", true, px, py)
{}

Explosion::~Explosion()
{}

void Explosion::start()
{
	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 6; col++)
		{
			addImage("Asset/Explosion.bmp", col * 65, row * 65, 64, 64, 0);
		}
	}
}


void Explosion::onAnimationEnd()
{
	destroy(this);
}