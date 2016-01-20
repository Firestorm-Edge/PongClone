#include "GameActors.h"
#include <SFML/Graphics.hpp>

Ball::Ball(int xLoc, int yLoc) : circle(25), xVel(3), yVel(3), x(375), y(275)
{
	circle.setFillColor(sf::Color(255, 0, 0));
}

void Ball::Draw(sf::RenderWindow *wind)
{
	wind->draw(circle);
}

void Ball::update()
{
	x += xVel;
	y += yVel;
	circle.setPosition(x, y);
	if (x > 750)
	{
		bounceX();
		x = 750;
	}
	else if (x < 0)
	{
		bounceX();
		x = 0;
	}
	if (y > 550)
	{
		bounceY();
		y = 550;
	}
	else if (y < 0)
	{
		bounceY();
		y = 0;
	}
}

void Ball::reset()
{
	x = 375;
	y = 275;
	circle.setPosition(x, y);
}

int Ball::getX()
{
	return x;
}

int Ball::getY()
{
	return y;
}

void Ball::bounceX()
{
	xVel = -xVel;
}

void Ball::bounceY()
{
	yVel = -yVel;
}