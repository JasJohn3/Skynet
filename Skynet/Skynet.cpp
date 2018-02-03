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

	cout << "Welcome to War Games.\n";
	cout << "Begin your search:\n\n";

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
	return 0;
}
int Binary(int loc)
{

	int number = rand() % 64 + 1;
	int count;
	int search;
	int high = 64;
	int low = 1;

	bool found = false;

	cout << "Welcome to War Games.\n";
	cout << "Begin your search:\n\n";

	while (found == false)
	{
		search = ((high - low) / 2) + low;
		count++;

		if (search > loc)
		{
			high = search - 1;
			//cout << "==========================================================================\n";
			//cout << "Target not found at " << search << ", initiating sonar ping\n";
			//cout << "Moving to new location\n\n";
		}
		else if (search < loc)
		{
			low = search + 1;
			//cout << "==========================================================================\n";
			//cout << "Target not found at " << search << ", initiating sonar ping\n";
			//cout << "Moving to new location\n\n";
		}
		else if (search == loc)
		{
			//cout << "===========================================================================\n";
			cout << "Target Located at " << loc << ".  " << count << " units were searched.\n\n";
			found = true;
		}
		else
		{
			//cout << "Critical error!\n";
			//cout << "Recover drone for diagnostics.\n\n";
			found = true;
			cout << "Press Enter to continue./n";
			cin.get();
		}
	}
	return 0;
}


int main()
{
	srand(time(0)); //seeding random number generator

	int location = rand() % 64 + 1; //Generate a Random Number between 1 & 64 as location
//	Human(location);
	Binary(location);



	return 0;
}

