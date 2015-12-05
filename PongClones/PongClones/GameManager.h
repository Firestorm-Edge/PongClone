#pragma once


class GameManager
{
public:
	GameManager();
	void Play();

private:
	//WINDOW VARIABLE HERE
	bool running = true;
	void HandleInput();
	void Update();
	void Draw();
};