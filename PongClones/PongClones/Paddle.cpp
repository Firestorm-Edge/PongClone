#include "GameActors.h"

Paddle::Paddle(int player)
{
	if (player == 1)
		x = 75;
	else
		x = 725;

}