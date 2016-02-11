#include "Loops.h"
#include "GameActors.h"
#include <SFML/Graphics.hpp>

GameLoop::GameLoop() : ball(375, 275), p1(1), p2(2)
{

}

Loop* GameLoop::Update()
{
	//This is a weird place to put this, but we aren't relying on events to move paddles. -C
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) p1.move(-1);
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) p1.move(1);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) p2.move(-1);
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) p2.move(1);

	p1.update();
	p2.update();

	ball.checkPaddle(p1.getX(), p1.getY());
	ball.checkPaddle(p2.getX(), p2.getY());

	ball.update();
	return this;
}

void GameLoop::Input(sf::Event event)
{

}

void GameLoop::Draw(sf::RenderWindow *wind)
{
	ball.Draw(wind);
	p1.Draw(wind);
	p2.Draw(wind);
}