#pragma once
#include "State.h"
#include "Card.h"
class InGameState : public State
{
public:
	InGameState();
	~InGameState();

protected:
	virtual void ResetGameLoop();
	virtual Card* chooseCard();
	virtual void AddCardToBoard(Card& c);
};

