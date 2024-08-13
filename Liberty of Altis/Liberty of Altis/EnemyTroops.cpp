#include "EnemyTroops.h"

EnemyTroops::EnemyTroops(int hp, int atk, int range, int cost) : Entity(hp, atk, range, cost)
{
	//pause
}

EnemyTroops::EnemyTroops(void)
{
	//set has enemy moved
	hasmoved = false;
}

void EnemyTroops::Enemyturn()
{
	Attacking();
	Movement();
}

void EnemyTroops::Movement()
{
	if (canAttack() == true) {
		hasmoved == true;
	}
	else {
		hasmoved == false;
	}

	//movement
	while (hasmoved == false) {
		if (rand() % 4 == 0) {
			SetY(GetY() - 1);

			//end the loop
			hasmoved == true;
		}
		else if (rand() % 4 == 1) {
			SetY(GetY() + 1);

			//end the loop
			hasmoved == true;
		}
		else if (rand() % 4 == 2) {
			SetX(GetX() - 1);

			//end the loop
			hasmoved == true;
		}
		else {
			SetX(GetX() - 1);

			//end the loop
			hasmoved == true;
		}
	}
}

void EnemyTroops::Attacking()
{


	if (canAttack() == true) {
		//attack enemy
	}

	std::cout << "Enemy Attacking";
}

bool EnemyTroops::canAttack(Entity& other)
{
	//maybe need to add range??
	if (GetX() == other.GetX() || GetY() == other.GetY()) {
		return true;
	}
	else {
		return false;
	}
}
