#include 'thegerk.h'
#include <cstring>
#include <iostream>
using namespace std;

void expression::setup(const string& input, const vector<variable>& vars)
{
	//Find last oppeartion to do and split apart string around.
	const int seperator = location_of_last_operation(input);


	//split into substrings and feed to operands
	left.setup(input.substr(0, seperator), vars);
	right.setup(input.substr(seperator + 1, string::npos), vars);

	//set up operator
	Operator = substr[seperator];

	//look at what is in the left string, is it empty, does it just have parentheses?
	if(isUnary(input[seperator]))
	{
		cout << "Remove me for final program!\nI'm located in: void expression::setup(const string& input, const vector<variable>& vars)" << endl;
		cout << "Full string: \"" << input << endl;
		cout << "Left string: \"" << input.substr(0, seperator) << endl;
		cout << "Opeartor: " << input[seperator] << endl;
		cout << "Right string: \"" < input.substr(seperator + 1, string::npos) << endl;
		pause();
	}
}