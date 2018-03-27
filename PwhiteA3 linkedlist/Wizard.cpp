/*
Name: Peyton White
Class: CSCI 3250
Assignment: Programming Assignment 3
Date: 2/15/18
*/

#include "Wizard.h"

Wizard::Wizard()
{
	// constructor assigns each var 

	Name = "";
	int Age = 0;
	Type = "";
	if (Age < 0)
	{
		throw std::logic_error("Age can not be negative");
	}

}

std::string Wizard::getName()
{
	// returns name to cout the name
	return Name;
}
std::string Wizard::getType()
{
	// returns the type to output the type
	return Type;
}
int Wizard::getAge()
{
	// returns the age to outputs the age
	return Age;
}
std::ostream& operator <<(std::ostream& os, Wizard& w)
{
	// this function uses ostream and acts as a file copier wit the overload operator << and returns the modified object
	os << "Name of Wizard: " << w.Name << std::endl;
	os << "Type of Wizard: " << w.Type << std::endl;
	os << "Age of Wizard: " << w.Age << std::endl;

	return os;
}
