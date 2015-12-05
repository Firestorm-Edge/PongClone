#include "Loops.h"
#include "GameManager.h"

GameManager::GameManager()
{
	//MAKE WINDOW HERE
}

void GameManager::Play()
{
	while (running) 
	{
		HandleInput();
		Update();
		Draw();
	}
}

void GameManager::HandleInput()
{
	//HANDLE WINDOW INPUT STUFF HERE!
}

void GameManager::Update()
{
	//CURRENT LOOP UPDATE
}

void GameManager::Draw()
{
	//CURRENT LOOP DRAW!
}