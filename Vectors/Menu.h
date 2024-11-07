/*
Menu.h
David Gutierrez
Assignment 4 - Vectors
11/06/2024
*/

#ifndef MENU
#define MENU

#include <string>
#include <vector>

const int MAXCOUNT = 20;

struct menuItem
{
	void (*func)();
	std::string descript;
};

class Menu {
private:
	std::vector <menuItem> mi;
	void runSelction();
	
public:
	Menu();
	void addMenu(const std::string& desciption, void (*f)());
	void runMenu();
};


#endif 