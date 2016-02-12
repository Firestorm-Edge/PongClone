#include "Loops.h"
#include "GameActors.h"
#include <SFML/Graphics.hpp>

//AILoop::AILoop() : ball(375, 275), p1(1), AI()
//{
//
//}
//
//Loop* AILoop::Update()
//{
//	//This is a weird place to put this, but we aren't relying on events to move paddles. -C
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) p1.move(-1);
//	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) p1.move(1);
//
//	AI.ballAt(ball.getY());
//
//	ball.checkPaddle(p1.getX(), p1.getY());
//	ball.checkPaddle(AI.getX(), AI.getY());
//
//	p1.update();
//	AI.update();
//
//	ball.update();
//	return this;
//}
//
//void AILoop::Input(sf::Event event)
//{
//
//}
//
//void AILoop::Draw(sf::RenderWindow *wind)
//{
//	ball.Draw(wind);
//	p1.Draw(wind);
//	AI.Draw(wind);
//}