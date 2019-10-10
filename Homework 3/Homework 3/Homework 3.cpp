// I pledge my honor that I have abided by the Stevens Honor system.

#include <iostream>
#include <cmath>
#include <cstring>
#include <string>


using namespace std;

int main()
{
	int i1 = 0;
	int i2 = 0;

	float f1 = 0;
	float f2 = 0;

	string foo = "";
	string bar = "";

	//int
	cout << "Can you plase give me an integer?" << endl;
	cin >> i1;
	cout << "Can you plase give me another integer?" << endl;
	cin >> i2;
	int sumInt = i1 + i2;
	int diffInt = i1 - i2;
	int prodInt = i1 * i2;
	int quotInt = i1 / i2;
	cout << "The sum of your ints is " << sumInt << endl;
	cout << "The difference of your ints is " << diffInt << endl;
	cout << "The product of your ints is " << prodInt << endl;
	cout << "The quotient of your ints is " << quotInt << endl;


	cout << endl << endl << endl; //using as a way to space out the sections


	//float
	cout << "Can you plase give me a number?" << endl;
	cin >> f1;
	cout << "Can you plase give me another number?" << endl;
	cin >> f2;
	float sumfloat = f1 + f2;
	float difffloat = f1 - f2;
	float prodfloat = f1 * f2;
	float quotfloat = f1 / f2;
	cout << "The sum of your numbers is " << sumfloat << endl;
	cout << "The difference of your numbers is " << difffloat << endl;
	cout << "The product of your numbers is " << prodfloat << endl;
	cout << "The quotient of your numbers is " << quotfloat << endl;


	cout << endl << endl << endl; //using as a way to space out the sections


	//strings
	//found info regaring cin.ignore() and getline() functions from https://stackoverflow.com/a/40984905
	cout << "Please say something" << endl;
	cin.ignore();
	getline(cin, foo);
	cout << "Please say something else" << endl;
	getline(cin, bar);
	string foobar = "'" + foo + "' and '" + bar + "'";
	cout << "You just said " << foobar << endl;
	

}
