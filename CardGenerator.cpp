#include "CardGenerator.h"
#include <vector>
#include "PowerPlusCard.h"
#include "PowerMinusCard.h"
#include "StealCard.h"
#include <ctime>

CardGenerator::CardGenerator()
{
	srand(time(NULL));
}

std::vector<Card*> CardGenerator::GenerateCards()
{
	std::vector<Card*> cards;
	for (int i = 0; i < 20; i++) {
		int r = rand() % 3;

		switch (r) {
			case 0:
				cards.push_back(new PowerPlusCard(GetRandomNumber(1,5), i));
				break;

			case 1:
				cards.push_back(new PowerMinusCard(GetRandomNumber(1,5), i));
				break;

			case 2:
				cards.push_back(new StealCard(GetRandomNumber(1,2), i));
				break;
		}
	}

	return cards;
}

int CardGenerator::GetRandomNumber(int min, int max)
{
	return min + rand() % ((max + 1) - min);
}
