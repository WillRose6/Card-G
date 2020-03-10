#pragma once
class TurnManager
{
private:
	int turn;

public:
	TurnManager();
	int getTurn();
	void setTurn(int newTurn);
};

