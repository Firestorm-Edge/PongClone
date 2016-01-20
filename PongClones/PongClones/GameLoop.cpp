#include "Loops.h"
#include "GameActors.h"
#include <SFML/Graphics.hpp>

GameLoop::GameLoop() : ball(375, 275)
{

}

void GameLoop::Update()
{
	ball.update();
}

void GameLoop::Input(sf::Event event)
{

}

void GameLoop::Draw(sf::RenderWindow *wind)
{
	ball.Draw(wind);
}