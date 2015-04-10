#include "Player.h"

void Player::setDirection(char direction)
{
	// set the direction for the player to move in
	m_direction = direction;
}

void Player::print()
{
	// print the player on the board and "erase" from previous location
}

int Player::getLife()
{
	// return the amount of life the player has
	return m_life;
}

bool Player::reduceLife()
{
	// return true if the player is dead
	bool isDead = false;
	m_life--;
	if (m_life <= 0)
		isDead = true;
	return isDead;
}

int Player::getScore()
{
	// return the players score
	return m_score;
}

void Player::increaseScore(int val)
{
	// increase player score by given amount
	m_score += val;
}

void Player::setSolution(int solution)
{
	// set the correct solution
	m_solution = solution;
}