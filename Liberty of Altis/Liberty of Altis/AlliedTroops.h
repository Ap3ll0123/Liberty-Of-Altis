#pragma once
#include "Entity.h"

class AlliedTroops : public Entity
{

protected:
	//For Allied, put in protected so u cant do this in main 
	AlliedTroops(int hp, int atk, int range, int cost);


public:

	//Default
	AlliedTroops(Entity& other);

	//Override, from entity
	void Movement(char direction, Entity& other);

	//Override, from entity
	void Attacking(Entity& other);

	bool collisioncheck(Entity& other);
};
