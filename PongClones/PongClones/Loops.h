#pragma once
#include <SFML/Graphics.hpp>

class Loop
{
public:
	void Update();
	void Draw(sf::RenderWindow win);
	void Input();
};

class GameLoop : Loop
{
	GameLoop();
};

class MenuLoop : Loop
{
	MenuLoop();
	void Update();
	void Draw(sf::RenderWindow win);
	void Input();
private:
	sf::Text title;
	sf::Text soloPlay;
};