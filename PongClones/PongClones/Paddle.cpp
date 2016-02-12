#include "GameActors.h"

Paddle::Paddle(int player): box(sf::Vector2f(25, 150))
{
	if (player == 1)
		x = 30;
	else
		x = 745;
	y = 225;
	box.setFillColor(sf::Color(255, 255, 255));
	box.setPosition(x, y);
}

void Paddle::update()
{
	box.setPosition(x, y);
}

int Paddle::getY()
{
	return y;
}

void Paddle::ballAt(int bally)
{
	if (bally > y) move(1);
	else if (bally < y + 125) move(-1);
}

void Paddle::move(int dir)
{
	if (dir > 0 && y < 450) y += 5;
	else if(dir < 1 && y > 0) y -= 5;
}

void Paddle::Draw(sf::RenderWindow *wind)
{
	wind->draw(box);
}