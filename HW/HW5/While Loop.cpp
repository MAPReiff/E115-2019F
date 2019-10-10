// While Loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//I pledge my honor that I have abided by the Stevens Honor System

#include <iostream>
using namespace std;

int main()
{

	float input = 0.0;
	float lowest = 0.0;
	float largest = 0.0;
	float sum = 0.0;
	int runTimes = 0;

	cout << "Please enter a number and press enter. When done, please enter -1 to end the input" << endl;

	while (input != -1) {
		cin >> input;

		if (input != -1) {

			if (runTimes == 0) {
				lowest = input;
				largest = input;
			}
			else {

				if (input > largest) {
					largest = input;
				}

				if (input < lowest) {
					lowest = input;
				}

			}

			sum += input; //sum = sum + input
			runTimes++;
		}

	}

	if (runTimes == 0) {
		cout << "No valid numbers were given!" << endl;
	}
	else {
		cout << "The sum of all of the floats is " << sum << endl;
		cout << "The largest float entered was " << largest << endl;
		cout << "The smallest float entered was " << lowest << endl;
	}

	
	return 0;

}

