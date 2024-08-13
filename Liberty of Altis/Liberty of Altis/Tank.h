#pragma once
#include "AlliedTroops.h"
#include "EnemyTroops.h"

class Tank : public AlliedTroops, public EnemyTroops
{
public:
	//Default constructor
	Tank(void);

	//Overloaded, which will pass into allied troop constructor and then entity constructor 
	Tank(int hp, int atk, int range, int cost);

	//Overloaded, which will pass into enemy troop constructor and then entity constructor 
	Tank(int hp, int atk, int range, int cost, bool isEnemy);
};

