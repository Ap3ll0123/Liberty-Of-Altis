#include "mapmain1.h"
#include <iostream>

void mapmain1::drawmap()
{
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 18; j++)
		{
			gotoxy(i * 2, j);
			color(0x02);
			std::cout << "*";
		}
	}
}