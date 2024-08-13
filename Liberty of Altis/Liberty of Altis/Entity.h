#pragma once
#include "Position.h"

class Entity
{

private:
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
	//Check if entity is alive
	bool isEntityAlive(void);

	//Movement function, checks if movement is valid (pure virtual function)
	virtual bool Movement(void) = 0;
};

