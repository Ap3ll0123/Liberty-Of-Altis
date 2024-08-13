#pragma once
#include "Entity.h"

class AlliedTroops : public Entity
{

protected:
	//For Allied, put in protected so u cant do this in main 
	AlliedTroops(int hp, int atk, int range, int cost);


public:

	//Default
	AlliedTroops(void);

	//Override, from entity
	void Movement(char direction);

	//Override, from entity
	void Attacking(void);

	bool collisioncheck(Entity& other);
};

