// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> //required for console commands
#include <cstdlib> //required for generating random numbers
#include <ctime>  //required for gettting system time

using namespace std; //used to allow std::cout & std::cin to be replaced with cin and cout


int Human(int loc)
{

	int count = 0;
	int search = 0;

	bool found = false;

	cout << "Welcome to War Games you will be competing against skynet.\n";
	cout << "Enter a grid location between 1-64 to begin your search:\n\n";

	while (found == false)
	{
		cin >> search;
		count++;

		if (search > loc)
		{
			cout << "Too High - Search lower Region.\n";
		}
		else if (search < loc)
		{
			cout << "Too Low - Search higher Region.\n";
		}
		else if (search == loc)
		{
			cout << "Target found!\n\n";
			found = true;
		}
		
	}
	cout << "Enemy located in " << count << " attempts\n";
	cout << "\nPress Enter to continue.\n";
	cin.get();
//	Menu(0);
	return 0;
}
int Binary(int loc)
{

	int number = rand() % 64 + 1;
	int count = 0;
	int search;
	int high = 64;
	int low = 1;

	bool found = false;

	cout << "Skynet Activated.\n";

	while (found == false)
	{
		search = ((high - low) / 2) + low;
		count++;

		if (search > loc)
		{
			high = search - 1;

		}
		else if (search < loc)
		{
			low = search + 1;

		}
		else if (search == loc)
		{
			cout << "Target Located at " << loc << ".  " << count << " units were searched.\n\n";
			found = true;
		}
		else
		{
			found = true;
//			Menu(0);
		}
	}
	return 0;
}
int Linear(int loc)
{

	int number = rand() % 64 + 1;
	int count = 0;
	int search = 0;



	cout << "\nPerforming linear grid search:\n\n";
	cout << "\nPress Enter to continue.\n";
	cin.get();
	do
	{
		search++;
	} while (search != loc);
	cout << "\nNumber of attempts\n" << search;


	cout << "\nPress Enter to continue.\n";
	cin.get();
//	Menu(0);
	return 0;
}
int Random(int loc)
{

	int count = 0;
	int max = 64;
	int min= 1;
	int number = rand() % 64 + 1;

	
	cout << "Begin Random search:\n\n";
	do
	{
		number = rand() % 64 + 1;
		count++;

	} while (number != loc);
	cout << "Number of Attempts to locate enemy\n" << count;
	cout << "\nPress Enter to continue.\n";
	cin.get();
//	Menu(0);
	return 0;
}

int main()
{
	srand(time(0)); //seeding random number generator
	int location = rand() % 64 + 1; //Generate a Random Number between 1 & 64 as location

	Human(location);
	Binary(location);
	Linear(location);
	Random(location);


/*
	char menu_select;

	cout << "===========================================================================\n";
	cout << "|             Welcome to Skynet Search Program                            |\n"; 
	cout << "|               Please enter a Selection below                            |\n";
	cout << "===========================================================================\n";
	cout << "|1. Select Manual Human Search                                            |\n";
	cout << "|2. Select Superior Skynet Binary Search Protocol                         |\n";
	cout << "|3. Select Linear Search Pattern                                          |\n";
	cout << "|4. Select a random search pattern                                        |\n";
	cout << "===========================================================================\n";
	cin >> menu_select;

	switch(menu_select)
	{ 
	case(1):Human(location);
	case(2):Binary(location);
	case(3):Linear(location);
	case(4):Random(location);
	default: cout << "Invalid Selection";
	}
*/



	return 0;
}
/*
int Menu(int loc)
{
	
	char menu_select;

	cout << "===========================================================================\n";
	cout << "|             Welcome to Skynet Search Program                            |\n";
	cout << "|               Please enter a Selection below                            |\n";
	cout << "===========================================================================\n";
	cout << "|1. Select Manual Human Search                                            |\n";
	cout << "|2. Select Superior Skynet Binary Search Protocol                         |\n";
	cout << "|3. Select Linear Search Pattern                                          |\n";
	cout << "|4. Select a random search pattern                                        |\n";
	cout << "===========================================================================\n";
	cin >> menu_select;

	switch (menu_select)
	{
	case(1):Human(loc);
	case(2):Binary(loc);
	case(3):Linear(loc);
	case(4):Random(loc);
	default: cout << "Invalid Selection";
	}
}
*/