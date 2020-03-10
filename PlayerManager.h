#pragma once
#include "Player.h"
#include <vector>

class PlayerManager
{
public:
	PlayerManager();
	void createPlayers(int numberOfPlayers);
	std::vector<Player*> getPlayers();
	void setPlayers(std::vector<Player*> newPlayers);
	Player* getCurrentPlayer();

	void setNextPlayer();
	void setFirstPlayer();
	//Player& findWinner();
	int getNumberOfPlayers();
	void setNumberOfPlayers(int num);

private:
	std::vector<Player*> players;
	Player* currentPlayer;
	int numberOfPlayers = 0;
};

