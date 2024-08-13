#pragma once
#include "Position.h"
#include <iostream>

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

	//Movement function, carries out movement (pure virtual function)
	virtual void Movement(void) = 0;

	//Attack function, carries out attack (pure virtual function)
	virtual void Attacking(void) = 0;
};

