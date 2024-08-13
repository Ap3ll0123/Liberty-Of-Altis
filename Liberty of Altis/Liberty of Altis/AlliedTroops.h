#pragma once
#include "Entity.h"

class AlliedTroops : public Entity
{
public:
	void Movement(char direction);
	void Attacking();
	bool collisioncheck(Entity& other);
};

