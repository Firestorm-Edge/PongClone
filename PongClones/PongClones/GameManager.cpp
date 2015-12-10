#include "Loops.h"
#include "GameManager.h"

GameManager::GameManager()
{
	sf::RenderWindow wind(sf::VideoMode(800, 600), "Pong");
	Loop ActiveLoop;
	//ActiveLoop = MenuLoop();
}

void GameManager::PassInput(sf::Event event)
{
	ActiveLoop.Input(event);
}

void GameManager::Update()
{
	ActiveLoop.Update();
}

void GameManager::Draw()
{
	ActiveLoop.Draw(&wind);
}

void GameManager::Play()
{
	while (running) 
	{
		HandleEvents();
		Update();
		Draw();
	}
	wind.close();
}

void GameManager::HandleEvents()
{
	sf::Event event;
	while (wind.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			running = false;
		else PassInput(event);
	}
}
