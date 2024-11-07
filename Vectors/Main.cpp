/*
Main.cpp
David Gutierrez
Assignment 4 - Vectors
10/27/2024
*/


#include <iostream>
#include <cstdlib>
#include "Menu.h"
#include "byte.h"
using namespace std;

int menu();

int main() {

	menu();

	return 0;
}


void createByte();
void add();
void sub();
void mul();
void div();
void Exit();

int menu() {
	Menu m;
	m.addMenu("1. Create Byte", createByte);
	m.addMenu("2. Add", add);
	m.addMenu("3. Subtract", sub);
	m.addMenu("4. Multiply", mul);
	m.addMenu("5. Divide", div);
	m.addMenu("6. Exit", Exit);

	m.runMenu();

	return 0;
}

void createByte() {
	cout << "please enter a number" << endl;
	int num;
	cin >> num;
	Byte b;
	b.byte(num);
	cout << "Byte: " << b.toString() << endl;
	cout << "Int: " << b.toInt() << endl;
	char c;
	cin >> c;
}

void add() {
	int val1, val2;
	cout << "Enter two whole numbers" << endl;
	cin >> val1 >> val2;
	Byte b1, b2, b3;
	b1.byte(val1);
	b2.byte(val2);
	cout << "Byte 1: " << b1.toString() << endl;
	cout << "Byte 2: " << b2.toString() << endl;
	b3 = b1.add(b2);
	cout << "Sum: " << b3.toString() << endl;
	cout << "Int: " << b3.toInt() << endl;
	char c;
	cin >> c;
}

void sub() {
	int val1, val2;
	cout << "Enter two whole numbers" << endl;
	cin >> val1 >> val2;
	Byte b1, b2, b3;
	b1.byte(val1);
	b2.byte(val2);
	cout << "Byte 1: " << b1.toString() << endl;
	cout << "Byte 2: " << b2.toString() << endl;
	b3 = b1.sub(b2);
	cout << "Difference: " << b3.toString() << endl;
	cout << "Int: " << b3.toInt() << endl;
	char c;
	cin >> c;
}

void mul() {
	int val1, val2;
	cout << "Enter two whole numbers" << endl;
	cin >> val1 >> val2;
	Byte b1, b2, b3;
	b1.byte(val1);
	b2.byte(val2);
	cout << "Byte 1: " << b1.toString() << endl;
	cout << "Byte 2: " << b2.toString() << endl;
	b3 = b1.mul(b2);
	cout << "Product: " << b3.toString() << endl;
	cout << "Int: " << b3.toInt() << endl;
	char c;
	cin >> c;
}

void div() {
	int val1, val2;
	cout << "Enter two whole numbers" << endl;
	cin >> val1 >> val2;
	Byte b1, b2, b3;
	b1.byte(val1);
	b2.byte(val2);
	cout << "Byte 1: " << b1.toString() << endl;
	cout << "Byte 2: " << b2.toString() << endl;
	b3 = b1.div(b2);
	cout << "Quotient: " << b3.toString() << endl;
	cout << "Int: " << b3.toInt() << endl;
	char c;
	cin >> c;
}

void Exit() {
	cout << "Goodbye!" << endl;
	exit(0);
}