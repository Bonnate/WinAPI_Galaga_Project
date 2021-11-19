#pragma once
#include "GameObject.h"
#include <windows.h>

class Wall : public GameObject
{
private:
	int mleft, mright, mtop, mbottom;

public:
	Wall(int left, int right, int bottom, int top, string tag);

	void start();
	void onTriggerStay(GameObject* other);

};