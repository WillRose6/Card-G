#include "PowerPlusCard.h"
#include <iomanip>

PowerPlusCard::PowerPlusCard(int _effector, int id) : Card(id) {
	effector = _effector;
	std::string newDesc = "Power +";
	newDesc += std::to_string(effector);
	setDescription(newDesc);
}