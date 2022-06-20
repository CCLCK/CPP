#define _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
using namespace std;
//class People
//{
//public:
//	void eat();
//	void setHeight(int height)
//	{
//		_height = height;
//		cout << "my height: " <<_height << endl;
//	}
//private:
//	int _height;
//};
//void People::eat()
//{
//	cout <<"i am eating"<<endl;
//}
//int main()
//{
//	People people;
//	people.setHeight(180);
//	people.eat();
//	return 0;
//}

//class People
//{
//public:
//	void eat()
//	{
//		cout << "i am eating" << endl;
//	}
//private:
//	int height;
//	int weight;
//};

//struct People{
//private:
//	int height;
//};
//int main()
//{
//	People people;
//
//	cout << sizeof(People) << endl;
//	return 0;
//}

//namespace c
//{
//	typedef struct Stack
//	{
//		int* a;
//		int top;//栈顶的下一个位置
//		int capacity;//容量
//	}St;
//	void Init(St* st)
//	{
//		st->a = (int*)malloc(sizeof(int) * 50);
//		st->top = 0;
//		st->capacity = 50;
//	}
//}
//namespace cpp
//{
//	class Stack
//	{
//	public:
//		void Init()
//		{
//			a = (int*)malloc(sizeof(int)* 50);
//			top = 0;
//			capacity = 50;
//		}
//	private:
//		int* a;
//		int top;
//		int capacity;
//	};
//}
//
//int main()
//{
//	cpp::Stack st1;
//	cpp::Stack st2;
//	st1.Init();
//	st2.Init();
//	return 0;
//}

//class A
//{
//public:
//    void Init(int b)
//    {
//		this->b = b;
//    }
//	void display()
//	{	
//		cout << b << endl; 	
//	}
//private:
//	int b;   
//};
//
//int main()
//{
//	A* p = nullptr;
//}

//class A
//{
//public:
//	void display(int b)
//	{
//		_b = b;
//		cout << _b << endl;
//	}
//	void display()
//	{
//		cout << "hello world" << endl;
//	}
//private:
//	int _b;
//};
//int main()
//{
//	A* p =nullptr;
//	p->display(1);
//	p->display();
//	return 0;
//}

//class AA
//{
//public:
//	void display()
//	{
//		cout << "a:" << a << endl;
//		cout << "b:" << b << endl;
//	}
//private:
//	int a = 1;
//	int b = 2;
//};
//
//int main()
//{
//	AA aa;
//	aa.display();
//	return 0;
//}

//#include<stdio.h>
//char a[105];
//int main()
//{
//	scanf("%s", &a);
//	int x, y;
//	scanf("%d%d", &x, &y);
//	char tmp = a[x - 1];
//	a[x - 1] = a[y - 1];
//	a[y - 1] = tmp;
//	printf("%s\n", a);
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		cout << "我是构造函数" << endl;
//	}
//	A(int)
//	{
//		cout << "我是构造函数_int" << endl;
//	}
//};
//int main()
//{
//	A a(1);
//	return 0;
//}

//class A
//{
//	A()
//	{}
//	A(int x = 1, int y = 2, int z = 3)
//	{
//		cout << "A(int x = 1, int y = 2, int z = 3)" << endl;
//	}
//};
//
//int main()
//{
//	A a;
//}

//class B
//{
//public:
//	B()
//	{
//		cout << "I am B" << endl;
//	}
//};
//class A
//{
//public:
//	void show()
//	{
//		cout << x <<" "<< y << endl;
//	}
//private:
//	int x;
//	int y;
//	B b;
//};
//
//int main()
//{
//	A a;
//	a.show();
//	return 0;
//}

//class A
//{
//public:
//	~A()
//	{
//		cout << "我是析构函数" << endl;
//	}
//};
//int main()
//{
//	A a;
//	cout << "析构函数在我之后调用" << endl;
//	return 0;//这里对象a的生命周期结束
//}


class A
{
public:
	A()
	{
		_x = 1;
		_y = 2;
	}
	A(const A& a)
	{
		_x = a._x;
		_y = a._y;
	}
	void show()
	{
		cout << _x << " " << _y << endl;
	}
private:
	int _x;
	int _y;
};
int main()
{
	A a;
	A b(a);
	b.show();
	return 0;
}
