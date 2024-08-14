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
		if (PosXY.GetX() == 0) {
			PosXY.SetY(PosXY.GetY());
			std::cout << PosXY.GetY() << std::endl;
		}
		else {
			PosXY.SetY(PosXY.GetY() - 1);
			std::cout << PosXY.GetY() << std::endl;
		}
	}
	else if (dirinput == 'S') {
		if (PosXY.GetY() == 17) {
			PosXY.SetY(PosXY.GetY());
			std::cout << PosXY.GetY() << std::endl;
		}
		else {
			PosXY.SetY(PosXY.GetY() + 1);
			std::cout << PosXY.GetY() << std::endl;
		}
	}
	else if (dirinput == 'A') {
		if (PosXY.GetX() == 0) {
			PosXY.SetX(PosXY.GetX());
			std::cout << PosXY.GetX() << std::endl;
		}
		else {
			PosXY.SetX(PosXY.GetX() - 1);
			std::cout << PosXY.GetX() << std::endl;
		}
	}
	else if (dirinput == 'D') {
		if (PosXY.GetX() == 50) {
			PosXY.SetX(PosXY.GetX());
			std::cout << PosXY.GetX() << std::endl;
		}
		else {
			PosXY.SetX(PosXY.GetX() + 1);
			std::cout << PosXY.GetX() << std::endl;
		}
	}
	std::cout << "ALlyMOve";
}

void AlliedTroops::Attacking(char direction)
{
	std::cout << "Attack Alliedtroop";
}

bool AlliedTroops::collisioncheck(Entity& other)
{
	// ur pos = other pos - 1
	if (PosXY.GetX() == other.PosXY.GetX()) {
		return true;
	}
	else
		return false;
}
