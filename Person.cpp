/*
Name: Filip Serwinski
Institution: UIC, Spring 2019
Class: CS474
Assignment: Homework 1
*/

#include <string>
#include <iostream>

#include "Person.h"

using namespace std;

// Make the population start with 0
int Person::population = 0;

string Person::className = "Person";

int Person::totalPopulation()
{
	return population;
}

// Prints out first and last name
void Person::sayName()
{
	cout << fName << " " << lName << endl;
}

// Default constructor
Person::Person()
{
	population++;
}

// Parameterized constructor
Person::Person(string firstname, string lastname)
{
	fName = firstname;
	lName = lastname;
	population++;
}

// Copy constructor
Person::Person(const Person& p)
{
	fName = p.fName;
	lName= p.lName;
	population++;
}

// Copy assignment
Person& Person::operator=(Person& p)
{
	fName = p.fName;
	lName = p.lName;
	return *this;
}

// Move constructor
Person::Person(const Person&& p)
{
	fName = p.fName;
	lName = p.lName;

	population++;
}

// Move assignment
Person& Person::operator=(Person&& p)
{
	return *this;
}

Person::~Person()
{
	population--;
}
