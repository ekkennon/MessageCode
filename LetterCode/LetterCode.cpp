// LetterCode.cpp : main project file. Erin K Kennon

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace System;

void getEncodeString();
void getDecodeString();

int main()
{
	char choice;
	cout << "Welcome to the letter code program!";

	do {
		cout << "Encode, Decode or Quit(E / D / Q)";
		cin >> choice;

		if (!cin.good()) {
			cin.clear();
			cin.ignore(1000, '\n');
			choice = '?';
		}

		switch (choice) {
		case 'e':
		case 'E':
			getEncodeString();
			break;
		case 'd':
		case 'D':
			getDecodeString();
			break;
		case 'q':
		case 'Q':
			break;
		default:
			cout << "Please enter E, D, or Q";
			break;
		}
	} while (choice != 'Q');

	cout << "Thank you for using the letter code program";
	system("Pause");

	return 0;
}

void getEncodeString() {
	string message;

	cout << "Please enter your message to be encoded, use space to separate words";

	cin >> message;
	if (!cin.good()) {
		cin.clear();
		cin.ignore(1000, '\n');
	}

	cout << "\nYour encoded message is: " << endl;
	//TODO encode process here, call to LetterCodeLogic
	cout << "function not yet available";
}

void getDecodeString() {
	vector<int> letters;
	unsigned int x;

	cout << "Please enter your numbers to be decoded, use space to separate words, 99 to terminate input";

	do {
		cin >> x;
		if (!cin.good()) {
			cin.clear();
			cin.ignore(1000, '\n');
			x = 99;
		}

		if (x != 99) {
			letters.push_back(x);
		}
	} while (x != 99);

	if (letters.size() > 1) {
		cout << "\nYour decoded message is: " << endl;
		//TODO decode process here, call to LetterCodeLogic
		cout << "function not yet available";
	}
}
