// Vending Machine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//defin what a vending machine is
class VendingMachine {
public:
	//A class needs:

	//1. Atributes
	int sprite, water;

	//2. Intitialization
	VendingMachine() {
		sprite = 5;
		water = 5;
	}

	//3. Functionality
	void dispenseSprite() {

		if (sprite == 0) {
			cout << "Out of Sprite!" << endl;
		}

		else {
			cout << "Here's a sprite!" << endl;
			sprite--;
		}
		
	}

	void dispenseWater() {
		cout << "Here's a water!" << endl;
		water--;
	}


};



int main()
{

	int x;
	VendingMachine y;

	cout << "Cans of Sprite in stock: " << y.sprite << endl;
	cout << "Bottles of water in stock: " << y.water << endl;
	y.dispenseSprite();
	y.dispenseSprite();
	y.dispenseSprite();
	y.dispenseSprite();
	y.dispenseSprite();
	y.dispenseSprite();



	cout << "Cans of sprite in stock: " << y.sprite << endl;



	return 1;
}
