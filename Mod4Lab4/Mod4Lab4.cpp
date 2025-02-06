/*
Author        : Lloyd Ivester
Class         : CSI - 240 : Advanced Programming
Assignment    : Madule 4 Lab 4, Dynamic Array
Date Assigned : 6/2/2025
Due Date      : Due-Date and Time as 19/2/2025

Project Description : Creates a dynamic array based on user input and fills it with random numbers. The array is then sorted.

Certification of Authenticity :

I certify that this is entirely my own work, except where I have given
fully-documented references to the work of others. I understand the
definition and consequences of plagiarism and acknowledge that the assessor
of this assignment may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of
academic staff; and/or
- Communicate a copy of this assignment to a plagiarism checking
service (which may then retain a copy of this assignment on its
database for the purpose of future plagiarism checking)
*/

#include <iostream>
#include <random>
using namespace std;

int promptSize();
void populate(int size, int* ptr);
void display(int size, int* ptr);
void sort(int size, int* ptr);

int main()
{
	int size;

	size = promptSize();

	int* dataSet = new int[size]; //dynamic array
}

int promptSize()
{
	int size;
	bool validInput = false;

	while (!validInput)
	{
		cout << "Desired array size: ";
		cin >> size;
		if (size > 0)
		{
			validInput;
		}
	}

	return size;
}

void populate(int size, int* ptr)
{
	for (int i = 0; i <= size; i++)
	{

	}
}

void display(int size, int* ptr)
{

}

void sort(int size, int* ptr)
{

}