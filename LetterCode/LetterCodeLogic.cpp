#include "stdafx.h"
#include "LetterCodeLogic.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;
using namespace System;

string LetterCodeLogic::Encode(string message)
{
	char c;
	unsigned int x;
	stringstream result;
	
	for (int i = 0; i < message.length(); i++) {
		if (message[i] == ' ') {
			result << 0;
		}
		else {
			x = message[i];
			//x = c;
			if (x < 65) {
				x = 99;
			}
			else {
				x -= 64;
				if (x > 26) {
					x -= 32;
				}
			}
			result << x;
		}
		result << ' ';
	}
	return result.str();
}

string LetterCodeLogic::Decode(vector<int> letters)
{
	char c;
	unsigned int i;
	stringstream result;

	for (i = 0; i < letters.size(); i++) {
		if (letters[i] == 0) {
			c = ' ';
		}
		else if (letters[i] < 0 || letters[i] > 26) {
			c = '?';
		}
		else {
			c = letters[i] + 64;
		}

		result << c;
	}
	return result.str();
}
