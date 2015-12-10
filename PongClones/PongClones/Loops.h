#pragma once
#include <SFML/Graphics.hpp>

class Loop
{
public:
	Loop();
	void Update();
	void Draw(sf::RenderWindow* window);
	void Input(sf::Event event);
};

class GameLoop : Loop
{
public:
	GameLoop();
};

class MenuLoop : Loop
{
public:
	MenuLoop();
};