/*
 * StringInput.cpp
 *
 *  Created on: Aug 23, 2024
 *      Author: paypa
 */
#include<iostream>
#include<cstring>

using std::cout;
using std::endl;
using namespace std;

int main() {
	string firstString;
	string secondString;
	string fullString;

	cout<<"Please input your first string."<<endl;
	cin >> firstString;
	cout<<"Please input your second string."<<endl;
	cin >> secondString;
	fullString = firstString.append(secondString);
	cout<<fullString<<endl;

}

