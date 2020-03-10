#include "TurnManager.h"

TurnManager::TurnManager()
{
	turn = 0;
}

int TurnManager::getTurn()
{
	return turn;
}

void TurnManager::setTurn(int newTurn)
{
	turn = newTurn;
}
