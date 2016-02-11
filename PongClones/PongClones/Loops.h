#pragma once
#include <SFML/Graphics.hpp>
#include "GameActors.h"

class Loop
{
public:
	Loop() {}
	virtual Loop* Update() { return this; }
	virtual void Draw(sf::RenderWindow* window) {}
	virtual void Input(sf::Event event) {}
};

class GameLoop : public Loop
{
public:
	GameLoop();
	virtual Loop* Update();
	virtual void Draw(sf::RenderWindow* win);
	virtual void Input(sf::Event event);
private:
	sf::CircleShape circle;
	Ball ball;
	Paddle p1, p2;
};

class AILoop : public Loop
{
public:
	AILoop();
	virtual Loop* Update();
	virtual void Draw(sf::RenderWindow* win);
	virtual void Input(sf::Event event);
private:
	sf::CircleShape circle;
	Ball ball;
	Paddle p1;
	AIPaddle AI;
};

class MenuLoop : public Loop
{
public:
	MenuLoop();
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