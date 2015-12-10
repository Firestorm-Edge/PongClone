#pragma once
#include <SFML/Graphics.hpp>

class Loop
{
public:
	void Update();
	void Draw();
	void Input(sf::Event event);
};

class GameLoop : Loop
{
	GameLoop();
};

class MenuLoop : Loop
{
	MenuLoop();
};