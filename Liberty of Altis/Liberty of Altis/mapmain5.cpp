#include "mapmain5.h"
#include <iostream>

void mapmain5::drawmap()
{
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 18; j++)
		{
			gotoxy(i * 2, j);
			color(0x0C);
			std::cout << "*";
		}
	}
}