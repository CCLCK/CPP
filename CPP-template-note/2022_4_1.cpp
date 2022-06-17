#define _CRT_SECURE_NO_WARNINGS 1

#include <string>
#include <iostream>
using namespace std;

//template<class T,size_t N=10>
//class Stack
//{
//public:
//	size_t GetSize()
//	{
//		return N;
//	}
//private:
//	T a[N];
//};
//int main()
//{
//	cout<<Stack<int>().GetSize()<<endl;
//	Stack<int, 20>st;
//	cout << st.GetSize() << endl;
//	return 0;
//}

//template<class T>
//bool Equal(const T&  a, const T&  b)
//{
//	cout << "bool Equal(const T&  a, const T&  b)" << endl;
//	return a == b;
//}
//
//template<>
//bool Equal<double>(const double& a, const double& b)
//{
//	cout << "bool Equal<double>(const double& a, const double& b)" << endl;
//	return a == b;
//}
//
//bool Equal(char* const&  a, char* const&  b)
//{
//	cout << "bool Equal(char* const&  a, char* const&  b)" << endl;
//	return strcmp(a, b);
//}
//int main()
//{
//	Equal(1, 2);
//	Equal(1.0, 2.0);
//	Equal("abcd", "abcde");
//	return 0;
//}

//template<class T>
//bool Equal(T&a, T&b)
//{
//	cout << "bool Equal(T&a, T&b)" << endl;
//	return a == b;
//}
//
//template<>
//bool Equal<char* const&  >(char*  const& a, char*  const&  b)
//{
//	cout << "" << endl;
//	return strcmp(a, b);
//}
//int main()
//{
//	/*Equal(1, 2);
//	Equal(1.0, 2.0);*/
//	char* a= "hello";
//	char* b = "hello";
//	a = "world";
//	Equal(a, b);
//	return 0;
//}


//template<class T1,class T2>
//class Test
//{
//public:
//	Test()
//	{
//		cout << "Test<T1,T2>" << endl;
//	}
//};
//
//template<>
//class Test<int,char>
//{
//public:
//	Test()
//	{
//		cout << "Test<int,char>" << endl;
//	}
//};
//
//int main()
//{
//	Test<int, int>();
//	Test<int, char>();
//	return 0;
//}

//template<class T1,class T2>
//class Test
//{
//public:
//	Test()
//	{
//		cout << "Test<T1,T2>" << endl;
//	}
//};
//
////template<class T1>
////class Test<T1, int>
////{
////public:
////	Test()
////	{
////		cout << "Test<T1, int>" << endl;
////	}
////};
//template<class T1, class T2>
//class Test<T1*,T2*>
//{
//public:
//	Test()
//	{
//		cout << "Test<T1*,T2*>" << endl;
//	}
//};
//template<class T1, class T2>
//class Test<T1&, T2&>
//{
//public:
//	Test()
//	{
//		cout << "Test<T1&,T2&>" << endl;
//	}
//};
//int main()
//{
//	Test<char, double>();
//	Test<char*, int*>();
//	Test<char&, int&>();
//	return 0;
//}

template<class T>
T Add(T& a, T& b)
{
	return a + b;
}
int main()
{
	int a = 1, b = 2;
	Add(a, b);
	return 0;
}


