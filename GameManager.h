#pragma once
#include "State.h"
#include "GenerateCardsState.h"
#include "ChooseCardsState.h"
#include "TurnManager.h"
#include "PlayerManager.h"
#include "CardGenerator.h"
#include "Board.h"

class GameManager
{
public:
	GameManager(int numberOfPlayers);
	State& getCurrentState();
	void setCurrentState(State& newState);
	void displayWinner();
	void deleteObjects();
	void setupGame(int numberOfPlayers);
	void playGame();

public:
	static GameManager* instance;
	State* currentState;
	TurnManager* turnManager;
	PlayerManager* playerManager;
	CardGenerator* cardGenerator;
	Board* board;
};

