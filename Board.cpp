#include "Board.h"
#include <iostream>
#include <iomanip>

void Board::addCardToBoard(Card* card)
{
	cardsOnBoard.push_back(card);
}

void Board::addCardsToBoard(std::vector<Card*>& cards)
{
	cardsOnBoard = cards;

	displayBoard();
}

void Board::displayBoard()
{
	std::cout << "------------------------------" << std::endl;
	std::cout << "The board is:" << std::endl;
	std::cout << "------------------------------" << std::endl;

	for (int i = 0; i < cardsOnBoard.size(); i++) {
		std::cout << i+1 << ") " << cardsOnBoard.at(i)->getDescription() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
}

void Board::displayPlayerDeck(Player* p)
{
	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "Player " << p->getPlayerID()+1 << "'s deck is:" << std::endl;
	for (Card* c : p->getDeck()) {
		std::cout << "-  " << c->getDescription() << std::endl;
	}
	std::cout << "End of deck" << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
}

Card* Board::getCard(int index)
{
	return cardsOnBoard[index];
}
