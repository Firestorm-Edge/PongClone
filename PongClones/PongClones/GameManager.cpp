#include "Loops.h"
#include "GameManager.h"

GameManager::GameManager()
{
	sf::Window window(sf::VideoMode(800, 600), "Pong");
}

void GameManager::Play()
{
	while (running) 
	{
		HandleInput();
		Update();
		Draw();
	}
	window.close();
}

void GameManager::HandleInput()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			running = false;
		else PassInputs(event);
	}
}

void GameManager::PassInputs(sf::Event event)
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