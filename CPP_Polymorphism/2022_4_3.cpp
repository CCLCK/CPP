#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
using namespace std;

//class Base
//{
//public:
//	virtual void print()
//	{
//		cout << "Base" << endl;
//	}
//
//};
//class Derive:public Base
//{
//public:
//	virtual void print()
//	{
//		cout << "Derive" << endl;
//	}
//};
//
//int main()
//{
//	Base* pbase = new Base;
//	Base* pderive = new Derive;
//	pbase->print();
//	pderive->print();
//
//	return 0;
//}

//class Test
//{
//public:
//	virtual void func()//virtualÐÞÊÎµÄº¯Êý
//	{
//		;
//	}
//};


//class Base
//{
//public:
//	virtual void print()=0 ;
//};
//class Derive :public Base
//{
//public:
//	virtual void print()
//	{
//		;
//	}
//};
//int main()
//{
//	//Base b;
//	Derive d;
//	return 0;
//}

//class Base
//{
//public:
//	virtual void one(){ cout << "Base::one" << endl; }
//	virtual void two(){ cout << "Base::two" << endl; }
//	virtual void three(){ cout << "Base::three" << endl; }
//private:
//	int a;
//};
//class Derive :public Base
//{
//public:
//	virtual void one(){ cout << "Derive::one" << endl; }
//	virtual void two(){ cout << "Derive::two" << endl; }
//	virtual void three(){ cout << "Derive::three" << endl; }
//};
//
//typedef void(*VPTR)();
//void Print(VPTR vptr[])
//{
//	for (int i = 0; vptr[i] != nullptr; i++)
//	{
//		printf("vptr[%d]:%p -> ", i, vptr[i]);
//		vptr[i]();
//	}
//	cout << endl;
//}
//int main()
//{
//	Base b;    
//	Print((VPTR*)(*((int*)&b)));
//	Derive d;
//	Print((VPTR*)(*((int*)&d)));
//	return 0;
//}
