#include "gameui.h"
#include <iostream>
#include "Windows.h"
gameui::gameui()
{
}

void gameui::cutscene1()
{
	std::cout << "It is 2001, the military of the Republic Of Altis has siezed power after a coup on the democratic government of the island nation.\n";
	Sleep(3000);
	std::cout << "Led by Rikyar(Leader) Adriaan Helt, the new government has begin suppressing internal dissent and opposition through force\n";
	Sleep(3000);
	std::cout << "Their suppression of opposition has led to formation of rebel forces, leading to a protracted insurgency that has killed many and destroyed various villages\n";
	Sleep(3000);
	std::cout << "One day, a suppression mission by government forces leads to a village in the island's interior being destroyed\n";
	Sleep(3000);
	std::cout << "Only one person survived, he was Johan Heisenburg. Angered, he has vowed to punish the government and intends to do so by fighting with a militia.....\n";
}


void gameui::stats()
{
	std::cout << "Below are the stats of the units\n";
	std::cout << "from left to right, unit name, HP, attack, range, size, cost";
	getstats(HP, attack, range, cost, size);
}

void gameui::gamestart(gameui& player)
{
}

int gameui::getstats(int H, int a, int r, int c, int s)
{
	HP = H;
	attack = a;
	range = r;
	cost = c;
	size = s;
	std::cout << unitname << H << a << r << c << s;
	return 0;
}

