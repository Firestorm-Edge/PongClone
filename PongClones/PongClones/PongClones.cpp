#include <SFML/Graphics.hpp>
#include "GameManager.h"

int main()
{
	GameManager *game = new GameManager();
	game->Play();
	delete game;
	return 0;
}