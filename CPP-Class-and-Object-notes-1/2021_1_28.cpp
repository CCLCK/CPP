#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//class A
//{
//public:
//	const A* operator&() const
//	{
//		cout << "A* operator&()" << endl;
//		return this;
//	}
//};
//int main()
//{
//	const A a;
//	&a;//const A*
//	const A* p = &a;
//	return 0;
//}

//class A
//{
//public:
//	void print()  const
//	{
//		cout << "void print()" << endl;
//	}
//	~A()
//	{
//		cout << "������������" << endl;
//	}
//};
//int main()
//{
//	//A a1;
//	//a1.print();
//	//const A a2;
//	//a2.print();
//	A().print();
//	cout << "������������֮ǰ����" << endl;
//	return 0;
//}

//int main()
//{
//	A a;
//	A* p = &a;
//	cout << p << endl;
//	return 0;
//}

class A
{
public:
	A()
	{
		cout << "���ǳ�ʼ������" << endl;
	}
	A(A& a)
	{
		cout << "���ǿ�������" << endl;
	}
};
void test(A a)
{
}
int main()
{
	A a;
	test(a);
	return 0;
}




