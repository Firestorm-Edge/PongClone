#include "Loops.h"
#include "SFML\Window.hpp"

MenuLoop::MenuLoop()
{
	/*sf::Font font = sf::Font();
	font.loadFromFile("arial.ttf");
	title = sf::Text("HERE BE PONG!",font,30);
	soloPlay = sf::Text();*/
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

void MenuLoop::Draw(sf::RenderWindow win)
{
	win.draw(title);
	//Draw Title.
	//Draw cursor.
	//Draw menu options.
}