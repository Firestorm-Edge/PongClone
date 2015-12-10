#pragma once
#include <SFML/Graphics.hpp>

class Loop
{
public:
	void Update();
	void Draw();
	void Input();
};

class GameLoop : Loop
{
	GameLoop();
};

class MenuLoop : Loop
{
	MenuLoop();
};