#pragma once
#include "InGameState.h"
class ChooseCardsState : public InGameState
{
public:
	void DoAction() override;
	void AddCardToDeck(Card* c);
};

