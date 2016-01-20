#pragma once
#include <SFML/Graphics.hpp>

class Loop
{
public:
	Loop() {}
	void Update() {}
	virtual void Draw(sf::RenderWindow* window) {}
	void Input(sf::Event event) {}
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
	virtual void Draw(sf::RenderWindow* win);
	void Input();
private:
	sf::Text title;
	sf::Text soloPlay;
	sf::Text multiPlay;
};