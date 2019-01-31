/*
Name: Filip Serwinski
Institution: UIC, Spring 2019
Class: CS474
Assignment: Homework 1
*/

#include <iostream>
#include <vector>
#include "Person.h"
  
using namespace std;


int main() {

	vector<Person> people;

	// 1
	cout << Person::totalPopulation() << endl;
	
	// 2
	cout << Person::className << endl;

	// 3
	people.push_back(Person("Ada", "Lovelace"));

	// 4
	for (auto e: people) {
		e.sayName();
	}

	//5
	cout << Person::totalPopulation() << endl;
	
	// 6
	Person::className = "Homo Sapiens";

	// 7
	people.push_back(Person("Alan", "Turing"));

	// 8
	for (auto e : people) {
		e.sayName();
	}
	// 9
	cout << Person::totalPopulation() << endl;

	// 10
	cout << Person::className << endl;

	// 11
	Person *p1 = new Person("Lynn", "Conway");

	// 12
	p1->sayName();

	// 13
	cout << Person::totalPopulation() << endl;

	// 14
	delete p1;

	// 15
	cout << Person::totalPopulation() << endl;

	//int end;
	//cin >> end;
	return 0;
}