#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
#include<cstdlib>
using namespace std;

////variable的意思是变量，var是variable的简称
//int global_var;//数据段
//static int static_global_var;//数据段（静态区）
//int main()
//{
//	static int static_var;//数据段
//	int local_var;//栈
//
//	char a[10]="abcd";//a在栈，数据也都在栈
//	*a;//*a在栈
//	char* b = "abcd";//b在栈，数据在代码区（常量区）
//	*b;//*b在代码区
//
//	int* ptr = (int*)malloc(10);//ptr在栈，开辟的空间在堆
//	*ptr;//堆
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(5, sizeof(int));
//	int* p2 = (int*)realloc(p, 20);
//
// 要不要释放p,如果p开的空间比较小，可能在后面直接扩充，即p与p2指向同一块空间,就不需要释放两次
// 如果realloc开的空间很大，需要重新找一块空间，则需要释放两次
//	free(p2);
//	cout << endl;
//	return 0;
//}


//int main()
//{
//	//C
//	int* ptr = (int*)malloc(sizeof(int));
//	free(ptr);
//	//C++
//	int* pa = new int;
//	delete pa;
//
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//};
//
//int main()
//{
//	A* pa1 = (A*)malloc(sizeof(A));
//	free(pa1);
//	cout << "malloc 和 free结束" << endl;
//	cout << endl;
//
//	A* pa2 = new A;
//	delete pa2;
//	cout << "new 和 delete结束" << endl;
//
//	return 0;
//}

//class A
//{
//public:
//	A(){}
//	A(int){}
//
//};
//int main()
//{
//	int* ptr = new int[10];//开一个十个int大小的数组
//	delete[] ptr;
//
//	int* ptr2 = new int(5);//开一个int大小的空间并且初始化为5
//	delete ptr2;
//
//	A* pa = new A[10];//开一个十个A类型大小的数组，调用十次构造函数
//	delete[] pa;
//
//	A* pa2 = new A(5);//会调用构造函数A(int)进行构造
//	delete pa2;
//	operator new(0);
//	return 0;
//}
