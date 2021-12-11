// header.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.
// Windows 헤더 파일
#include <windows.h>
// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <time.h>
#include <iostream>


//FUNC
#include "debug.h"
#include "graphic.h"
#include "Random.h"
#include "deltaTime.h"
#include "BMP.h"
#include "Input.h"
#include "GameObject.h"
#include "Sprite.h"
#include "Animation.h"
#include "BoxCollider2D.h"
#include "Button.h"
#include "Application.h"
#include "ObjectManager.h"
#include "Sound.h"
#include "Text.h"
#include "ObjectPool.h"

//HIER
	//PLAYER
	#include "Player.h"
	#include"PlayerBullet.h"

	//ENEMY
	#include "Enemy1.h"
	#include "Enemy2.h"
	#include "Enemy3.h"
	#include "Enemy4.h"
	#include "Enemy5.h"
	#include"EnemyBullet1.h"
	#include"EnemyBullet2.h"
	#include"EnemyBullet3.h"
	#include"EnemyBullet4.h"
	#include"EnemyBullet5.h"

	//MANAGER
	#include "GameManager.h"
	#include "EnemyManager.h"

	//BG
	#include "BG.h"
	#include "BGLayout.h"
	#include "Wall.h"

	//CANVUS
	#include "TextManager.h"
	#include "EndingBox.h"

	//FX
	#include "Explosion.h"

#define WIDTH  480
#define HEIGHT 800

#define WIDTH_SCENE 400
#define HEIGHT_SCENE 720

#define ZERO 0

using namespace std;