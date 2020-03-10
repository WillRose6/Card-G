#include "StealCard.h"

StealCard::StealCard(int _effector, int id) : Card(id)
{
	effector = _effector;
	std::string newDesc = "Steal ";
	newDesc += std::to_string(effector);
	setDescription(newDesc);
}
