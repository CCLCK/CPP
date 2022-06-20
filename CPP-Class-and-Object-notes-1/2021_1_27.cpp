#define _CRT_SECURE_NO_WARNINGS 1

#include"Date.h"

//char a[100005];
//int main()
//{
//	gets(a);
//	unsigned char b[] = "元";
//	unsigned short* ps = (unsigned short*)b;
//	int x = *ps;
//	ps = (unsigned short*)a;
//	/*printf("%d%d\n", b[0],b[1]);*/
//	int len = (sizeof(a)-1) / 2;
//	while (len--)
//	{
//		if (ps[0] == x)
//		{
//			cout << "true" << endl;
//		}
//		ps++;
//	}
//	
//	return 0;
//}
//bool operator==(const Date& x1,const Date& x2)
//{
//	return x1._year == x2._year
//		&& x1._month == x2._month
//		&& x1._day == x2._day;
//}

//int main()
//{
//	setlocale(LC_ALL, "chs");
//	wchar_t a[] = L"你好";
//	wcout << a << endl;
//	return 0;
//}

//bool operator==(const Date& x2)
//{
//	return _year == x2._year
//		&& _month == x2._month
//		&& _day == x2._day;
//}

//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date& operator=(const Date& x)
//	{
//		_year = x._year;
//		_month = x._month;
//		_day = x._day;
//		return *this;
//	}
//	void display()
//	{
//	cout << _year << " " << _month << " " << _day << " " << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date x1(1, 1, 1);
//	Date x2(1, 1, 2);
//	x2 = x1;
//	x2.display();
//	return 0;
//}

//int main()
//{
//	const int& i = 1;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	const int& j = i;
//	j = 2;//报错，想通过const修饰的引用来改变引用的对象的值
//	return 0;
//}



int main()
{
	Date x1(2022, 1, 28);
	Date x2(1, 1, 2);
	//x2 = x1;
	//x2.display();
	//(x1 += 1)+=10;//必须加括号，说明+=是从后往前运算的

	//x2=x1 - 100;
	//x2.display();
	//x1 -= 100;
	//x1.display();
	/*x1 = x2;
	cout << (x1 != x2) << endl;*/

	//x1++;
	//x1.display();
	//++x1;
	//x1.display();

	//x2 = (++x1);
	
	cout << (x1 - x2) << endl;
	return 0;
}