#pragma once
#include <SFML/Graphics.hpp>

class Loop
{
public:
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
	void Update();
	void Draw(sf::RenderWindow win);
	void Input();
private:
	sf::Text title;
	sf::Text soloPlay;
};