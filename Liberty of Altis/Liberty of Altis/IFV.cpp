#include "IFV.h"

IFV::IFV(void)
{

}

IFV::IFV(int hp, int atk, int range, int cost) : AlliedTroops(hp, atk, range, cost)
{
	//hope this works
}

IFV::IFV(int hp, int atk, int range, int cost, bool isEnemy): EnemyTroops(hp, atk, range, cost)
{
	//should go to enemy 
}
