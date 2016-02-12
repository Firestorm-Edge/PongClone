#include "GameActors.h"

AIPaddle::AIPaddle() : box(sf::Vector2f(25, 150))
{
	x = 745;
	y = 225;
	box.setFillColor(sf::Color(255, 255, 255));
	box.setPosition(x, y);
}

void AIPaddle::update()
{
	box.setPosition(x, y);
}

int AIPaddle::getX()
{
	return x;
}

void AIPaddle::ballAt(int bally)
{
	if (bally > y) move(1);
	else if (bally < y + 125) move(-1);
}

int AIPaddle::getY()
{
	return y;
}

void AIPaddle::move(int dir)
{
	if (dir > 0 && y < 450) y += 5;
	else if (dir < 1 && y > 0) y -= 5;
}

void AIPaddle::Draw(sf::RenderWindow *wind)
{
	wind->draw(box);
}