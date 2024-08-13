#include "EnemyTroops.h"

EnemyTroops::EnemyTroops(int hp, int atk, int range, int cost) : Entity(hp,atk,range,cost)
{
	//pause
}

EnemyTroops::EnemyTroops(void)
{
	//pause
}

void EnemyTroops::Movement()
{
	std::cout << "Enemy movement";
}

void EnemyTroops::Attacking()
{
	std::cout << "Enemy Attacking";

}
