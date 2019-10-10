// Homework 4 - Grade Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
// I pledge my honor that I have abided by the Stevens Honor System.

#include <iostream>

using namespace std;

int main()
{

	int opt = 0;
	cout << "Please enter 1 for the regular HW or enter 2 for the Check Plus assignment." << endl;
	cin >> opt;

	if (opt == 1) {

		float hw1 = 0.0;
		float hw2 = 0.0;
		float hw3 = 0.0;
		float hw4 = 0.0;
		float hw5 = 0.0;
		float hw6 = 0.0;
		float hwAverage = 0.0;

		float midterm1 = 0.0;
		float midterm2 = 0.0;
		float midtermAverage = 0.0;

		float final = 0.0;

		float average = 0.0;


		cout << "Welcome to the E115 grade caclulator.\nTo get started, please tell me what numerical score you got on HW1.\nIf you did not hand it in, please report your score as 0." << endl;
		cin >> hw1;
		cout << "Please tell me what numerical score you got on HW2" << endl;
		cin >> hw2;
		cout << "Please tell me what numerical score you got on HW3" << endl;
		cin >> hw3;
		cout << "Please tell me what numerical score you got on HW4" << endl;
		cin >> hw4;
		cout << "Please tell me what numerical score you got on HW5" << endl;
		cin >> hw5;
		cout << "Please tell me what numerical score you got on HW6" << endl;
		cin >> hw6;

		hwAverage = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6) / 6;


		cout << endl << endl << endl << endl;

		cout << "Please tell me what numerical score you got on the first midterm" << endl;
		cin >> midterm1;
		cout << "Please tell me what numerical score you got on the second midterm" << endl;
		cin >> midterm2;

		midtermAverage = (midterm1 + midterm2) / 2;


		cout << endl << endl << endl << endl;

		cout << "Finally, please tell me what numerical score you got on the final" << endl;
		cin >> final;


		//HW is 40%, Midterms are 40%, Final is 20%

		average = (0.4 * hwAverage) + (0.4 * midtermAverage) + (0.2 * final);

		//91-100 is an A, 81-90 is a B, 71-80 is a C, under 71 is a D (I added under 65 as an F)

		cout << endl << endl << endl << endl;


		if (average > 100) { //over 100 => extra credit
			cout << "Your final grade is " << average << "! Thats an A+++++!";
		}
		else if (average >= 91 && average <= 100) { //score range of 91-100 is an A
			cout << "Your final grade is " << average << "! Thats an A!";
		}
		else if (average >= 81 && average <= 90) { //score range of 81-90 is a B
			cout << "Your final grade is " << average << "! Thats a B!";
		}
		else if (average >= 71 && average <= 80) {  //score range of 71-80 is a C
			cout << "Your final grade is " << average << "! Thats a C!";
		}
		else if (average >= 65 && average <= 70) { //score range of 65-71 is a D
			cout << "Your final grade is " << average << "! Thats a D!";
		}
		else if (average < 65) { //score of under 65 is an F and they must repeat the class.
			cout << "Your final grade is " << average << "! See you again next semester ;)";
		}

		return(1);

	}

	else if (opt == 2) {

		cout << "Welcome to the grade calculator, please enter the number of HW assignments you have had this semester as an int, up to 100." << endl;
		int hwNum = 0;
		cin >> hwNum;
		float hw[100] = {}; //why cant we make arrays using a length var?
		float hwAv = 0.0;
		float hwWorth = 0.0;

		cout << "Please enter the number of midterms you have had this semester as an int, up to 100;" << endl;
		int midNum = 0;
		cin >> midNum;
		float mid[100] = {};
		float midAv = 0.0;
		float midWorth = 0.0;

		cout << "Please enter the number of finals you have had this semester as an int, up to 100." << endl;
		int finNum = 0;
		cin >> finNum;
		float fin[100] = {};
		float finAv = 0.0;
		float finWorth = 0.0;

		//HW
		if (hwNum > 100) {
			cout << "You have more than 100 assignments?! Shutting down" << endl;
			return(1);
		}
		else if (hwNum <= 0) {
			hwAv = 0.0;
			hwWorth = 0.0;
		}
		else if (0 > hwNum > 100) {
			cout << "How much of your grade is HW worth from 0-100?" << endl;
			cin >> hwWorth;

			for (int i = 0; i < hwNum; i++) {
				cout << "Please tell me what numerical score you recived on HW #" << i + 1 << endl;
				cin >> hw[i];
			}

			//had to look up a different way of doing a for loop to make it work with the array. https://stackoverflow.com/questions/20234898/correct-way-of-loop-through-the-c-arrays
			for (unsigned int o = 0; o < sizeof(hwNum); o++) {
				hwAv = hwAv + hw[o];
			}

			hwAv = hwAv / hwNum;

		}

		//Midterm
		if (midNum > 100) {
			cout << "You have more than 100 midterms?! Shutting down" << endl;
			return(1);
		}
		else if (midNum <= 0) {
			midAv = 0.0;
			midWorth = 0.0;
		}
		else if (0 > midNum > 100) {
			cout << "How much of your grade are midterms worth from 0-100?" << endl;
			cin >> midWorth;

			for (int i = 0; i < midNum; i++) {
				cout << "Please tell me what numerical score you recived on midterm #" << i + 1 << endl;
				cin >> mid[i];
			}

			for (unsigned int p = 0; p < sizeof(midNum); p++) {
				midAv = midAv + mid[p];
			}

			midAv = midAv / midNum;

		}

		//Final

		if (finNum > 100) {
			cout << "You have more than 100 finals?! Shutting down" << endl;
			return(1);
		}
		else if (finNum <= 0) {
			finAv = 0.0;
			finWorth = 0.0;
		}
		else if (0 > finNum > 100) {
			cout << "How much of your grade are finals worth from 0-100?" << endl;
			cin >> finWorth;

			for (int i = 0; i < finNum; i++) {
				cout << "Please tell me what numerical score you recived on final #" << i + 1 << endl;
				cin >> fin[i];
			}

			for (unsigned int q = 0; q < sizeof(finNum); q++) {
				finAv = finAv + fin[q];
			}

			finAv = finAv / finNum;

		}






	}

	else {
		cout << "You did not enter a valid option. Please restart the program and try again.!" << endl;
	}








}

