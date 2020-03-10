#include "Player.h"

Player::Player()
{
	playerID = 0;
	power = 0;
	deck = std::vector<Card*>();
}

Player::Player(int id)
{
	playerID = id;
	power = 0;
}

Card* Player::chooseCard()
{
	return nullptr;
}

void Player::reducePower()
{
	power++;
}

void Player::increasePower()
{
	power--;
}

void Player::addCardToDeck(Card* cardToAdd)
{
	deck.push_back(cardToAdd);
}

void Player::removeFromDeck(int index) {
	deck.erase(deck.begin() + index);
}

void Player::removeFromDeck(Card* cardToRemove)
{
	deck.erase(deck.begin() + findCardIndex(cardToRemove));
}

int Player::findCardIndex(Card* card) {
	for (int i = 0; i < deck.size(); i++) {
		if (deck.at(i) == card) {
			return i;
		}
	}

	return -1;
}

void Player::decideCardToChoose()
{
}

int Player::getPlayerID()
{
	return playerID;
}

void Player::setPlayerID(int newID)
{
	playerID = newID;
}

std::vector<Card*> Player::getDeck()
{
	return deck;
}

void Player::setDeck(std::vector<Card*>& newDeck)
{
	deck = newDeck;
}
