#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
using namespace std;

//class Basic
//{
//public:
//	Basic()
//	{
//		cout << "Basic()" << endl;
//	}
//	Basic(Basic&)
//	{
//		cout << "Basic(Basic&)" << endl;
//	}
//};
//class Derived:public Basic
//{
//public:
//	Derived()
//	{
//		cout << "Derived()" << endl;
//	}
//	Derived(Derived& d)
//		:Basic(d)//传进来的这个对象也得把它的基类构造了，切片行为
//	{
//		cout << "Derived(Derived&)" << endl;
//	}
//};
//int main()
//{
//	Derived d1;
//	Derived d2(d1);
//	return 0;
//}


//class Basic
//{
//public:
//	Basic(){ cout << "Basic()" << endl; }
//	virtual ~Basic()
//	{
//		cout << "~Basic()" << endl;
//	}
//};
//class Derived :public Basic
//{
//public:
//	Derived(){ cout << "Derived" << endl; }
//	~Derived()
//	{
//		cout << "~Derived()" << endl;
//	}
//};q
//int main()
//{
//	Basic* pb = new Derived;
//	//pb->~Basic();	
//	return 0;
//}


//class Basic
//{
//public:
//	Basic operator=(Basic b)
//	{
//		cout << "Basic operator=(Basic b)" << endl;
//		return *this;
//	}
//
//};
//class Derived:public Basic
//{
//public:
//	//Derived operator=(Derived d)
//	//{
//	//	Basic::operator=(d);
//	//	cout << "Derived operator=(Derived d)" << endl;
//	//	return *this;
//	//}
//};
//
//int main()
//{
//	Derived d1;
//	Derived d2;
//	d1 = d2;
//	return 0;
//}


//int main()
//{
//
//
//
//
//	return 0;
//}
//












