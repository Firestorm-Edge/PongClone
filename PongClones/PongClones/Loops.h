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

class GameLoop : public Loop
{
public:
	GameLoop();
};

class MenuLoop : public Loop
{
public:
	MenuLoop();
};