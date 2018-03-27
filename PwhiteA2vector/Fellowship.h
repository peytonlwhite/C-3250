/*
Name: Peyton White
Class: CSCI 3250
Assignment: Programming Assignment 1
Date: 2/5/18
*/

#include "Wizard.h"
#include <fstream>
#include <stdexcept>
#include "Vector.hpp"
class Fellowship
{


public:
	vector<Wizard> mFellowship;

	void Displaywizards(Fellowship Wiz);
	void addWizard(const Wizard& w);
	int getAssignmentCount();
	int getCount();

	friend std::ostream& operator<<(std::ostream& os, const Fellowship& f);

	const Wizard* findwizard(const std::string& type);




private:





};
