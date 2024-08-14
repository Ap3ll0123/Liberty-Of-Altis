#include "AlliedTroops.h"



AlliedTroops::AlliedTroops(void)
{
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
			//std::cout << PosXY.GetY() << std::endl;
		}
		else {
			PosXY.SetY(PosXY.GetY() - 1);
			//std::cout << PosXY.GetY() << std::endl;
		}
	}
	else if (dirinput == 'S') {
		if (PosXY.GetY() == 17) {
			//std::cout << PosXY.GetY() << std::endl;
		}
		else {
			PosXY.SetY(PosXY.GetY() + 1);
			//std::cout << PosXY.GetY() << std::endl;
		}
	}
	else if (dirinput == 'A') {
		if (PosXY.GetX() == 0) {
			//std::cout << PosXY.GetX() << std::endl;
		}
		else {
			PosXY.SetX(PosXY.GetX() - 1);
			//std::cout << PosXY.GetX() << std::endl;
		}
	}
	else if (dirinput == 'D') {
		if (PosXY.GetX() == 50) {
			//std::cout << PosXY.GetX() << std::endl;
		}
		else {
			PosXY.SetX(PosXY.GetX() + 1);
			//std::cout << PosXY.GetX() << std::endl;
		}
	}
}

void AlliedTroops::Attacking(char direction)
{
	std::cout << "Attack Alliedtroop";
}

