#pragma once
#include "Entity.h"
class EnemyTroops : public Entity
{


public:
	//Default 
	EnemyTroops(void);

	//Override to pass into the entity constructor 
	EnemyTroops(int hp, int atk, int range, int cost);

	//for Ai behavioural attacking and movement
	void Movement(char direction) override;

	void Attacking(void) override;

	bool collisioncheck(Entity& other);
};

