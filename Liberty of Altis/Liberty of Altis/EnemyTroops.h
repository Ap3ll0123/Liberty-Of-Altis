#pragma once
#include "Entity.h"

class EnemyTroops : public Entity
{
private:
	bool hasmoved;

	//for Ai behavioural attacking and movement
	void Movement();
	void Attacking();
	bool canAttack(Entity& other);

protected:

	//Override to pass into the entity constructor 
	EnemyTroops(int hp, int atk, int range, int cost);

public:
	//Default 
	EnemyTroops(void);

	void Enemyturn();
};



