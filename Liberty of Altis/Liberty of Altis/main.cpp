#include <iostream>
#include <windows.h>
#include "map.h"
#include "mapmain1.h"
#include "mapmain2.h"
#include "mapmain3.h"
#include "mapmain4.h"
#include "mapmain5.h"
#include "Position.h"
#include "environmentalObjs.h"

int main()
{
    mapmain1 test;    // Create an instance of mapmain1
    test.drawmap();   // Call the drawmap method

    return 0;

	AlliedTroops Player;

	char input;

	while (true) {
		std::cin >> input;
		Player.Movement(input);
	}
}
