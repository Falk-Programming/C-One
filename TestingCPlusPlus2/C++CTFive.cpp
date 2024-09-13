/*
 * C++CTFive.cpp
 *
 *  Created on: Sep 12, 2024
 *      Author: paypa
 */
#include<iostream>
#include<fstream>
#include<string>
#include <algorithm>

using std::cout;
using std::endl;
using namespace std;

void reverseText(){
	string firstText;
	string secondText;
	string thirdText;
	string fourthText;
	string fifthText;
	string sixthText;

	ifstream firstFile("CSC450_CT5_mod5.txt");

	std::getline(firstFile, firstText);
	std::getline(firstFile, secondText);
	std::getline(firstFile, thirdText);
	std::getline(firstFile, fourthText);
	std::getline(firstFile, fifthText);
	std::getline(firstFile, sixthText);
	firstFile.close();
	ofstream textFile ("CSC450-mod5-reverse.txt", std::ios::out|std::ios::app);
				if(textFile.is_open()){
				reverse(firstText.begin(), firstText.end());
				reverse(secondText.begin(), secondText.end());
				reverse(thirdText.begin(), thirdText.end());
				reverse(fourthText.begin(), fourthText.end());
				reverse(fifthText.begin(), fifthText.end());
				reverse(sixthText.begin(), sixthText.end());

				textFile<<sixthText<<" "<<fifthText<<" "<<fourthText<<" "<<thirdText<<" "<<secondText<<" "<<firstText;


				textFile.close();
				}
				else{
					cout<<"The file was unable to be opened, please try again.";
				}









}
int main(){
	ofstream textFile ("CSC450_CT5_mod5.txt", std::ios::out|std::ios::app);
	if(textFile.is_open()){
		string userString1;
		string userString2;
		string userString3;
		string userString4;
		string userString5;
		string userString6;
		cout<<"Hello, please input a string that you would like to write to the file."<<endl;

		//I was only able to make this work by having a set number of words within the input.
		cin>>userString1>>userString2>>userString3>>userString4>>userString5>>userString6;
		textFile<<userString1<<" "<<userString2<<" "<<userString3<<" "<<userString4<<" "<<userString5<<" "<<userString6;
		textFile.close();
		reverseText();

	}
	else{
		cout<<"The file was unable to be opened, please try again.";
	}

}





