/**
 * \struct Warrior
 * \brief Warrior struct
 * Two fighters fight until someone wins. 
 * \author Bogdan Patrik
 * \version 1.0 
 * \date 2021/01/18
 * Created on: 2021/01/18 9:30
*/

#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>

struct Warrior {
	std::string name;		///< Fighter's name 
	int hp;					///< Fighter's hp
	int dmg;				///< Fighter's damage
};
void inputFromTerminal(Warrior& w);		///< Reads the fighter's data
bool isAlive(const Warrior& w);			///< Checks whether our fighter is alive or dead
std::string toString(const Warrior& w);
void attack(const Warrior& attacker, Warrior& defender);		///< This function strarts the fight
void printCombatStatus(const Warrior& w1, const Warrior& w2);	///< This function prints out wach fighter's status
#endif // !WARRIOR_H