#include <iostream>
using namespace std;
int main() {

	int Num1, Num2;
	char operator1;

	cout << "Enter the first integer: ";
	cin >> Num1;
	cout << "Enter the second integer: ";
	cin >> Num2;
	cout << "Enter the operator: ";
	cin >> operator1;

	switch (operator1) {

	case '-':
		cout << "Subtraction = " << Num1 - Num2 << endl;
		break;
	case '+':
		cout << "Addition = " << Num1 + Num2 << endl;
		break;
	case '*':
		cout << "Multiplication = " << Num1 * Num2 << endl;
		break;
	case '/':
		switch (Num2) {
		case 0:
			cout << "Division by 0 is not possible" << endl;
			break;
			return 0;
		}
		cout << "Division = " << Num1 / Num2 << endl;
		break;
		return 0;
	case '%':
		switch (Num2) {
		case 0:
			cout << "Division by 0 is not possible" << endl;
			break;
			return 0;
		}
		cout << "Modulus = " << Num1 % Num2 << endl;
		break;
		return 0;
	case '>':
		bool answer1;
		answer1 = Num1 > Num2;
		switch (answer1) {
		case true:
			cout << Num1 << " is greater than " << Num2;
			break;
		}
		return 0;
	case '<':
		bool answer2;
		answer2 = Num1 < Num2;
		switch (answer2) {
		case true:
			cout << Num1 << " is lesser than " << Num2;
			break;
		}
		return 0;
	case '=':
		bool answer3;
		answer3 = Num1 == Num2;
		switch (answer3) {
		case true:
			cout << Num1 << " is equal to " << Num2;
		}
	case '&':
		int answer4;
		answer4 = (Num1 % 2 == 0 && Num2 % 2 == 0);
		switch (answer4) {
		case 1:
			cout << Num1 << " and " << Num2 << " are even " << endl;
			break;
		case 0:
			cout << "Either " << Num1 << " or " << Num2 << " is not even" << endl;
			break;
		}
		return 0;
	case '|':
		bool answer5;
		answer5 = ((Num1 % 2 != 0) || (Num2 % 2 != 0));
		switch (answer5) {
		case true:
			cout << "Either " << Num1 << " or " << Num2 << " is odd" << endl;
			break;
		case false:
			cout << "Neither " << Num1 << " nor " << Num2 << " is odd " << endl;
		}
		return 0;


	}
	return 0;

}