//I pledge my honor that I have abided by the Stevens Honor System
#include <iostream>
#include <iomanip>
#include <cmath>


	using namespace std;

	int main() {

		//declare vars
		int num1;
		int num2;

		//ask user for number inputs
		cout << "Give me an int!" << endl;
		cin >> num1;
		cout << "Great! Give me a second int!" << endl;
		cin >> num2;

		//addition
		double sum = num1 + num2;

		//subtraction
		double sub = num1 - num2;

		//multiply
		double mult = num1 * num2;

		//divide
		double div = num1 / num2;

		//sin
		double sin1 = sin(num1);
		double sin2 = sin(num2);

		//cos
		double cos1 = cos(num1);
		double cos2 = cos(num2);

		//tan
		double tan1 = tan(num1);
		double tan2 = tan(num2);
		
		/*
		
		Commented out arcsin and arccos as it woudl only work with values of -1<x<1

		//arcsin
		double arcsin1 = asin(num1);
		double arcsin2 = asin(num2);

		//arccos
		double arccos1 = acos(num1);
		double arccos2 = acos(num2); */

		//arctan
		double arctan1 = atan(num1);
		double arctan2 = atan(num2); 

		cout << "You entered " << num1 << " & " << num2 << endl;
		cout << "The sum of your numbers is " << sum << endl;
		cout << "The difference of your numbers is " << sub << endl;
		cout << "The product of your numbers is " << mult << endl;
		cout << "The quotient of your numbers is " << div << endl;
		cout << "The sin of your first number is " << sin1 << " and sin of your second number is " << sin2 << endl;
		cout << "The cos of your first number is " << cos1 << " and cos of your second number is " << cos2 << endl;
		cout << "The tan of your first number is " << tan1 << " and tan of your second number is " << tan2 << endl;
		//cout << "The arcsin of your first number is " << arcsin1 << " and arcsin of your second number is " << arcsin2 << endl;
		//cout << "The arccos of your first number is " << arccos1 << " and arccos of your second number is " << arccos2 << endl;
		cout << "The arctan of your first number is " << arctan1 << " and arctan of your second number is " << arctan2 << endl;








	}
