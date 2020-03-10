#pragma once
#include "Card.h"
#include "Player.h"
#include <vector>

class Board
{
public:
	void addCardToBoard(Card* card);
	void addCardsToBoard(std::vector<Card*>& cards);
	void displayBoard();
	void displayPlayerDeck(Player* p);
	Card* getCard(int index);

private:
	std::vector<Card*> cardsOnBoard;
};