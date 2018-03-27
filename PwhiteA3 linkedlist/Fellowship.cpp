/*
Name: Peyton White
Class: CSCI 3250
Assignment: Programming Assignment 3
Date: 2/15/18
*/

#include "Fellowship.h"
#include <iostream>

void Fellowship::addWizard(const Wizard& ob)
{
	//addiwzard calls push back on the linked List and adds to the list
	mFellowship.push_back(ob);

}
 std::ostream& operator<<(std::ostream& os, Fellowship& f)
{
	// this operator overloader tells the program to use << as a transfer method 
	
	for (int i = 0; i < f.getCount();i++)
	{
		os << f.mFellowship.at(i);

	}
	return os;
}  

int Fellowship::getCount()
{
	// get cout simply calls the .size and returns the size;

	std::cout << mFellowship.size();																
	return mFellowship.size();
	std::cout << "\n";
}

const Wizard* Fellowship::findwizard(const std::string& type)
{
	
	// this pointer function points to fellowship vector and searches through all the wizards and finds the first type the user wants
	for (int i = 0; i < mFellowship.size(); i++)
	{
		if (mFellowship.at(i).getType() == type)
		{
			std::cout << mFellowship.at(i);
			return &mFellowship.at(i);
		}
		else
			std::cout << "Sorry That Wizard type was not found";
	}

	return 0;
}

void Fellowship::Displaywizards()
{
	// simply displays wizards  using a for loop and a vector object
	for (int i = 0; i < mFellowship.size(); i++)
	{
		std::cout << mFellowship.at(i) << std::endl;
	}
}





