/*
Name: Peyton White
Class: CSCI 3250
Assignment: Programming Assignment 3
Date: 2/15/18
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
		std::cout << "Press 5: to add a wizard to the beginning of the list \n";
		std::cout << "Press 6: to remove the first wizard in the list \n";
		std::cout << "Press 7: to remove the last wizard in the list \n";
		std::cout << "Press 8: to remove all wizards in the list \n";
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
			f.Displaywizards();
			break;
		case 5: std::cout << "You are adding a wizard to the beginning of the list \n";
			std::cout << "What is the name of the Wizard: ";
			std::cin >> w.Name;
			std::cout << "How old is " << w.Name << ": ";
			std::cin >> w.Age;
			std::cout << "What is the Type of " << w.Name << ": ";
			std::cin >> w.Type;
			f.mFellowship.push_front(Wizard(w));
			break;
		case 6: std::cout << "The front wizard has been removed press 4 to see";
			f.mFellowship.pop_front();
			break;
		case 7: std::cout << "The back wizard has been removed press 4 to see";
			f.mFellowship.pop_back();
			break;
		case 8: std::cout << "all the wizards have been removed press 4 see";
			f.mFellowship.~LinkedList();
			break;
		case -1: std::cout << "Thank you for using my Wizard Program \n";
			break;
		}
	} while (choice != -1);
}

