#include "EnemyTroops.h"


EnemyTroops::EnemyTroops(void)
{
	Health = 0;
	Attack = 0;
	Range = 0;
	Cost = 0;
}

void EnemyTroops::Movement(char direction)
{
    int moving = rand() % 4;

    if (moving == 0) {
        //up
        PosXY.SetY(PosXY.GetY() - 1);
    }
    else if (moving == 1) {
        //down
        PosXY.SetY(PosXY.GetY() + 1);
    }
    else if (moving == 2) {
        //right
        PosXY.SetX(PosXY.GetX() - 1);
    }
    else {
        //left
        PosXY.SetX(PosXY.GetX() + 1);
    }
}

void EnemyTroops::Attacking(char direction)
{
	std::cout << "Enemy Attacking";

}
