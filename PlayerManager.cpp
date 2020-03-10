#include "PlayerManager.h"
#include <iostream>

PlayerManager::PlayerManager()
{
}

void PlayerManager::createPlayers(int numberOfPlayers)
{
	setNumberOfPlayers(numberOfPlayers);
	for (int i = 0; i < numberOfPlayers; i++) {
		Player* p = new Player(i);
		players.push_back(p);
	}
	currentPlayer = players[0];
}

std::vector<Player*> PlayerManager::getPlayers()
{
	return players;
}

void PlayerManager::setPlayers(std::vector<Player*> newPlayers)
{

}

Player* PlayerManager::getCurrentPlayer() {
	return currentPlayer;
}

void PlayerManager::setNextPlayer()
{
	currentPlayer = players[currentPlayer->getPlayerID() + 1];
}

void PlayerManager::setFirstPlayer()
{
	currentPlayer = players[0];
}

int PlayerManager::getNumberOfPlayers()
{
	return numberOfPlayers;
}

void PlayerManager::setNumberOfPlayers(int num)
{
	numberOfPlayers = num;
}

//Player& PlayerManager::findWinner()
//{
//	// TODO: insert return statement here
//}
