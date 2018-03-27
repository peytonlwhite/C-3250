/*
Name: Peyton White
Class: CSCI 3250
Assignment: Programming Assignment 1
Date: 2/5/18
*/

#include "Fellowship.h"
#include <iostream>

void Fellowship::addWizard(const Wizard& ob)
{
	//addiwzard calls push back on the vector and adds to the vector
	mFellowship.push_back(ob);

}
std::ostream& operator<<(std::ostream& os, Fellowship& f)
{
	// this operator overloader tells the program to use << as a transfer method 

	for (int i = 0; i < f.getCount();i++)
	{
		os << f.mFellowship[i];

	}
	return os;
}

int Fellowship::getCount()
{
	// get cout simply calls the .size and returns the size;

	std::cout << mFellowship.size();																//Note: trouble return would not work. had to cout instead of return
	return mFellowship.size();
	std::cout << "\n";
}

const Wizard* Fellowship::findwizard(const std::string& type)
{
	// this pointer function points to fellowship vector and searches through all the wizards and finds the first type the user wants
	for (int i = 0; i < mFellowship.size(); i++)
	{
		if (mFellowship[i].getType() == type)
		{
			std::cout << mFellowship[i];
			return &mFellowship[i];
		}
		else
			std::cout << "Sorry That Wizard type was not found";
	}

	return 0;
}

void Fellowship::Displaywizards(Fellowship Wiz)
{
	// simply displays wizards  using a for loop and a vector object
	for (int i = 0; i < Wiz.mFellowship.size(); i++)
	{
		std::cout << Wiz.mFellowship[i] << std::endl;
	}
}


int Fellowship::getAssignmentCount()
{
	std::cout << mFellowship.getAssignmentCount();
	return mFellowship.getAssignmentCount();
}



