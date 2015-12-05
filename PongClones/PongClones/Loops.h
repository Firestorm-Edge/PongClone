#pragma once

class GameLoop
{
public:
	GameLoop();
	void Update();
	void Draw();
	void Input();
};

class MenuLoop
{
public:
	MenuLoop();
	void Update();
	void Draw();
	void Input();
};