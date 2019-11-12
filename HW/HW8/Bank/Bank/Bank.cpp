// Bank.cpp : This file contains the 'main' function. Program execution begins and ends there.
// I pledge my honor that I have abided by the Stevens Honor System

#include <iostream>
#include <algorithm>

using namespace std;

class bank {
private:
	double currentBalance;

public:
	bank() {
		currentBalance = 1000;
	}

	void addCash(float val) {

		if (val > 0 && val < 100) {
			currentBalance = currentBalance + val;
			cout << "You have deposited " << val << " into your account. Your new balance is: " << currentBalance << endl;
		}
		else {
			cout << "ERROR!!!! You can only depsit between 0.01 and 100.00 when using cash." << endl;
		}
	}
	void addCheck(float val) {
		if (val > 0) {
			currentBalance = currentBalance + val;
			cout << "You have deposited " << val << " into your account. Your new balance is: " << currentBalance << endl;
		}
		else {
			cout << "ERROR!!!! The minimum check deposit is 0.01!" << endl;
		}

	}
	void checkBal() {
		cout << "Your current balance is: " << currentBalance << endl;
	}

	void withdraw(int val) {
		int allowed[10] = { 20,40,60,80,100,120,140,160,180,200 };

		if (val > 200 && val <= 0) {
			cout << "ERROR!!!! You can only withdraw between 20 and 200, and must be a multiple of 20!" << endl;
		}
		if (val == 20 || val == 40 || val == 60 || val == 80 || val == 100 || val == 120 || val == 140 || val == 160 || val == 180 || val == 200) {
			if (currentBalance >= val) {
				currentBalance = currentBalance - val;
				cout << "You have successfully withdrawn " << val << " from your account. Your new balance is: " << currentBalance << endl;
			}
			else {
				cout << "ERROR!!!! You do not have enough funds to withdraw " << val << " from your account!" << endl;
			}
			
		}
		else {
			cout << "ERROR!!!! You can only withdraw between 0.01 and 200, and must be a multiple of 20!" << endl;
		}
	}

};


int main()
{

	bank stevensBank;

	string input;

	cout << "========= Stevens Bank =========" << endl;
	cout << "Welcome to the Stevens Bank.\nIn order to check your balance, please type BAL.\nTo deposit cash, please type depositCash.\nTo deposit a check, please type depositCheck.\nIn order to withdraw cash, please type withdraw.\nTo exit, please type exit.\n";
	cout << "================================\n\n";

	while (input != "exit") {

		cin >> input;
		transform(input.begin(), input.end(), input.begin(), ::tolower); //Had to look up making input lowercase https://www.tutorialspoint.com/how-to-convert-std-string-to-lower-case-in-cplusplus

		if (input == "bal") {
			stevensBank.checkBal();
		}

		if (input == "depositcash") {
			float inputNum;
			cout << "\n\nHow much cash would you like to deposit? There is a minimum of 0.01 and a maximum of 99.99.\n\n";
			cin >> inputNum;
			stevensBank.addCash(inputNum);
		}

		if (input == "depositcheck") {
			float inputNum;
			cout << "\n\nHow much is the check worth?\n\n";
			cin >> inputNum;
			stevensBank.addCheck(inputNum);
		}

		if (input == "withdraw") {
			float inputNum;
			cout << "\n\nHow much would you like to withdraw? It must be a multiple of 20 between 20 and 200.\n\n";
			cin >> inputNum;
			stevensBank.withdraw(inputNum);
		}

	}
}
