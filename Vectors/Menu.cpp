/*
Menu.cpp
David Gutierrez
Assignment 4 - Vectors
11/06/2024
*/

#include <iostream>
using namespace std;
#include <cstdlib>
#include "Menu.h"

Menu::Menu()
{

}

void Menu::addMenu(const string& desciption, void (*f)()) {
	this->mi.push_back({ f, desciption });
}


void Menu::runMenu() {
	for (;;) {
		system("cls");
		for (const auto& item : mi) {
			cout << item.descript << endl;
		}
		runSelction();
	}
}

void Menu::runSelction() {
	int select;
	cin >> select;
	//run the function that was selected
	if (select > 0 && select <= mi.size())
		mi[select - 1].func();
}
