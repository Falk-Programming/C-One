/*
 * TestingDiscussion.cpp
 *
 *  Created on: Aug 29, 2024
 *      Author: paypa
 */

#include<iostream>

using std::cout;
using std::endl;
using namespace std;

int main(){

	string * pOperatorShowcase;
	string operatorShowcase = "If you can see this, then the dereference operator was used.";
	pOperatorShowcase = &operatorShowcase;

	cout<<&pOperatorShowcase<<endl;
	cout<<*pOperatorShowcase<<endl;



	return 0;
}


