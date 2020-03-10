#include "Card.h"
#include <iostream>
#include <iomanip>

Card::Card(int ID)
{
	setCardID(ID);
	//If this comes up then we got an error
	setDescription("ERROR");
}

int Card::getCardID()
{
	return cardID;
}

void Card::setCardID(int newID)
{
	cardID = newID;
}

std::string Card::getDescription()
{
	return description;
}

void Card::setDescription(std::string newArt)
{
	description = newArt;
}

void Card::printCard()
{
}
