#include "Loops.h"
#include "GameActors.h"
#include <SFML/Graphics.hpp>

GameLoop::GameLoop() : ball(375, 275), p1(1), p2(2)
{
	scoreLeft = 0;
	scoreRight = 0;
	font = new sf::Font();
	if (!font->loadFromFile("X-Cryption.ttf"))
	{
		//title = new sf::Text("HERE BE PONG!", *font, 30);
	}
	scoreLeftText = sf::Text(std::to_string(scoreLeft), *font, 100);
	scoreLeftText.setPosition(280, 50);
	scoreRightText = sf::Text(std::to_string(scoreRight), *font, 100);
	scoreRightText.setPosition(460, 50);
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

	if (ball.setScore == -1) {
		scoreRight++;
		scoreRightText = sf::Text(std::to_string(scoreRight), *font, 100);
		scoreRightText.setPosition(460, 50);
		ball.setScore = 0;
	}
	else if (ball.setScore == 1) {
		scoreLeft++;
		scoreLeftText = sf::Text(std::to_string(scoreLeft), *font, 100);
		scoreLeftText.setPosition(280, 50);
		ball.setScore = 0;
	}

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
	wind->draw(scoreLeftText);
	wind->draw(scoreRightText);
}