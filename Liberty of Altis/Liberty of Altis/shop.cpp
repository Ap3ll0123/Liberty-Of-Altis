#include "shop.h"

void shop::cashearned(int Cash)
{
	cash = Cash + cash;

}
void shop::cashlost(int Cash) {
	cash = cash - Cash;
}

void shop::shopping()
{
	
	while (allen == false) {
		int hello;
	
		std::cout << "Below you can purchase needed units for your missions\n";
		std::cout << "1. Rifleman, 2.Machinegunner, 3.Grenaider, 4. Mortarman, 5. Artillery, 6.Tank, 7.IFV\n";
		std::cout << "please choose which unit to purchase: ";
		std::cin >> unitbuy;
		if (unitbuy == 1) {
			price = 5;
			std::cout << "you are purchasing rifleman!\n";
			std::cout << "it will cost 5 cash!\n";
			std::cout << "how many you want to purchase?: ";
			std::cin >> unitnum;
			if (cash >= (price * unitnum)) {
				cash = cash - (price * unitnum);
				std::cout << "you have " << cash << " left\n";
				std::cout << "you have purchased " << unitnum << " rifleman!\n";

			}
			else if (cash < (price * unitnum)) {
				std::cout << "you don't have enough cash! get more then come back";
			}
			std::cout << "do you want to buy more stuff?:(1 is yes/2 is no) ";
			std::cin >> hello;
			if (hello == 1) {
				shopping();
			}
			else if (hello == 2) {
				allen = true;

			}
		}

		if (unitbuy == 2) {
			price = 7;
			std::cout << "you are purchasing machinegunner!\n";
			std::cout << "it will cost" << price << "cash\n";
			std::cout << "how many you want to purchase?: ";
			std::cin >> unitnum;
			if (cash >= (price * unitnum)) {
				cash = cash - (price * unitnum);
				std::cout << "you have " << cash  << " left\n";
				std::cout << "you have purchased " << unitnum << " Machinegunners";
			}
			else if (cash < (price * unitnum)) {
				std::cout << "you don't have enough cash! get more then come back";
			}
			std::cout << "do you want to buy more stuff?:(1 is yes/2 is no) ";
			std::cin >> hello;
			if (hello == 1) {
				shopping();
			}
			else if (hello == 2) {
				allen = true;

			}
		}
		if (unitbuy == 3) {
			price = 6;
			std::cout << "you are purchasing Grenaiders!\n";
			std::cout << "it will cost" << price << "cash\n";
			std::cout << "how many you want to purchase?: ";
			std::cin >> unitnum;
			if (cash >= (price * unitnum)) {
				cash = cash - (price * unitnum);
				std::cout << "you have " << cash  << " left\n";
				std::cout << "you have purchased " << unitnum << " Grenaiders";
			}
			else if (cash < (price * unitnum)) {
				std::cout << "you don't have enough cash! get more then come back";
			}
			std::cout << "do you want to buy more stuff?:(1 is yes/2 is no) ";
			std::cin >> hello;
			if (hello == 1) {
				shopping();
			}
			else if (hello == 2) {
				allen = true;

			}
		}
		if (unitbuy == 4) {
			price = 6;
			std::cout << "you are purchasing Mortarman!\n";
			std::cout << "it will cost" << price << "cash\n";
			std::cout << "how many you want to purchase?: ";
			std::cin >> unitnum;
			if (cash >= (price * unitnum)) {
				cash = cash - (price * unitnum);
				std::cout << "you have " << cash  << " left\n";
				std::cout << "you have purchased " << unitnum << " Mortarman";
			}
			else if (cash < (price * unitnum)) {
				std::cout << "you don't have enough cash! get more then come back";
			}
			std::cout << "do you want to buy more stuff?:(1 is yes/2 is no) ";
			std::cin >> hello;
			if (hello == 1) {
				shopping();
			}
			else if (hello == 2) {
				allen = true;

			}
		}
		if (unitbuy == 5) {
			price = 15;
			std::cout << "you are purchasing Artillery!\n";
			std::cout << "it will cost" << price << "cash\n";
			std::cout << "how many you want to purchase?: ";
			std::cin >> unitnum;
			if (cash >= (price * unitnum)) {
				cash = cash - (price * unitnum);
				std::cout << "you have " << cash  << " left\n";;
				std::cout << "you have purchased " << unitnum << " Artillery";
			}
			else if (cash < (price * unitnum)) {
				std::cout << "you don't have enough cash! get more then come back";
			}
			std::cout << "do you want to buy more stuff?:(1 is yes/2 is no) ";
			std::cin >> hello;
			if (hello == 1) {
				shopping();
			}
			else if (hello == 2) {
				allen = true;

			}
		}
		if (unitbuy == 6) {
			price = 15;
			std::cout << "you are purchasing Tank!\n";
			std::cout << "it will cost" << price << "cash\n";
			std::cout << "how many you want to purchase?: ";
			std::cin >> unitnum;
			if (cash >= (price * unitnum)) {
				cash = cash - (price * unitnum);
				std::cout << "you have " << cash  << " left\n";
				std::cout << "you have purchased " << unitnum << " Tank";
			}
			else if (cash < (price * unitnum)) {
				std::cout << "you don't have enough cash! get more then come back";
			}
			std::cout << "do you want to buy more stuff?:(1 is yes/2 is no) ";
			std::cin >> hello;
			if (hello == 1) {
				shopping();
			}
			else if (hello == 2) {
				allen = true;

			}
		}
		if (unitbuy == 7) {
			price = 10;
			std::cout << "you are purchasing IFV\n";
			std::cout << "it will cost" << price << "cash\n";
			std::cout << "how many you want to purchase?: ";
			std::cin >> unitnum;
			if (cash >= (price * unitnum)) {
				cash = cash - (price * unitnum);
				std::cout << "you have " << cash  << " left\n";
				std::cout << "you have purchased " << unitnum << " IFV";
			}
			else if (cash < (price * unitnum)) {
				std::cout << "you don't have enough cash! get more then come back";
			}
			std::cout << "do you want to buy more stuff?:(1 is yes/2 is no) ";
			std::cin >> hello;
			if (hello == 1) {
				shopping();
			}
			else if (hello == 2) {
				allen = true;

			}
		}
	;
	}

}

void shop::pricing(int p)
{
	price = p;
}
