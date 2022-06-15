#define _CRT_SECURE_NO_WARNINGS 1




//int main()
//{
//	operator delete(nullptr);
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		cout << "A()"<<endl;
//	}
//	A(int)
//	{
//		cout << "A(int)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//};
//
//int main()
//{
//	A* pa = (A*)malloc(sizeof(A));
//	new(pa)A;
//	//new(pa)A(3);
//	pa->~A();
//	free(pa);
//	return 0;
//}

#include<iostream>
using namespace std;
class A
{
public:
	void* operator new(size_t n)
	{
		cout << "void* operator new(size_t n)" << endl;
		return nullptr;
	}
	void operator delete(void* p)
	{
		cout << "void operator delete(void* p)" << endl;
	}
};

int main()
{
	A* pa=new A;
	delete pa;
	delete pa;
	return 0;
}





