#include "Loops.h"
#include "SFML\Window.hpp"

MenuLoop::MenuLoop() : selector(5)
{

	sf::Font *font = new sf::Font();
	if (!font->loadFromFile("X-Cryption.ttf"))
	{
		//title = new sf::Text("HERE BE PONG!", *font, 30);
	}
	title = sf::Text("HERE BE PONG!",*font,30);
	title.setPosition(280,50);
	soloPlay = sf::Text("Solo Play", *font,30);
	soloPlay.setPosition(280, 300);
	multiPlay = sf::Text("Multiplayer", *font, 30);
	multiPlay.setPosition(280, 400);

	selector.setPosition(250, 320);
	picked = 0;


}

Loop* MenuLoop::Update() 
{
	if (newLoop != NULL) {
		return newLoop;
	}
	return this;
}

void MenuLoop::Input(sf::Event event)
{
	if (event.type == sf::Event::KeyPressed) {
		if (event.key.code == sf::Keyboard::Up) {
			selector.setPosition(250, 320);
			picked = 0;
		}
		else if (event.key.code == sf::Keyboard::Down) {
			selector.setPosition(250, 415);
			picked = 1;
		}
		else if (event.key.code == sf::Keyboard::Return) {
			if (picked == 0) {
				newLoop = new AILoop();
			}
			else {
				newLoop = new GameLoop();
				
			}
		}
	}
	//move cursor

	//if Select, check what option is picked.
}

void MenuLoop::Draw(sf::RenderWindow *win)
{
	win->draw(title);

	win->draw(soloPlay);
	win->draw(multiPlay);

	win->draw(selector);
	//Draw cursor.
}