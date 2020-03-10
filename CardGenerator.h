#pragma once
#include <vector>
#include "Card.h"

class CardGenerator
{
public:
	CardGenerator();
	std::vector<Card*> GenerateCards();
	int GetRandomNumber(int min, int max);
};

