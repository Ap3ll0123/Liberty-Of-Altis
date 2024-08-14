#pragma once
#include "Entity.h"

class AlliedTroops : public Entity
{


public:

	//Default
	AlliedTroops(void);

	//For Allied, put in protected so u cant do this in main 
	AlliedTroops(int hp, int atk, int range, int cost);

	//Override, from entity
	void Movement(char direction) override;

	//Override, from entity
	void Attacking(char direction) override;

	//Check if colliding 
	bool collisioncheck(Entity& other);
};

