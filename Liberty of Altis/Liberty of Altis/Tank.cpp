#include "Tank.h"

Tank::Tank()
{
	Health = 80;
	Attack = 30;
	Range = 8;
	Cost = 15;
}

int Tank::hpgetter()
{
	return Health;
}

void Tank::damagetaken(int a)
{
	Health = Health - a;
}

int Tank::attackgetter()
{
	return Attack;
}

int Tank::rangegetter()
{
	return Range;
}

void Tank::Forestrange(bool a)
{
	//check if it is in forest (dont call this when not in forest)
	if (a == true) {
		Range = Range / 2;
	}
	else {
		Range = Range;
	}
}

int Tank::costgetter()
{
	return Cost;
}
