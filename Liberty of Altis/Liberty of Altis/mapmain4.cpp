#include "mapmain4.h"
#include <iostream>

void mapmain4::drawmap()
{
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 18; j++)
		{
			gotoxy(i * 2, j);
			color(0x0B);
			std::cout << "*";
		}
	}
}