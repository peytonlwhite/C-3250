/*
Name: Peyton White
Class: CSCI 3250
Assignment: Programming Assignment 3
Date: 2/15/18
*/


#ifndef FELLOWSHIP_H
#define FELLOWSHIP_H
#include <fstream>
#include <stdexcept>
#include "LinkedList.hpp"
#include "Wizard.h"

class Fellowship
{


public:
	LinkedList<Wizard> mFellowship;

	void Displaywizards();
	void addWizard(const Wizard& w);
	int getCount();

	friend std::ostream& operator<<(std::ostream& os, const Fellowship& f);

	const Wizard* findwizard(const std::string& type);




private:





};
#endif