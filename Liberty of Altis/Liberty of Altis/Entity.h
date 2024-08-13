#pragma once
#include "Position.h"
#include <iostream>

class Entity
{

protected:
	//Composition relationship 
	Position PosXY;

	//Health, amount of health it before dying
	int Health; 

	//Attack, amount of damage it deals
	int Attack;

	//Range, how far can it attack 
	int Range;

	//Cost, amount of inventory space it takes up
	int Cost;


public:

	//Default
	Entity(void);

	//Check if entity is alive
	bool isEntityAlive(void);

	//Movement function, carries out movement (pure virtual function)
	virtual void Movement(char direction) = 0;

	//Attack function, carries out attack (pure virtual function)
	virtual void Attacking(void) = 0;

	//Get X position 
	int GetX(void);

	//Get Y position 
	int GetY(void);

	//hpgetter
	int GetHealth(void);

	//attack getter
	int GetAttack(void);

	//range getter
	int GetRange(void);

	//cost getter
	int GetCost(void);

	void SetX(int xpos);
	void SetY(int ypos);

};

