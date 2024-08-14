#include "mapmain1.h"
#include <iostream>
#include "environmentalObjs.h"


mapmain1::mapmain1()
{

}

void mapmain1::drawmap()
{
	bool objexist = false;
	int count = 0;
	environmentalObjs* props[48];

	int treexpos[30] = {
		3,  7, 18, 29, 34, 15, 49, 11,  5, 38,
	   12, 42,  6,  0, 31,  8,  11, 19, 35, 28,
	   16, 17, 47, 14,  2, 33, 30, 48, 10, 32
	};

	int treeypos[30] = {
		2,  5, 11,  8, 14,  3,  7, 16,  1,  9,
		4, 12,  6,  0, 10, 15, 13, 17,  2, 11,
		7,  9,  4,  8,  3, 12,  5,  6,  0,  1
	};

	for (int i = 0; i < 9; i++)
	{
		props[i] = new environmentalObjs(char(176), 20, i * 4);

		props[i + 9] = new environmentalObjs(char(176), 28, i * 4 + 1);
	}

	for (int i = 0; i < 30; i++)
	{
		props[i + 18] = new environmentalObjs(char(176), treexpos[i], treeypos[i]);
	}

	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 18; j++)
		{
			gotoxy(i , j);
			objexist = false;
			for (int k = 0; k < 48; k++)
			{
				if (props[k]->getx() == i and props[k]->gety() == j)
				{
					color(0x0A);
					std::cout << props[k]->getsymbol();
					objexist = true;
				}
			}
			if (!objexist)
			{
				if (i < 27 && i > 21)
				{
					color(0x08);
				}
				else 
				{
					color(0x02);
				}
				std::cout << char(178);
			}
		}
	}
}