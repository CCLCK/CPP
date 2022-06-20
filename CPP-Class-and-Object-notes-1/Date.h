#include<iostream>
using namespace std;


class Date
{
public:
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	int GetMonthDays(int year,int month)
	{
		int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			days[2]=29;
		}
		return days[month];
	}

	Date& operator=(const Date& x);
	Date& operator+=(int day);
	Date operator+(int day);
	Date operator++(int);
	Date& operator++();
	Date& operator-=(int day);
	Date operator-(int day);
	int operator-(Date& x);
	bool operator>(const Date& x);
	bool operator>=(const Date& x);
	bool operator<(const Date& x);
	bool operator<=(const Date& x);
	bool operator!=(const Date& x);
	bool operator==(const Date& x);


	void display()
	{
		cout << _year << " " << _month << " " << _day << " " << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

