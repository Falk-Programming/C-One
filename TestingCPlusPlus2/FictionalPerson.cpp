/*
 * FictionalPerson.cpp
 *
 *  Created on: Aug 16, 2024
 *      Author: paypa
 */

#include <iostream>

using std::cout;
using std::endl;
using namespace std;



void printInfo(string firstName, string lastName, string address, string city, int zip){

	cout<<firstName<<endl;
	cout<<lastName<<endl;
	cout<<address<<endl;
	cout<<city<<endl;
	cout<<zip<<endl;

}


int main(){

	string firstName = "Robert";
	string lastName = "Smith";
	string streetAddress = "1234 Road";
	string city = "Chicago";
	int zipCode = 41782;

	printInfo(firstName, lastName, streetAddress, city, zipCode);

	return 1;

}

