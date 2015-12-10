#pragma once


class GameManager
{
public:
	GameManager();
	void Play();

private:
	sf::Window window;
	//private Loop ActiveLoop;
	bool running = true;
	void HandleInput();
	void PassInputs(sf::Event event);
	void Update();
	void Draw();
};