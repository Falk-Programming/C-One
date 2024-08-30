/*
 * CriticalThinking3C++.cpp
 *
 *  Created on: Aug 30, 2024
 *      Author: paypa
 */
#include<iostream>

using std::cout;
using std::endl;
using namespace std;

int main(){

	int firstVariable;
	int secondVariable;
	int thirdVariable;
	cout<<"Hello! Please enter three integers when prompted."<<endl;
	cout<<"Please enter the first integer: "<<endl;
	cin>>firstVariable;
	cout<<"Please enter the second integer: "<<endl;
	cin>>secondVariable;
	cout<<"Please enter the third integer: "<<endl;
	cin>>thirdVariable;

	//Creation and memory allocation.
	int *pfirstVariable;
	pfirstVariable = new int;
	int *psecondVariable;
	psecondVariable = new int;
	int *pthirdVariable;
	pthirdVariable = new int;

	pfirstVariable = &firstVariable;
	psecondVariable = &secondVariable;
	pthirdVariable = &thirdVariable;

	//Outputting memory location.
	cout<<"Here are the memory locations of the integers in order:"<<endl;
	cout<<pfirstVariable<<endl;
	cout<<psecondVariable<<endl;
	cout<<pthirdVariable<<endl;
	cout<<endl;

	//Outputting value stored.
	cout<<"Here are the integers stored in each variable:"<<endl;
	cout<<*pfirstVariable<<endl;
	cout<<*psecondVariable<<endl;
	cout<<*pthirdVariable<<endl;

	//Deleting from memory.
	delete pfirstVariable;
	delete psecondVariable;
	delete pthirdVariable;

}



