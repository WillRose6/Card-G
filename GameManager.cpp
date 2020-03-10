#include "GameManager.h"
#include <iostream>
#include <stddef.h>

GameManager* GameManager::instance = NULL;

GameManager::GameManager(int numberOfPlayers)
{
	//Only allow one GameManager instance to exist at any one time
	if (instance) {
		std::cout << "Instance already exists!" << std::endl;
		return;
	}
	instance = this;
	currentState = NULL;
	turnManager = new TurnManager();
	playerManager = new PlayerManager();
	cardGenerator = new CardGenerator();
	board = new Board();
	setupGame(numberOfPlayers);
}

State& GameManager::getCurrentState()
{
	return *currentState;
}

void GameManager::setCurrentState(State& newState)
{
	currentState = &newState;
}

void GameManager::setupGame(int numberOfPlayers)
{
	//Make the other objects create their objects
	playerManager->createPlayers(numberOfPlayers);
	playGame();
}

void GameManager::playGame() {
	GenerateCardsState generateCardsState = GenerateCardsState();
	setCurrentState(generateCardsState);
	currentState->DoAction();

	ChooseCardsState chooseCardsState = ChooseCardsState();
	setCurrentState(chooseCardsState);
	currentState->DoAction();
}
