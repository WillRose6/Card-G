#include "PowerMinusCard.h"

PowerMinusCard::PowerMinusCard(int _effector, int ID) : Card(ID)
{
	effector = _effector;
	std::string newDesc = "Power -";
	newDesc += std::to_string(effector);
	setDescription(newDesc);
}
