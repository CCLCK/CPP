#define _CRT_SECURE_NO_WARNINGS 1

#include"Date.h"

//返回值 类::函数名  防止链接错误
//不能返回临时变量的引用
Date& Date::operator=(const Date& x)
{
	_year = x._year;
	_month = x._month;
	_day = x._day;
	return *this;
}

Date Date::operator+(int day)
{
	Date tmp = *this;
	tmp += day;
	//tmp._day += day;
	//while (tmp._day > GetMonthDays(tmp._year, tmp._month))
	//{
	//	tmp._day -= GetMonthDays(tmp._year, tmp._month);
	//	tmp._month++;
	//	if (tmp._month > 12)
	//	{
	//		tmp._year++;
	//		tmp._month = 1;
	//	}
	//}
	return tmp;
}

Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDays(_year, _month))
	{
		_day -= GetMonthDays(_year, _month);
		_month++;
		if (_month > 12)
		{
			_year++;
			_month = 1;
		}
	}

	/**this = *this + day;*///+=复用+  复用+需要拷贝更多次，并不好
	return *this;
}

int Date::operator-(Date& x)
{
	Date max = *this, min = x;
	if (x > max)
	{
		max = x;
		min = *this;
	}
	int cnt = 0;
	while (max != min)
	{
		min++;
		cnt++;
	}
	return cnt;
}
Date Date::operator-(int day)
{
	Date tmp = *this;
	tmp -= day;
	return tmp;
}

Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day < 0)
	{
		_month--;
		if (_month < 1)
		{
			_month = 12;
			_year--;
		}
		_day += GetMonthDays(_year, _month);
	}
	return *this;
}

bool Date::operator>(const Date& x)
{
	if (_year > x._year)
	{
		return true;
	}
	else if (_year<x._year)
	{
		return false;
	}
	else
	{
		if (_month > x._month)
		{
			return true;
		}
		else if (_month < x._month)
		{
			return false;
		}
		else
		{
			if (_day>x._day)
			{
				return true;
			}
			else if (_day < x._day)
			{
				return false;
			}
			else
			{
				return false;
			}
		}
	}
}

bool Date::operator>=(const Date& x)
{
	if (_year > x._year)
	{
		return true;
	}
	else if (_year<x._year)
	{
		return false;
	}
	else
	{
		if (_month > x._month)
		{
			return true;
		}
		else if (_month < x._month)
		{
			return false;
		}
		else
		{
			if (_day>x._day)
			{
				return true;
			}
			else if (_day < x._day)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}
}

Date Date::operator++(int)
{
	//后置++
	Date tmp = *this;
	*this += 1;
	return tmp; 
}
Date& Date::operator++()
{
	//前置++
	*this += 1;
	return *this;
}
bool Date::operator<(const Date& x)
{
	return !(*this >= x);
}
bool Date::operator<=(const Date& x)
{
	return !(*this>x);
}
bool Date::operator==(const Date& x)
{
	return _year == x._year
		&& _month == x._month
		&& _day == x._day;
}
bool Date::operator!=(const Date& x)
{
	return !(*this == x);
}


