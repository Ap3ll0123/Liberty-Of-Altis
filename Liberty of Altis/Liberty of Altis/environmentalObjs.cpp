#include "environmentalObjs.h"
#include <iostream>

void environmentalObjs::drawEnvObj()
{
	std::cout << objsymbol;
}

void environmentalObjs::setsymbol(char i)
{
	objsymbol = i;
}
char environmentalObjs::getsymbol()
{
	return objsymbol;
}
