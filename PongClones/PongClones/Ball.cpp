#include "GameActors.h"
#include <SFML/Graphics.hpp>

Ball::Ball(int xLoc, int yLoc) : yIncrement(2), startVel(3), circle(25), xVel(startVel), yVel(0), x(375), y(275)
{
	circle.setFillColor(sf::Color(255, 0, 0));
	circle.setPosition(x, y);
}

Ball::~Ball()
{
	delete &circle;
}

void Ball::Draw(sf::RenderWindow *wind)
{
	wind->draw(circle);
}

void Ball::update()
{
	//circle.rotate(3);
	x += xVel;
	y += yVel;
	circle.setPosition(x, y);
	if (x > 750)
	{
		//bounceX();
		//x = 750;
		reset();
		setScore = 1;
	}
	else if (x < 0)
	{
		//bounceX();
		//x = 0;
		reset();
		setScore = -1;
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

void Ball::checkPaddle(int x1, int y1)
{
	if (y > y1 - 25 && y < y1 + 150)
	{
		if (xVel < 0 && x < x1 + 25 && x > x1)
		{
			x = x1 + 26;
			bounceX();

			if (y > y1 + 25) yVel += yIncrement;
			if (y < y1 + 100) yVel -= yIncrement;
		}
		else if (xVel > 0 && x < x1 && x > x1 - 50)
		{
			x = x1 - 51;
			bounceX();

			if (y > y1 + 25) yVel += yIncrement;
			if (y < y1 + 100) yVel -= yIncrement;
		}
	}
}

void Ball::reset()
{
	if (xVel > 0) xVel = startVel * -1;
	else xVel = startVel;
	yVel = 0;

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
	if (xVel > 0) xVel++;
	else xVel--;
	xVel = -xVel;
}

void Ball::bounceY()
{
	yVel = -yVel;
}