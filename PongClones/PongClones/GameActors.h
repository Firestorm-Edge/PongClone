#pragma once

class Paddle
{
public:
	Paddle(int player);
	int getY();
	void move(int dir);
};

class Ball
{
public:
	Ball(int x, int y);
	void reset();
	int getX();
	int getY();

	void bounceY();
	void bounceX();
};