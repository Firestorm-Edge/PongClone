#include "Loops.h"
#include "GameActors.h"
#include <SFML/Graphics.hpp>

GameLoop::GameLoop() : ball(375, 275), p1(1), p2(2)
{

}

Loop* GameLoop::Update()
{
	ball.update();
	return this;
}

void GameLoop::Input(sf::Event event)
{

}

void GameLoop::Draw(sf::RenderWindow *wind)
{
	ball.Draw(wind);
}