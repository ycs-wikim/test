#include "common.h"

void startGame()
{
	int user = 0;
	int com = 0;
	int result = 0;

	user = userInput();
	com = computValue();

	result = g_gameMatrix[com][user];
	switch (result)
	{
		case GAME_DRAW:
			printf("%s\n", gameResult(result));
			break;

		case GAME_USER_LOSE:
			printf("%s\n", gameResult(result));
			break;

		case GAME_USER_WIN:
			printf("%s\n", gameResult(result));
			break;

		default:
			break;
	}
}