/*
Byte.h
David Gutierrez
Assignment 4 - Vectors
11/06/2024
*/


#include <iostream>
#include <string>
#include <vector>


#ifndef BYTE
#define BYTE

class Byte {
private:
	/*int bits[8];*/
    std::vector<int> bits;
	int bitsToInt();
public:
	void setValue(int value);
	int at(int index);
	std::string toString();
	int toInt();
	//constructors 
	void byte();
	// byte with int passed 
	void byte(int value);
	void byte(int ar[]);
	//operations
	int add(int num);
	Byte add(Byte num);
	int subtract(int num);
	Byte sub(Byte num);
	int multiply(int num);
	Byte mul(Byte num);
	int divide(int num);
	Byte div(Byte num);

	//testing 
	void printByte();

};




#endif #pragma once
