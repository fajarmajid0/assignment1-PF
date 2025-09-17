#include <iostream>
using namespace std;
int main() {

	int dayDOB, monthDOB, yearDOB;
	cout << "Enter your date of birth (DD MM YYYY): ";
	cin >> dayDOB >> monthDOB >> yearDOB;
	int curr_monthdays, DOB_monthdays;

	int current_day, current_month, current_year;
	cout << "Enter the date today (DD MM YYYY): ";
	cin >> current_day >> current_month >> current_year;

	bool leapyear_DOB = ((yearDOB % 4 == 0) && ((yearDOB % 100 != 0) || (yearDOB % 400 == 0)));
	bool leapyear_current = ((current_year % 4 == 0) && ((current_year % 100 != 0) || (current_year % 400 == 0)));

	switch (current_month)
	{
	case 1:
		curr_monthdays = 31;
		break;
	case 2:
		switch (leapyear_current)
		{
		case true:
			curr_monthdays = 29;
			break;
		case false:
			curr_monthdays = 28;
			break;
		}
		break;
	case 3:
		curr_monthdays = 31;
		break;
	case 4:
		curr_monthdays = 30;
		break;
	case 5:
		curr_monthdays = 31;
		break;
	case 6:
		curr_monthdays = 30;
		break;
	case 7:
		curr_monthdays = 31;
		break;
	case 8:
		curr_monthdays = 31;
		break;
	case 9:
		curr_monthdays = 30;
		break;
	case 10:
		curr_monthdays = 31;
		break;
	case 11:
		curr_monthdays = 30;
		break;
	case 12:
		curr_monthdays = 31;
		break;
	}

	int age_year = current_year - yearDOB;
	int age_month = current_month - monthDOB;
	int age_day = current_day - dayDOB;
	int prevmonth_days;

	if (current_month == 2 || current_month == 4 || current_month == 6 || current_month == 8 || current_month == 9 || current_month == 11 || current_month == 1)
	{
		prevmonth_days = 31;
	}
	else if (current_month == 3)
	{
		if (leapyear_current == true || leapyear_DOB == true)
		{
			prevmonth_days = 29;  // 29th feb - leap year
		}
		prevmonth_days = 28;
	}
	else if (current_month == 5 || current_month == 7 || current_month == 10 || current_month == 12)
	{
		prevmonth_days = 30;
	}

	if (age_day < 0 && age_month < 0)
	{
		age_year = (current_year - yearDOB) - 1;
		age_month = ((current_month - monthDOB) - 1) + 12;
		age_day = (current_day - dayDOB) + prevmonth_days;
	}
	else if (age_day < 0 && age_month >= 0)
	{
		if (current_month == 1)
		{
			age_year = (current_year - yearDOB) - 1;
			age_month = (current_month - monthDOB) + 11;
			age_day = (current_day - dayDOB) + 31;  // 31 days in December
		}
		
		else
		{
			age_year = current_year - yearDOB;
			age_month = (current_month - monthDOB) - 1;
			if (age_month < 0)
			{
				age_year = (current_year - yearDOB) - 1;
				age_month = ((current_month - monthDOB) - 1) + 12;
				age_day = (current_day - dayDOB) + prevmonth_days;
			}
			age_day = (current_day - dayDOB) + prevmonth_days;
		}
		if (leapyear_DOB == true)
		{
			age_year = (current_year - yearDOB);
			age_month = ((current_month - monthDOB) - 1);
			age_day = (current_day - dayDOB) + prevmonth_days + 1; // DOB year is leap year and current is not so you add one day to compensate for the less day in the non leap year
		}
	}
	else if (age_month < 0 && age_day > 0)
	{
		age_year = (current_year - yearDOB) - 1;
		age_month = (current_month - monthDOB) + 12;
		age_day = prevmonth_days - (current_day - dayDOB);
	}
	if ((monthDOB > 12 && monthDOB < 1) || (current_month > 12 && current_month < 1))
	{
		cout << "Invalid number of month";
	}
	if ((dayDOB > 31 && dayDOB > 1) || (current_day > 31 && current_day < 1))
	{
		cout << "Invalid day";
	}
	cout << "Age = " << age_year << " years, " << age_month << " months, " << age_day << " days ";
	return 0;
}


	




