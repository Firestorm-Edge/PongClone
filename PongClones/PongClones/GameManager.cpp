#include "Loops.h"
#include "GameManager.h"

GameManager::GameManager()
{
	sf::Window window(sf::VideoMode(800, 600), "Pong");
	Loop ActiveLoop();
	
}

void GameManager::Play()
{
	while (running) 
	{
		HandleEvents();
		Update();
		Draw();
	}
	window.close();
}

void GameManager::HandleEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			running = false;
		else PassInput(event);
	}
}

void GameManager::PassInput(sf::Event event)
{

}

void GameManager::Update()
{
	//CURRENT LOOP UPDATE
}

void GameManager::Draw()
{
	//CURRENT LOOP DRAW!
}