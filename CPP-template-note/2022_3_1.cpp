#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//template<class T>
//template<typename T>
//void swap(T x, T y)
//{
//	cout << "void swap(T x, T y)" << endl;
//}
//int main()
//{
//	//swap(1, 2.0); err
//	swap<int>(1, 2.0);
//	swap<char>('a', 'b');
//	return 0;
//}


//int Add(int a, int b)
//{
//	cout << "int Add(int , int )" << endl;
//	return a + b;
//}
//
//template<typename T1,typename T2>
//T1 Add(T1 t1,T2 t2)
//{
//	cout << "T1 Add(T1,T2)" << endl;
//	return t1 + t2;
//}
//int main()
//{
//	Add(1, 2);
//	Add(1, 2.0);
//	return 0;
//}

//template<typename T>
template<class T>
class A
{
public:
	void swap(T& y);

private:
	T x=1;
};
template<class T>
void A<T>::swap(T& y)
{
	cout << "A<int>::swap(T& y)" << endl;
}
int main()
{
	A<int> a;
	int y = 2;
	a.swap(y);
	return 0;
}
