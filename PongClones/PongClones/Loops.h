#pragma once
#include <SFML/Graphics.hpp>
#include "GameActors.h"

class Loop
{
public:
	Loop() {}
	virtual ~Loop() {}
	virtual Loop* Update() { return this; }
	virtual void Draw(sf::RenderWindow* window) {}
	virtual void Input(sf::Event event) {}
};

class GameLoop : public Loop
{
public:
	GameLoop(bool isMultiplayer);
	virtual ~GameLoop();
	virtual Loop* Update();
	virtual void Draw(sf::RenderWindow* win);
	virtual void Input(sf::Event event);
private:
	bool multiplayer;
	sf::CircleShape circle;
	Ball ball;
	Paddle p1, p2;
	int scoreLeft, scoreRight;
	sf::Font *font;
	sf::Text scoreLeftText, scoreRightText;
};

class MenuLoop : public Loop
{
public:
	MenuLoop();
	virtual ~MenuLoop();
	virtual Loop* Update();
	virtual void Draw(sf::RenderWindow* win);
	virtual void Input(sf::Event event);
private:
	Loop* newLoop;
	sf::Text title;
	sf::Text soloPlay;
	sf::Text multiPlay;
	sf::CircleShape selector;
	int picked;
};