// Homework 6 Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


void printGreeting() {
	cout << "Hello World!" << endl;
}

void divideNumbers(float x, float y) {


	if (y == 0) {
		cout << "Cannot divide by 0!" << endl;
	}
	else {
		float xy = x / y;
		cout << "Dividing " << x << " by " << y << " gives you " << xy << endl;
	}

}

int factorial(int num) {

	int fact;
	int n;
	int runs = 0;


	for (int i = 0; i < num; i++) {

		if (num == 0) {
			fact = 0;
		}
		else {
			if (runs == 0) {
				fact = num;
				runs++;
			}
			else {
				n = num - i;
				fact = fact * n;
			}

		}
	}

	return fact;
}

void fibonacci(int N) { //had to look up to get started, based on https://www.javatpoint.com/fibonacci-series-in-cpp

	int a = 0;
	int b = 1;
	int c;

	cout << a << " " << b << " "; //printing 0 and 1    
	for (int i = 2; i < N; ++i) //loop starts from 2 because 0 and 1 are already printed    
	{
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}

}


int main()
{

	printGreeting();

	float x, y;

	cout << "Please enter a X value: " << endl;
	cin >> x;

	cout << "Please enter a Y value: " << endl;
	cin >> y;

	divideNumbers(x, y);

	long double fNum;

	cout << "Please give me a number, and I will give you the factorial!" << endl;
	cin >> fNum;

	cout << "The factorial of " << fNum << " is: " << factorial(fNum) << endl;

	int fibNum;
	cout << "Please give me a number, and I will give you that many places in the Fibonaccci Series!" << endl;
	cin >> fibNum;

	fibonacci(fibNum);

}
