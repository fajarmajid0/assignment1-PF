#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	cout << setw(10) << "Code" << setw(16) << "Meal\t" << setw(12) << "Per kg price in Pakistani rupees" << endl;
	cout << setw(10) << "1" << setw(16) << "\tChicken Handi" << setw(12) << "1800" << endl;
	cout << setw(10) << "2" << setw(16) << "\tChicken Karahi" << setw(12) << "2000" << endl;
	cout << setw(10) << "3" << setw(16) << "\tChicken Tikka" << setw(12) << "2200" << endl;
	cout << setw(10) << "4" << setw(16) << "\tChicken Haleem" << setw(12) << "500" << endl;
	cout << setw(10) << "5" << setw(16) << "\tCreamy Chicken" << setw(12) << "2500" << endl;

	int code;
	cout << "Enter your meal's Code: ";
	cin >> code;

	if (code == 1)
	{
		cout << "Chicken Handi";
	}
	else if (code == 2)
	{
		cout << "Chicken Karahi";
	}
	else if (code == 3)
	{
		cout << "Chicken Tikka";
	}
	else if (code == 4)
	{
		cout << "Chicken Haleem";
	}
	else if (code == 5)
	{
		cout << "Creamy Chicken";
	}
	else
	{
		cout << "Invalid Code";
	}

	double quantity_kg;
	cout << endl << "Enter quantity in kgs: ";
	cin >> quantity_kg;
	if (quantity_kg <= 0)
	{
		cout << "Invalid quantity";
	}

	int currency;
	cout << "Enter the currency you want to use. 1 for Pkr, 2 for Euro, 3 for Dollars: ";
	cin >> currency;
	if (currency != 1 && currency != 2 && currency != 3)
	{
		cout << "Invalid currency";
	}

	double MealPrice;
	if (code == 1)
	{
		MealPrice = quantity_kg * 1800;
	}
	else if (code == 2)
	{
		MealPrice = quantity_kg * 2000;
	}
	else if (code == 3)
	{
		MealPrice = quantity_kg * 2200;
	}
	else if (code == 4)
	{
		MealPrice = quantity_kg * 500;
	}
	else if (code == 5)
	{
		MealPrice = quantity_kg * 2500;
	}

	double SalesTax;
	if (MealPrice <= 1000)
	{
		SalesTax = 0;
	}

	else if (MealPrice > 1000 && MealPrice <= 3000)
	{
		SalesTax = (0.02 * MealPrice);
	}
	else  if (MealPrice > 3000)
	{
		SalesTax = (0.05 * MealPrice);
	}
	double TotalAmount;

	if (currency == 1)
	{
		cout << "Meal Price = " << fixed << setprecision(2) << MealPrice << "Rs" << endl;
		cout << "Sales Tax = " << fixed << setprecision(2) << SalesTax << "Rs" << endl;
		TotalAmount = MealPrice + SalesTax;
		cout << "Total Amount = " << fixed << setprecision(2) << TotalAmount << "Rs" << endl;
	}
	if (currency == 2)
	{
		MealPrice = MealPrice / 193;
		SalesTax = SalesTax / 193;
		TotalAmount = MealPrice + SalesTax;
		cout << "Meal Price = " << fixed << setprecision(2) << MealPrice << "€" << endl;
		cout << "Sales Tax = " << fixed << setprecision(2) << SalesTax << "€" << endl;
		cout << "Total Amount = " << fixed << setprecision(2) << TotalAmount << "€" << endl;
	}
	if (currency == 3)
	{
		MealPrice = MealPrice / 165;
		SalesTax = SalesTax / 165;
		TotalAmount = MealPrice + SalesTax;
		cout << "Meal Price = " << fixed << setprecision(2) << MealPrice << "$" << endl;
		cout << "Sales Tax = " << fixed << setprecision(2) << SalesTax << "$" << endl;
		cout << "Total Amount = " << fixed << setprecision(2) << TotalAmount << "$" << endl;
	}
	return 0;
}