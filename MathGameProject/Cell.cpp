#include "Cell.h"
using namespace std;

Cell::Cell()
{
	m_charRep = ' ';
	m_containsSolution = false;
	m_containsPlayer = false;
	m_isEmpty = true;
};

void Cell::addSolution(Solution *solution)
{
	m_isEmpty = false;
	m_containsSolution = true;
	m_solution.push_back(*solution);
}

void Cell::removeSolution()
{
	m_isEmpty = true;
	m_containsSolution = false;
	m_solution.pop_back();
}
	
bool Cell::hasSolution()
{
	return m_containsSolution;
}

void Cell::addPlayer(Player *player)
{
	m_isEmpty = false;
	m_containsPlayer = true;
	m_player.push_back(*player);
}

bool Cell::hasPlayer()
{
	return m_containsPlayer;
}

void Cell::removePlayer()
{
	m_isEmpty = true;
	m_containsPlayer = false;
	m_player.pop_back();
}

bool Cell::isEmpty()
{
	return m_isEmpty;
}

char Cell::charRep()
{
	return m_charRep;
}