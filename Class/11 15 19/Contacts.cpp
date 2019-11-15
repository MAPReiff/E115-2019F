// Contacts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{

	string name, phone;
	char option;
	ofstream writer;

	cout << "Do you want to create a new contact? (y/n)" << endl;
	cin >> option;

	//writing files

	if (option == 'y') {
		cout << "Name?" << endl;
		cin >> name;
		cout << "Number?" << endl;
		cin >> phone;

		//1. open a file from the disk (creates one if path DNE)
		//2. write into the file
		//3. save and close file

		writer.open("MyContacts.txt", ios::app); //opens or makes the file
					//ios:app sets to append mode (goes to end of file to write)
		writer << name << " " << phone << endl; //writes to file
		writer.close(); //saves and closes the file


		cout << "Created contact " << name << " with phone number " << phone << "." << endl;

	}

	//reading files

	ifstream reader;
	string newLine;

	//1. open the file
	//2. read file
	//3. close file
	reader.open("MyContacts.txt"); //opens files
	while (getline(reader, newLine)) { //whiel loop the reader file, put it into the var
		cout << newLine << endl;

	}
	reader.close(); //closes file

	return 1;

}
