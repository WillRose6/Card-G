#pragma once
#include "Card.h"
#include <vector>
class Player
{
protected:
	int playerID;
	int power;
	std::vector<Card*> deck;
	std::vector <Card*> board;

public:
	Player();
	Player(int id);
	Card* chooseCard();
	void reducePower();
	void increasePower();
	void removeCardFromBoard(int index);
	void removeCardFromBoard(Card* cardToRemove);
	void addCardToBoard(Card* cardToAdd);
	void addCardToDeck(Card* cardToAdd);
	void removeFromDeck(int index);
	void removeFromDeck(Card* cardToRemove);
	int findCardIndex(Card* card);
	int findCardIndexInBoard(Card* card);
	virtual void decideCardToChoose();
	int getPlayerID();
	void setPlayerID(int newID);
	std::vector<Card*> getDeck();
	void setDeck(std::vector<Card*>& newDeck);
};

