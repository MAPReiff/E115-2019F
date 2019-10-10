// Homework 1 - print 5 cout messages
//I pledge my honor that I have abided by the Stevens Honor System

//The code to change the colro of the text/terminal on lines 8, 12-19, 21, 24, 27, 30, 33 and 36 were found from https://stackoverflow.com/a/4053879

#include <iostream>

#include <windows.h>

int main()
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int c1 = 5; //purple
	int c2 = 12; //light red
	int c3 = 6; //yellow
	int c4 = 10; //green
	int c5 = 23; //white with blue background
	int norm = 7; //normal white text (like windows default)

	SetConsoleTextAttribute(hConsole, c1);
	std::cout << "Hello World!\n\n";

	SetConsoleTextAttribute(hConsole, c2);
	std::cout << "Lovely weather we're having.\n\n";

	SetConsoleTextAttribute(hConsole, c3);
	std::cout << "How much wood could a woodchuck chuck if a woodchuck could chuck wood?\nAs much wood as a woodchuck could chuck, if a woodchuck could chuck wood.\n\n";
	
	SetConsoleTextAttribute(hConsole, c4);
	std::cout << "Go Ducks!\n\n";

	SetConsoleTextAttribute(hConsole, c5);
	std::cout << "I'm excited to learn C++!\n\n";

	SetConsoleTextAttribute(hConsole, norm);


}

