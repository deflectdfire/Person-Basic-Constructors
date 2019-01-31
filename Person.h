#pragma once
/*
Name: Filip Serwinski
Institution: UIC, Spring 2019
Class: CS474
Assignment: Homework 1
*/
#ifndef PERSON_H
#define PERSON_H
#include <string>


class Person{

	private:
	std::string fName;
	std::string lName;

	public:
	static std::string className; 
	static int population;

	// class Scope functions
	static int totalPopulation();
	void sayName();

	// Class Constructors and Destructor

	// Default constructor
	Person();

	// Paramaterized Constructor
	Person(std::string firstname, std::string lastname);

	// Copy Constructor
	Person(const Person& p);

	// Copy Assignment
	Person& operator =(Person& p);

	// Move Constructor
	Person(const Person&& p);

	// Move Assignment
	Person& operator=(Person&& p);

	// Destructor
	~Person();

};

#endif PERSON_H