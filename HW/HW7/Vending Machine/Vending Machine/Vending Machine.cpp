// Vending Machine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>


using namespace std;

//defin what a vending machine is
class VendingMachine {
public:
	//A class needs:

	//1. Atributes
	int sprite, water, coke, pepsi;

	//2. Intitialization
	VendingMachine() {
		sprite = 5;
		water = 5;
		coke = 5;
		pepsi = 5;
	}

	//3. Functionality
	void dispenseSprite() {

		if (sprite == 0) {
			//cout << "I am out of Sprite!" << endl;
		}

		else {
			//cout << "Here's a Sprite!" << endl;
			sprite--;
		}

	}


	void dispenseWater() {

		if (water == 0) {
			//cout << "I am out of water!" << endl;
		}

		else {
			//cout << "Here's a water!" << endl;
			water--;
		}

	}

	void dispenseCoke() {

		if (coke == 0) {
			//cout << "I am out of Coke!" << endl;
		}

		else {
			//cout << "Here's a Coke!" << endl;
			coke--;
		}

	}

	void dispensePepsi() {

		if (pepsi == 0) {
			//cout << "I am out of Pepsi!" << endl;
		}

		else {
			//cout << "Here's a Pepsi!" << endl;
			pepsi--;
		}

	}


};



int main()
{

	float cash = 0;
	string input;
	int num = 0;
	int spriteHas = 0;
	int waterHas = 0;
	int cokeHas = 0;
	int pepsiHas = 0;


	VendingMachine machine;

	cout << "Please enter a starting ammount of cash (e.g. 1, 2, 5.99, ect...) to load into the vending machine." << endl;
	cin >> cash;

	cout << endl << endl << "-------------------------------------------------------------" << endl << endl;

	cout << "Welcome to the smart vending machine." << endl << "To check your balance, please type BAL" << endl << "To check stock, please type STOCK" << endl << "To purchase an item, please type one of the following:" << endl;
	cout << "      buyWater" << endl << "      buySprite" << endl << "      buyCoke" << endl << "      buyPepsi" << endl;
	cout << "To check what items you have already purchaed, please type BAG." << endl;
	cout << "To exit and get your change, please type EXIT" << endl;
	//cout << "Plase note all inputs are case sensitive" << endl;
	

	while (input != "exit") {

		cin >> input;

		transform(input.begin(), input.end(), input.begin(), ::tolower); //Had to look up making input lowercase https://www.tutorialspoint.com/how-to-convert-std-string-to-lower-case-in-cplusplus

		if (input == "bal") {
			cout << "You currently have $" << cash << " in credit." << endl;
		}

		else if (input == "stock") {
			cout << "Current Stock:" << endl;
			cout << "      Water: " << machine.water << ". $1.50" << endl;
			cout << "      Sprite: " << machine.sprite << ". $1.50" << endl;
			cout << "      Coke: " << machine.coke << ". $1.50" << endl;
			cout << "      Pepsi: " << machine.pepsi << ". $1.50" << endl;
		}

		else if (input == "buywater") {

			if (machine.water > 0) {
				if (cash > 1.50) {
					machine.dispenseWater();
					cash = cash - 1.5;
					waterHas++;
					cout << "Thank you for buying a water!" << endl;
					cout << "Remaing Cash: " << cash << endl;
					
				}
				else {
					cout << "Sorry you do not have enough money to purchase water." << endl;
				}

			}
			else {
				cout << "I am out of water... I have refunded your $1.50" << endl;
			}

		}

		else if (input == "buysprite") {

			if (machine.sprite > 0) {
				if (cash > 1.50) {
					machine.dispenseSprite();
					cash = cash - 1.5;
					spriteHas++;
					cout << "Thank you for buying a Sprite!" << endl;
					cout << "Remaing Cash: " << cash << endl;

				}
				else {
					cout << "Sorry you do not have enough money to purchase a Sprite." << endl;
				}

			}
			else {
				cout << "I am out of Sprite... I have refunded your $1.50" << endl;
			}

		}

		else if (input == "buycoke") {

			if (machine.coke > 0) {
				if (cash > 1.50) {
					machine.dispenseCoke();
					cash = cash - 1.5;
					cokeHas++;
					cout << "Thank you for buying a Coke!" << endl;
					cout << "Remaing Cash: " << cash << endl;

				}
				else {
					cout << "Sorry you do not have enough money to purchase a Coke." << endl;
				}

			}
			else {
				cout << "I am out of Coke... I have refunded your $1.50" << endl;
			}

		}

		else if (input == "buypepsi") {

			if (machine.pepsi > 0) {
				if (cash > 1.50) {
					machine.dispensePepsi();
					cash = cash - 1.5;
					pepsiHas++;
					cout << "Thank you for buying a Pepsi!" << endl;
					cout << "Remaing Cash: " << cash << endl;

				}
				else {
					cout << "Sorry you do not have enough money to purchase a Pepsi." << endl;
				}

			}
			else {
				cout << "I am out of Pepsi... I have refunded your $1.50" << endl;
			}

		}

		else if (input == "bag") {
			cout << "Purchased Items:" << endl;
			cout << "      Water: " << waterHas << endl;
			cout << "      Sprite: " << spriteHas << endl;
			cout << "      Coke: " << cokeHas << endl;
			cout << "      Pepsi: " << pepsiHas << endl;
			cout << "Remaining Cash:" << endl;
			cout << "      Cash: $" << cash << endl;
		}

		else {
		cout << "Please enter a valid input." << endl;
}


		


	}

	if (input == "exit") {

		cout << endl << endl << "-------------------------------------------------------------" << endl << endl;

		cout << "Thank you for using the vending machine! Here's your what you're walking away with:" << endl;
		cout << "Purchased Items:" << endl;
		cout << "      Water: " << waterHas << endl;
		cout << "      Sprite: " << spriteHas << endl;
		cout << "      Coke: " << cokeHas << endl;
		cout << "      Pepsi: " << pepsiHas << endl;
		cout << "Remaining Cash:" << endl;
		cout << "      Cash: $" << cash << endl;

		return(1);
	}
	
}
