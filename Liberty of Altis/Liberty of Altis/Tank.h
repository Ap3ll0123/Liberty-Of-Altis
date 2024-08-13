#pragma once
#include "AlliedTroops.h"
#include "EnemyTroops.h"

class Tank : public AlliedTroops, public EnemyTroops
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
	Tank();

	//hpgetter
	int hpgetter();

	//hpsetter
	void damagetaken(int a);

	//attack getter
	int attackgetter();

	//range getter
	int rangegetter();

	//range setter
	void Forestrange(bool a);

	//cost getter
	int costgetter();
};

