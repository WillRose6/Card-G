#pragma once
#include <string>
class Card
{
private:
	int cardID;
	std::string description;

protected:
	int effector;

public:
	Card(int ID);
	int getCardID();
	void setCardID(int newID);
	std::string getDescription();
	void performAction();
	void setDescription(std::string newArt);
	void printCard();
};

