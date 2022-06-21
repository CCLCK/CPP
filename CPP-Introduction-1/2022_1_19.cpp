#define _CRT_SECURE_NO_WARNINGS 1






//void func(int a ,int b)
//{
//	cout <<"a: "<< a << endl;
//	cout << "b：" << b << endl;
//}
//void func(int a = 20, int b = 10);
//
//int main()
//{
//	func();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 1;
//	int& b = a;
//	const double& c = b;
//	cout << c << endl;
//}

//#include<iostream>
//using namespace std;
//void swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int x = 1, y = 2;
//	swap(x, y);
//	cout << "x:" << x << endl;
//	cout << "y:" << y << endl;
//
//	return 0;
//}

#include<iostream>
using namespace std;

int& Add(int x, int y)
{
	int ans = x + y;
	return ans;
}
int main()
{
	int& a = Add(1, 2);
	Add(3, 4);
	cout << a << endl;
	return 0;
}

int main()
{
	int a = 1;
	int& b=a;
	return 0;
}

int main()
{
	char ch = 255;
	int i = 0xff;
	if (ch == i)
	{
		cout << "相同" << endl;
	}
	else
	{
		cout << "不相同" << endl;
	}
}

