/*
Name: Peyton White
Class: CSCI 3250
Assignment: Programming Assignment 1
Date: 2/5/18
*/
#include <iostream>
#include <string>
#include "Fellowship.h"

void displayMenu();
int main()
{

	displayMenu();














	system("pause");
	return 0;
}
void displayMenu()
{
	// this function diplays the menu and allows the user to put in choice and call each funtion of the Wrapper class fellow ship 

	Wizard w;
	Fellowship f;
	vector<Wizard> v;

	int choice;
	std::string type;
	std::cout << "Hello welcome to Peyton White's Wizard Program \n" << "\n";
	do
	{
		std::cout << "\n";
		std::cout << "Pick a choice of what you would like to do \n" << "\n";
		std::cout << "Press 1: to addWizard \n";
		std::cout << "Press 2: to get the count of the Wizards \n";
		std::cout << "Press 3: to find a certain wizard through a type \n";
		std::cout << "Press 4: to display all the wizards \n";
		std::cout << "Press 5: to display assignment count \n";
		std::cout << "Press -1: to quit application" << "\n";
		std::cout << "Your choice is: ";
		std::cin >> choice;
		std::cout << "\n";

		switch (choice)
		{
		case 1: std::cout << "What is the name of the Wizard: ";
			std::cin >> w.Name;
			std::cout << "How old is " << w.Name << ": ";
			std::cin >> w.Age;
			std::cout << "What is the Type of " << w.Name << ": ";
			std::cin >> w.Type;
			std::cout << "How many times do you want to add this wizard: ";
			std::cin >> choice;
			for (int i = 0; i < choice; i++)
			{
				f.addWizard(Wizard(w));
			}
			break;
		case 2: std::cout << "The count of Wizards is: " << "\n";
			f.getCount();
			std::cout << "\n";
			break;
		case 3: std::cout << "What type of Wizard would you like to find: ";
			std::cin >> type;
			f.findwizard(type);
			break;
		case 4: std::cout << "All the Wizards are: " << "\n";
			f.Displaywizards(f);
			break;
		case 5: std::cout << "The assignment count is: ";
			f.getAssignmentCount();
			break;
		case -1: std::cout << "Thank you for using my Wizard Program \n";
			break;
		}
	} while (choice != -1);
}

