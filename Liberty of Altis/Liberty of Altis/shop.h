#pragma once
#include <iostream>
class shop
{
private:

public:
	int cash = 1000;
	int unitbuy;
	int unitnum;
	int price;
	void cashearned(int Cash);
	void cashlost(int Cash);
	void shopping();
	void pricing(int p);
	bool allen = false;
};

