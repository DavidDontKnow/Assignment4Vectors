/*
Byte.cpp
David Gutierrez
Assignment 4 - Vectors
11/06/2024
*/


#include <iostream>
#include <sstream>
#include "byte.h"
#include <cmath>

using namespace std;

void Byte::setValue(int value) {
	//loop through bits and set value 
	for (int i = 0; i < 8; i++) {
		bits.push_back(value % 2);
		value /= 2;
	}
}

string Byte::toString() {
	stringstream byteString;
	//loop through bits and add to string
	for (int i = 7; i >= 0; i--) {
		byteString << bits.at(i);
	}

	return byteString.str();
}

int Byte::toInt() {
	return bitsToInt();
}

int Byte::bitsToInt() {
	int value = 0;
	//loop through bits and add to value
	for (int i = 0; i < 8; i++) {
		value += bits.at(i) * pow(2, i);
	}
	return value;
}

int Byte::at(int index) {
	if (index < 0 || index > 7) {
		return -1;
	}
	return bits.at(index);
}

//constructors
void Byte::byte() {
	byte(0);
}

void Byte::byte(int value) {
	setValue(value);
}

void Byte::byte(int ar[8]) {
	//check if array is 8 elements
	if (sizeof(ar) != 8) {
		cout << "Array must be 8 elements" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < 8; i++) {
			if (ar[i] != 0 && ar[i] != 1) {
				bits[i] = 0;
			}
			else
			{
				bits[i] = ar[i];
			}
		}
		setValue(bitsToInt());
	}
}

//operations
int Byte::add(int num) {
	int temp = bitsToInt();
	temp += num;
	setValue(temp);
	return bitsToInt();
}

int Byte::subtract(int num) {
	int temp = bitsToInt();
	temp -= num;
	setValue(temp);
	return bitsToInt();
}

int Byte::multiply(int num) {
	int temp = bitsToInt();
	temp *= num;
	setValue(temp);
	return bitsToInt();
}

int Byte::divide(int num) {
	int temp = bitsToInt();
	temp /= num;
	setValue(temp);
	return bitsToInt();
}

Byte Byte::add(Byte b) {
	int temp = bitsToInt();
	temp += b.toInt();
	Byte tempByte;
	tempByte.byte(temp);
	return tempByte;
}

Byte Byte::sub(Byte b) {
	int temp = bitsToInt();
	temp -= b.toInt();
	Byte tempByte;
	tempByte.byte(temp);
	return tempByte;
}

Byte Byte::mul(Byte b) {
	int temp = bitsToInt();
	temp *= b.toInt();
	Byte tempByte;
	tempByte.byte(temp);
	return tempByte;
}

Byte Byte::div(Byte b) {
	int temp = bitsToInt();
	temp /= b.toInt();
	Byte tempByte;
	tempByte.byte(temp);
	return tempByte;
}


//testing
void Byte::printByte() {
	cout << "Byte: " << toString() << endl;
	cout << "Byte Int: " << toInt() << endl;
	cout << endl;
}