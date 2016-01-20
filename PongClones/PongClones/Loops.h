#pragma once
#include <SFML/Graphics.hpp>

class Loop
{
public:
	Loop() {}
	virtual void Update() {}
	virtual void Draw(sf::RenderWindow* window) {}
	virtual void Input(sf::Event event) {}
};

class GameLoop : public Loop
{
public:
	GameLoop();
	void Update();
	virtual void Draw(sf::RenderWindow* win);
	virtual void Input(sf::Event event);
private:
	sf::CircleShape circle;
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