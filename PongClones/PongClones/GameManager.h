#pragma once
#include "Loops.h"

class GameManager
{
public:
	GameManager();
	void Play();

private:
	sf::Window window;
	bool running = true;
	void HandleEvents();
	void PassInput(sf::Event event);
	void Update();
	void Draw();
};