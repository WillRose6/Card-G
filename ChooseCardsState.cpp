#include "ChooseCardsState.h"
#include <iostream>
#include "GameManager.h"

void ChooseCardsState::DoAction()
{
	for(int i = 0; i < (GameManager::instance->playerManager->getNumberOfPlayers() * 5); i++) {
		InGameState::DoAction();
		//Do stuff specific to the choosing of the cards here
		ResetGameLoop();
		Card* c = chooseCard();
		GameManager::instance->playerManager->getCurrentPlayer()->addCardToDeck(c);
		GameManager::instance->board->displayPlayerDeck(GameManager::instance->playerManager->getCurrentPlayer());
		GameManager::instance->playerManager->setNextPlayer();
	}
}

void ChooseCardsState::AddCardToDeck(Card* c) {
}
