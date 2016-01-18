#include "Loops.h"
#include "GameManager.h"

GameManager::GameManager() : wind(sf::VideoMode(800, 600), "Pong", sf::Style::Close | sf::Style::Titlebar), running(true), ActiveLoop()
{
	wind.setVerticalSyncEnabled(true);
	ActiveLoop = new MenuLoop();
}

void GameManager::Play()
{
	while (running)
	{
		HandleEvents();
		Update();
		Draw();
	}
}

void GameManager::Update()
{
	ActiveLoop->Update();
}

void GameManager::Draw()
{
	wind.clear(sf::Color::Black);
	ActiveLoop->Draw(&wind);
	wind.display();
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

void GameManager::PassInput(sf::Event event)
{
	ActiveLoop->Input(event);
}

void GameManager::SwitchToGame()
{
	ActiveLoop = &GameLoop();
}

void GameManager::SwitchToMenu()
{
	ActiveLoop = new MenuLoop();
}
