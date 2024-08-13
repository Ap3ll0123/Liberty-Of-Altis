#include "AlliedTroops.h"
#include <iostream>

AlliedTroops::AlliedTroops(int hp, int atk, int range, int cost)
{
	Health = hp;
	Attack = atk;
	Range = range;
	Cost = cost;
}

AlliedTroops::AlliedTroops(void)
{
	//Pause Health
	Health = 0;
	Attack = 0;
	Range = 0;
	Cost = 0;
}

void AlliedTroops::Movement(char direction)
{
	char dirinput = toupper(direction);

	if (dirinput == 'W') {
		if (GetY() == 0) {
			SetY(GetY());
			std::cout << GetY() << std::endl;
		}
		else {
			SetY(GetY() - 1);
			std::cout << GetY() << std::endl;
		}
	}
	else if (dirinput == 'S') {
		if (GetY() == 17) {
			SetY(GetY());
			std::cout << GetY() << std::endl;
		}
		else {
			SetY(GetY() + 1);
			std::cout << GetY() << std::endl;
		}
	}
	else if (dirinput == 'A') {
		if (GetX() == 0) {
			SetX(GetX());
			std::cout << GetX() << std::endl;
		}
		else {
			SetX(GetX() - 1);
			std::cout << GetX() << std::endl;
		}
	}
	else if (dirinput == 'D') {
		if (GetX() == 50) {
			SetX(GetX());
			std::cout << GetX() << std::endl;
		}
		else {
			SetX(GetX() + 1);
			std::cout << GetX() << std::endl;
		}
	}
	std::cout << "ALlyMOve";
}

void AlliedTroops::Attacking()
{
	std::cout << "Attack Alliedtroop";
}

bool AlliedTroops::collisioncheck(Entity& other)
{
	// ur pos = other pos - 1
	if (GetX() == other.GetX()) {
		return true;
	}
	else
		return false;
}
