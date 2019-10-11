// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//What does this function return? (void functions don't return anything)
//What is the namm of the function? (Can't be named main as there can only be one)
//What does the function need as input to operate?

void printThis() {
	cout << "Print This" << endl;
}

void add(int x, int y) {
	int sum = x + y;
	cout << "The sum of " << x << " and " << y << " is: " << sum << endl;
}

int multiply(int x, int y) { //not a void, is int. Thus, it can return something
	int result = x*y;
	return result;
}

int main()
{

	printThis();
	add(17, 22);

	int functionReturn;
	functionReturn = multiply(22, 7);
	cout << "Just cught thus from the multiply function: " << functionReturn << endl;

	int p, q;
	cout << "Give me a number" << endl;
	cin >> p;
	cout << "Give me a number" << endl;
	cin >> q;
	cout << "The product of " << p << " and " << q << " is: " << multiply(p,q) << endl;

	functionReturn = multiply(multiply(1, 2), multiply(2, 3));
	cout << "The product of (1*2) and (2*3) = " << functionReturn << endl;


	return 1;


}
