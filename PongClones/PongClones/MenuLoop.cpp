#include "Loops.h"
#include "SFML\Window.hpp"

MenuLoop::MenuLoop()
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
}

void MenuLoop::Update() 
{
	//Not sure we actually ever use this.
}

void MenuLoop::Input() 
{
	//move cursor

	//if Select, check what option is picked.
}

void MenuLoop::Draw(sf::RenderWindow *win)
{
	win->draw(title);
	win->draw(soloPlay);
	win->draw(multiPlay);
	//Draw Title.
	//Draw cursor.
	//Draw menu options.
}