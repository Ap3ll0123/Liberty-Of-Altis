#pragma once
#include "AlliedTroops.h"
#include "EnemyTroops.h"
#include <iostream>

class IFV : public AlliedTroops, public EnemyTroops
{

protected:



public:
	//Default constructor
	IFV(void);

	//Overloaded, which will pass into allied troop constructor and then entity constructor 
	IFV(int hp, int atk, int range, int cost);

	//Overloaded, which will pass into enemy troop constructor and then entity constructor 
	IFV(int hp, int atk, int range, int cost, bool isEnemy);


};

