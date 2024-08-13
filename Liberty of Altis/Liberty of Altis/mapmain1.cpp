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
	environmentalObjs* props[60];

	for (int i = 0; i < 50; i++)
	{
		props[i + 10] = new environmentalObjs(char(219), i, 0);
	}
	props[0] = new environmentalObjs(char(219), 1, 1);
	props[1] = new environmentalObjs(char(219), 2, 1);
	props[2] = new environmentalObjs(char(219), 3, 1);
	props[3] = new environmentalObjs(char(219), 4, 1);
	props[4] = new environmentalObjs(char(219), 5, 1);
	props[5] = new environmentalObjs(char(219), 6, 1);
	props[6] = new environmentalObjs(char(219), 7, 1);
	props[7] = new environmentalObjs(char(219), 8, 1);
	props[8] = new environmentalObjs(char(219), 9, 1);
	props[9] = new environmentalObjs(char(219), 10, 1);

	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 18; j++)
		{
			gotoxy(i , j);
			objexist = false;
			for (int k = 0; k < 60; k++)
			{
				if (props[k]->getx() == i and props[k]->gety() == j)
				{
					color(0x06);
					std::cout << props[k]->getsymbol();
					objexist = true;
				}
			}
			if (!objexist)
			{
				color(0x02);
				std::cout << char(178);
			}
		}
	}
}