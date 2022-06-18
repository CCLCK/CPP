#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//class C
//{
//public:
//	C()
//	{
//		cout << "C" << endl;
//	}	
//	~C()
//	{
//		cout << "C" << endl;
//	}
//};
//class B
//{
//public:
//	B()
//	{
//		cout << "B" << endl;
//	}
//	~B()
//	{
//		cout << "B" << endl;
//	}
//};
//class A
//{
//public:
//	A()
//	{
//		cout << "A" << endl;
//	}	
//	~A()
//	{
//		cout << "A" << endl;
//	}
//};
//class D
//{
//public:
//	D()
//	{
//		cout << "D" << endl;
//	}
//	~D()
//	{
//		cout << "D" << endl;
//	}
//};
//C c;
//int main()
//{
//	A a;
//	B b;
//	static D d;
//	return 0;
//	//c a b d
//	//b a d c
//	return 0;
//}


//class B
//{
//public:
//	B()
//	{
//		cout << "我是B的构造函数" << endl;
//	}
//private:
//	int _b;
//};
//class A
//{
//public:
//	A()
//	{
//		cout << "我是A的构造函数" << endl;
//	}
//private:
//	int _a;
//	B b;
//};
//int main()
//{
//	A a;
//	return 0;
//}

//class B
//{
//public:
//	B()
//	{
//		cout << "B的构造函数" << endl;
//	}
//private:
//	int _b;
//};
//class A
//{
//public:
//	A()
//		:_aa(2)
//		, _a(1)
//	{
//		cout << _a << " " << _aa << endl;
//	}
//	A(int)
//	{}
//private:
//	int _a;
//	int _aa;
//	B b;
//};
//int main()
//{
//	A a=1;
//
//	return 0;
//}


//class A
//{
//public:
//	explicit A(int){}
//};
//int main()
//{
//	A a = 1;
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		_a = 1;
//		_aa = 2;
//	}
//	static int Print()
//	{
//		cout << "static int Print()" << endl;
//		return _aa;
//		
//	}
//	int test()
//	{
//		Print();
//	}
//private:
//	int _a;
//	static int _aa;
//};
//int A::_aa = 1;
//int main()
//{
//	cout << (A::Print() )<< endl;;
//	return 0;
//}

//class Time
//{
//public:
//	void GetData()
//	{
//		cout << d._year << d._month << d._day << endl;
//	}
//private:
//	Date d;
//};
//
//class Date
//{
//	friend class Time;
//private:
//	int _year;
//	int _month;
//	int _day;
//};
////bool operator==(Date d1,Date d2)
////{
////	return d1._year == d2._year
////		&& d1._month == d2._month
////		&& d1._day == d2._day;
////}
//int main()
//{
//	return 0;
//}

class A
{
public:
	class B
	{
	public:
		B(const A& a)
		{
			cout << "我是内部类B" << endl;
			cout << "我可以访问外部类A的变量_a:" <<a._a << endl;
		}
	private:
		int _b;
	};
	A(){}
	A(const B& b)
	{
		//cout << b._b << endl;
	}
private:
	int _a=1;
};
int main()
{
	A a;
	A::B b(a);
	return 0;
}
