#include "mapmain2.h"
#include <iostream>

void mapmain2::drawmap()
{
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 18; j++)
		{
			gotoxy(i * 2, j);
			color(0x08);
			std::cout << "*";
		}
	}
}