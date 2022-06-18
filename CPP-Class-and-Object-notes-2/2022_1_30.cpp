#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
using namespace std;


//class A
//{
//public:
//	A(int a = 0)
//	{
//		cout << "A(int a = 0)" << endl;
//	}
//private:
//	int a;
//};
//
//class B
//{
//public:
//	//B()
//	//{
//	//	cout << "B()" << endl;
//	//}
//	B(int a, int b)
//	{
//		_aa = A(a);
//		_b = b;
//	}
//private:
//	int _b = 1;
//	A _aa;
//};
//
//int main()
//{
//	B b(10,20);
//	return 0;
//}

class A
{
public:
private:
	int a;
	static int b;
	 int c;
};

int main()
{
	A a;
	cout << sizeof(A) << endl;
	cout << sizeof(a) << endl;
	return 0;
}
















