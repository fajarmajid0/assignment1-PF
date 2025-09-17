#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {

	int Point1_X, Point1_Y;
	int Point2_X, Point2_Y;
	int Point3_X, Point3_Y;

	cout << "Enter the coordinates of the first point (x y): ";
	cin >> Point1_X >> Point1_Y;
	cout << "Enter the coordinates of the second point (x y): ";
	cin >> Point2_X >> Point2_Y;
	cout << "Enter the coordinates of the third point (x y): ";
	cin >> Point3_X >> Point3_Y;

	cout << setw(5) << "P1" << setw(5) << Point1_X << setw(5) << Point1_Y << endl;
	cout << setw(5) << "P2" << setw(5) << Point2_X << setw(5) << Point2_Y << endl;
	cout << setw(5) << "P3" << setw(5) << Point3_X << setw(5) << Point3_Y << endl;

	int x_difference1 = Point2_X - Point1_X;
	int y_difference1 = Point2_Y - Point1_Y;
	int x_difference2 = Point2_X - Point3_X;
	int y_difference2 = Point2_Y - Point3_Y;
	int x_difference3 = Point3_X - Point1_X;
	int y_difference3 = Point3_Y - Point1_Y;

	// square of distances instead of square root to avoid complication later
	double distance_1 = ((x_difference1 * x_difference1) + (y_difference1 * y_difference1));
	double distance_2 = ((x_difference2 * x_difference2) + (y_difference2 * y_difference2));
	double distance_3 = ((x_difference3 * x_difference3) + (y_difference3 * y_difference3));


	if (distance_1 == distance_2)
	{
		if (distance_1 == distance_3)
		{
				cout << "Equilateral Triangle";
		}
	}
	if ((distance_1 == distance_2) || (distance_2 == distance_3) || (distance_1 == distance_3))
	{
		if ((distance_1 == distance_2 + distance_3) || (distance_2 == distance_3 + distance_1) || (distance_3 == distance_2 + distance_1))
		{
			cout << " Isosceles Right Angled Triangle";
		}
		else
			cout << "Isosceles Triangle";
	}
	else if ((distance_1 != distance_2) && (distance_1 != distance_3) && (distance_2 != distance_3))
	{
	    if ((distance_1 == distance_2 + distance_3) || (distance_2 == distance_3 + distance_1) || (distance_3 == distance_2 + distance_1))
		{
			cout << "Scalene Right Angle Triangle";
		}
		else
		{
			cout << "Scalene Triangle";
		}
	}
	return 0;
}
