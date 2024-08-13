#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
	COORD srcn;
	HANDLE userhandle = GetStdHandle(STD_OUTPUT_HANDLE);
	srcn.X = x; srcn.Y = y;
	SetConsoleCursorPosition(userhandle, srcn);
}

int main()
{
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 18; j++)
		{
			gotoxy(i * 2, j);
			cout << "*";
		}
	}
}

	AlliedTroops Player;

	char input;

	while (true) {
		std::cin >> input;
		Player.Movement(input);
	}
