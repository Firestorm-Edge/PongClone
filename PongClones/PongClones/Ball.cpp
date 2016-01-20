#include "GameActors.h"
#include <SFML/Graphics.hpp>

Ball::Ball(int xLoc, int yLoc) : circle(25), xVel(5), yVel(5), x(375), y(275)
{
	circle.setFillColor(sf::Color(255, 0, 255));
}

void Ball::reset()
{
	x = 375;
	y = 275;
}

void Ball::bounceX()
{
	xVel = -xVel;
}

void Ball::bounceY()
{
	yVel = -yVel;
}