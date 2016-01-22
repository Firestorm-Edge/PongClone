#pragma once
#include "Loops.h"

class GameManager : sf::RenderWindow
{
public:
	GameManager();
	void Play();
	void SwitchLoop(Loop newLoop);

private:
	sf::RenderWindow *wind;
	Loop *ActiveLoop;
	bool running;
	void HandleEvents();
	void PassInput(sf::Event event);
	void Update();
	void Draw();
};