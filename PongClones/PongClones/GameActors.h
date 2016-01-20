#include <SFML/Graphics.hpp>
#pragma once

class Paddle
{
public:
	Paddle(int player);
	int getY();
	void move(int dir);
private:
	int x, y;
};

class Ball
{
public:
	Ball(int xLoc, int yLoc);
	void Ball::Draw(sf::RenderWindow *wind);
	void update();
	void reset();
	int getX();
	int getY();

	void bounceY();
	void bounceX();
private:
	int x, y;
	int xVel, yVel;
	sf::CircleShape circle;
};