#ifndef _CELL_H_
#define _CELL_H_

#include <vector>
#include <string>
#include "Player.h"
#include "Solution.h"
using namespace std;

class Cell
{
private:
	char m_charRep;
	bool m_containsSolution;
	bool m_containsPlayer;
	bool m_isEmpty;
	vector <Solution> m_solution;
	vector <Player> m_player;

public:
	Cell(); //empty Cell constructor
	void addSolution(Solution *solution);
	void removeSolution();
	bool hasSolution();
	void addPlayer(Player *player);
	bool hasPlayer();
	void removePlayer();
	bool isEmpty();
	char charRep();
};

#endif