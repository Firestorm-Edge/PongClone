#pragma once
#include <SFML/Graphics.hpp>

class Loop
{
public:
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
	void Update();
	void Draw(sf::RenderWindow win);
	void Input();
private:
	sf::Text title;
	sf::Text soloPlay;
};