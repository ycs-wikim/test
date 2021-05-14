#include "common.h"

int userInput()
{
	int user = 0;

	scanf("%d", &user);
	return user;
}


int computValue()
{
	int value = 0;

	value = rand() % 3;

	return value;
}