#include "GenerateCardsState.h"
#include "GameManager.h"
#include <iostream>

void GenerateCardsState::DoAction()
{
	std::vector<Card*> cards = GameManager::instance->cardGenerator->GenerateCards();
	GameManager::instance->board->addCardsToBoard(cards);
}
