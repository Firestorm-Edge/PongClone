#pragma once
#include <SFML/Graphics.hpp>

class GameLoop
{
public:
	GameLoop();
	void Update();
	void Draw();
	void Input(sf::Event e);
};

class MenuLoop
{
public:
	MenuLoop();
	void Update();
	void Draw();
	void Input(sf::Event e);
};