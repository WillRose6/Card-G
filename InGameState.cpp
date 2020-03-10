#include "InGameState.h"
#include <iostream>
#include "GameManager.h"

InGameState::InGameState()
{
}


InGameState::~InGameState()
{
}

void InGameState::ResetGameLoop()
{
	GameManager::instance->turnManager->setTurn(0);
	GameManager::instance->playerManager->setFirstPlayer();
}

Card* InGameState::chooseCard()
{
	std::cout << "Choose your card player " << GameManager::instance->playerManager->getCurrentPlayer()->getPlayerID() << ": " << std::endl;
	int input;
	std::cin >> input;
	return GameManager::instance->board->getCard(input-1);
}

void InGameState::AddCardToBoard(Card& c)
{

}
