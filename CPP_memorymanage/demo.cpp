#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
#include<cstdlib>
using namespace std;

////variable����˼�Ǳ�����var��variable�ļ��
//int global_var;//���ݶ�
//static int static_global_var;//���ݶΣ���̬����
//int main()
//{
//	static int static_var;//���ݶ�
//	int local_var;//ջ
//
//	char a[10]="abcd";//a��ջ������Ҳ����ջ
//	*a;//*a��ջ
//	char* b = "abcd";//b��ջ�������ڴ���������������
//	*b;//*b�ڴ�����
//
//	int* ptr = (int*)malloc(10);//ptr��ջ�����ٵĿռ��ڶ�
//	*ptr;//��
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(5, sizeof(int));
//	int* p2 = (int*)realloc(p, 20);
//
// Ҫ��Ҫ�ͷ�p,���p���Ŀռ�Ƚ�С�������ں���ֱ�����䣬��p��p2ָ��ͬһ��ռ�,�Ͳ���Ҫ�ͷ�����
// ���realloc���Ŀռ�ܴ���Ҫ������һ��ռ䣬����Ҫ�ͷ�����
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
//	cout << "malloc �� free����" << endl;
//	cout << endl;
//
//	A* pa2 = new A;
//	delete pa2;
//	cout << "new �� delete����" << endl;
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
//	int* ptr = new int[10];//��һ��ʮ��int��С������
//	delete[] ptr;
//
//	int* ptr2 = new int(5);//��һ��int��С�Ŀռ䲢�ҳ�ʼ��Ϊ5
//	delete ptr2;
//
//	A* pa = new A[10];//��һ��ʮ��A���ʹ�С�����飬����ʮ�ι��캯��
//	delete[] pa;
//
//	A* pa2 = new A(5);//����ù��캯��A(int)���й���
//	delete pa2;
//	operator new(0);
//	return 0;
//}
