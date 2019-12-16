// Intro to c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Hero.h"

//Create a function that converts to a temperature from celcius to freedom units
void convert()
{
	float Fahrenheit;
	float celcius;
	std::cout << "Celcius to fahrenheit converter \n";
	std::cout << "";

	std::cin >> celcius;
	Fahrenheit = (celcius * 9 / 5) + 32;
	std::cout << Fahrenheit;
	std::cout << "\n";
	system("pause");
}

int AddArays(int aray1[3], int aray2[3])
{
	int added = 0;
	for (int i = 0; i < 3; i ++)
	{
		added += aray1[i];
		
	}

	for (int i = 0; i < 3; i ++)
	{
		added += aray2[i];
		
	}
	return added;
}

int main()
{


	/*int aray1[3] = {1, 1, 1};
	int aray2[3] = { 1, 1, 1 };
	std::cout << AddArays(aray1, aray2);*/
	/*convert();*/
	
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
