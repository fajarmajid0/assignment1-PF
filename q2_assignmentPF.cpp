#include <iostream>
using namespace std;
int main() {

	int Num1;
	cout << "Enter the integer: ";
	cin >> Num1;

	if (Num1 % 2 == 0)
	{
		cout << "The number is even.";
		if (Num1 % 4 == 0)
		{
			cout << endl << "It is divisible by 4.";
		}
		else
		{
			cout << endl << "It is not divisible by 4.";
		}
	}
	else
	{
		cout << "The number is odd.";
		if (Num1 % 3 == 0)
		{
			cout << endl << "It is divisible by 3.";
		}
		else
		{
			cout << endl << "It is not divisible by 3.";
		}
	}
	return 0;
}
	



	