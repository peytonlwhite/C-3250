/*
Name: Peyton White
Class: CSCI 3250
Assignment: Programming Assignment 1
Date: 2/5/18
*/

/*
Name: Peyton White
Class: CSCI 3250
Assignment: Programming Assignment 3
Date: 2/15/18
*/

#ifndef WIZARD_H
#define WIZARD_H
#include <string>
#include <fstream>
#include <stdexcept>

class Wizard
{
public:
	std::string Name;
	int Age;
	std::string Type;

	// Methods
	Wizard();
	std::string getName();
	std::string getType();

	int getAge();

	friend std::ostream& operator <<(std::ostream& os, Wizard& w);








};
#endif
