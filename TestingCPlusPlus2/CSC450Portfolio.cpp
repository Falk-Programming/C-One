/*
 * CSC450Portfolio.cpp
 *
 *  Created on: Sep 27, 2024
 *      Author: paypa
 */

#include <iostream>
#include <thread>
using namespace std;
using std::cout;
using std::endl;



void countFrom(int number){
	int i = number;
	for(i = number; i > 0; i--){
		cout<<i<<endl;
	}
}

void countTo(int number){
	int i = 1;
	for(i = 1; i <= number; i++){
		cout<<i<<endl;
	}
}

int main(){

	countTo(20);
	thread up(countFrom);
	up.join();

	countFrom(20);
	thread down(countFrom);
	down.join();
}



