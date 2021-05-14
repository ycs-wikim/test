#pragma once

#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "interface.h"

#define GAME_STR_DRAW	"÷ס±ט"
#define GAME_STR_WIN	"ÀÌ±ט"
#define GAME_STR_LOSE	"Áü"

#define GAME_DRAW		0
#define GAME_USER_LOSE	1
#define GAME_USER_WIN	2

static const int g_gameMatrix[3][3] = {
	{
		GAME_DRAW, GAME_USER_LOSE, GAME_USER_WIN
		},
	{
		GAME_USER_WIN, GAME_DRAW, GAME_USER_LOSE
		},
	{
		GAME_USER_LOSE, GAME_USER_WIN, GAME_DRAW
		},
};
