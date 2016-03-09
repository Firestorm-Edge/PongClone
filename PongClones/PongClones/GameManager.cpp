#include "Loops.h"
#include "GameManager.h"

GameManager::GameManager() 
{
	wind = (new sf::RenderWindow(sf::VideoMode(800, 600), "Pong", sf::Style::Close | sf::Style::Titlebar));
	wind->setVerticalSyncEnabled(true);
	running = true;
	wind->setVerticalSyncEnabled(true);
	ActiveLoop = new MenuLoop();
}

GameManager::~GameManager()
{
	delete &wind;
	delete &ActiveLoop;
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

	//NEEDS TO KNOW IF ACTIVE LOOP CHANGES.
	Loop *tempLoop = ActiveLoop->Update();
	if (tempLoop != ActiveLoop) {
		delete ActiveLoop;
		ActiveLoop = tempLoop;
	}
}

void GameManager::Draw()
{
	wind->clear(sf::Color::Black);
	ActiveLoop->Draw(wind);
	wind->display();
}

void GameManager::HandleEvents()
{
	sf::Event event;
	while (wind->pollEvent(event))
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

void GameManager::SwitchLoop(Loop newLoop)
{
	ActiveLoop = &newLoop;
}

//void GameManager::SwitchToMenu()
//{
//	ActiveLoop = new MenuLoop();
//}
