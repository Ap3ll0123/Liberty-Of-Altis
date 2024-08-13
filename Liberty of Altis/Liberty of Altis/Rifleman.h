#pragma once
#include "AlliedTroops.h"
#include "EnemyTroops.h"

class Rifleman : public AlliedTroops, public EnemyTroops
{
private:
	//total amount of health
	int Health;

	//total amount of damage
	int Attack;

	//amount of range
	int Range;

	//the cost in backpack
	int Cost;

public:
	//constructor
	Rifleman();
};