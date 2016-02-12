#include <SFML/Graphics.hpp>
#pragma once

class Paddle
{
public:
	Paddle(int player);
	void Draw(sf::RenderWindow *wind);
	void update();
	int getY();
	void ballAt(int bally);
	void move(int dir);
private:
	int x, y;
	sf::RectangleShape box;
};

class AIPaddle
{
public:
	AIPaddle();
	void Draw(sf::RenderWindow *wind);
	void update();
	int getY();
	void ballAt(int bally);
	void move(int dir);
private:
	int x, y;
	sf::RectangleShape box;
};

class Ball
{
public:
	Ball(int xLoc, int yLoc);
	void Draw(sf::RenderWindow *wind);
	void update();
	void reset();
	int getX();
	int getY();
	int setScore;

	void bounceY();
	void bounceX();
private:
	int x, y;
	int xVel, yVel;
	sf::CircleShape circle;
};