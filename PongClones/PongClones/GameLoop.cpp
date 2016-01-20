#include "Loops.h"
#include "GameActors.h"
#include <SFML/Graphics.hpp>

GameLoop::GameLoop() : circle(50)
{

}

void GameLoop::Update()
{
	circle.setPosition(400, 300);
}

void GameLoop::Input(sf::Event event)
{

}

void GameLoop::Draw(sf::RenderWindow *wind)
{
	wind->draw(circle);
}