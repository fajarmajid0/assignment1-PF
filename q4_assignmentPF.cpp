#include <iostream>
using namespace std;
int main() {

	int NumX, NumY;
	cout << "Enter the first integer: ";
	cin >> NumX;
	cout << "Enter the second integer: ";
	cin >> NumY;

	if (NumX == 0)
	{
		if (NumY == 0)
		{
			cout << "The point lies on the origin";
		}
		else if (NumY > 0)
		{
			cout << "The point lies on the positive y axis";
		}
		else
		{
			cout << "The point lies on the negative y axis";
		}
		return 0;
	}
	else if (NumY == 0)
	{
		if (NumX > 0)
		{
			cout << "The point lies on the positive x axis";
		}
		else
		{
			cout << "The point lies on the negative x axis";
		}
		return 0;

	}

	bool xquadrant;
	xquadrant = NumX > 0;
	bool yquadrant;
	yquadrant = NumY > 0;

	switch (xquadrant)
	{
	  case true: 
		switch (yquadrant) {
		  case true:
			cout << "The point ( " << NumX << "," << NumY << " ) lies in Quadrant 1";
			break;
		  case false:
			cout << "The point ( " << NumX << "," << NumY << " ) lies in Quadrant 4";
			break;
		}
		break;

	  case false:
		switch (yquadrant) {
			 case true: 
					 cout << "The point ( " << NumX << "," << NumY << " ) lies in Quadrant 2";
					 break;
			     case false: 
					 cout << "The point ( " << NumX << "," << NumY << " ) lies in Quadrant 3";
					 break;
		 }

	}
	return 0;
	}