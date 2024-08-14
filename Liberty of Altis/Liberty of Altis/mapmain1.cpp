#include "mapmain1.h"
#include <iostream>
#include "environmentalObjs.h"


mapmain1::mapmain1()
{

}


//Function to start game 1
void mapmain1::drawmap()
{
	bool objexist = false;
	int count = 0;
	environmentalObjs* trees[48];

	//random position list for trees
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


	//trees next to the road
	for (int i = 0; i < 9; i++)
	{
		trees[i] = new environmentalObjs(char(176), 20, i * 4);

		trees[i + 9] = new environmentalObjs(char(176), 28, i * 4 + 1);
	}

	//trees that are randomly placed around the map
	for (int i = 0; i < 30; i++)
	{
		trees[i + 18] = new environmentalObjs(char(176), treexpos[i], treeypos[i]);
	}


	//border
	color(0x0F);
	for (int i = 4; i < 54; i++)
	{
		gotoxy(i, 0);
		std::cout << char(205);
		gotoxy(i, 19);
		std::cout << char(205);
	}
	for (int i = 1; i < 19; i++)
	{
		gotoxy(3, i);
		std::cout << char(186);
		gotoxy(54, i);
		std::cout << char(186);
	}

	//top left corner
	gotoxy(3, 0);
	std::cout << char(201);
	//bottom left corner
	gotoxy(3,19);
	std::cout << char(200);
	//top right corner
	gotoxy(54, 0);
	std::cout << char(187);
	//bottom right corner
	gotoxy(54, 19);
	std::cout << char(188);


	//render
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 18; j++)
		{
			gotoxy(i + 4 , j + 1);
			objexist = false;
			//check if a tree is in the position
			for (int k = 0; k < 48; k++)
			{
				if (trees[k]->getx() == i and trees[k]->gety() == j)
				{
					color(0x0A);
					std::cout << trees[k]->getsymbol();
					objexist = true;
				}
			}
			if (!objexist)
			{
				//road color
				if (i < 27 && i > 21)
				{
					color(0x08);
				}
				//grass color
				else 
				{
					color(0x02);
				}
				std::cout << char(178);
			}
		}
	}
}

//Function to start game 1
void mapmain1::map1game(void)
{
	//draw out map 
	drawmap();

	///// #### NOT POLYMORHPHISM ####																																																																																			
	//Spawn enemies 
	EnemyTroops* level1Enemy[10];
	//rifle man
	for (int i = 0; i < 6; i++) {
		level1Enemy[i] = new ERiflesman;
	}
	//Lmg
	for (int i = 6; i < 8; i++) {
		level1Enemy[i] = new EMachinegunner;
	}
	//Grenadier
	for (int i = 8; i < 10; i++) {
		level1Enemy[i] = new EGrenadier;
	}


	//Spawn allies 
	AlliedTroops* level1Allies[7];
	//rifle man 
	for (int i = 0; i < 3; i++) {
		level1Allies[i] = new ARiflesman;
	}
	//Lmg
	for (int i = 3; i < 5; i++) {
		level1Allies[i] = new AMachinegunner;
	}
	//Grenadier
	for (int i = 5; i < 7; i++) {
		level1Allies[i] = new AGrenadier;
	}



	//testing 

	gotoxy(0, 4);
	level1Enemy[0]->SetPosition(0, 4);
	std::cout << level1Enemy[0]->Draw_Icon();

	gotoxy(1, 3);
	level1Allies[0]->SetPosition(1, 3);
	std::cout << level1Allies[0]->Draw_Icon();

	gotoxy(1, 8);
	if ((level1Allies[0]->Entitycollision(*level1Enemy[0])) == true) {
		std::cout << "works";
	}
	else
		std::cout << "dont work";












	//Delete backlog
	for (int i = 0; i < 7; i++) {
		if (level1Enemy[i] != nullptr) {
			delete level1Enemy[i];
		}
		if (level1Allies[i] != nullptr) {
			delete level1Allies[i];
		}
	}

}
