#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;
//class Father
//{
//public:
//	int father_money=1;
//};
//class Son :public Father
//{
//public :
//	int son_money=2;
//};
//int main()
//{
//	Son s;
//	cout << s.father_money << endl;
//	return 0;
//}

//class Person
//{
//protected:
//	int _age;
//	int _sex;
//	string _tel;
//};
//class Teacher:public Person
//{
//private:
//	string _teaid;
//};
//class Student :public Person
//{
//private:
//	string _stuid;
//};

//class Basic
//{
//public:
//	int _a;
//private:
//	int _b;
//private:
//	int _c;
//};
//class Derived:public Basic
//{
//private:
//	int _d;
//};
//int main()
//{
//	Derived de;
//	return 0;
//}


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Parent
//{
//public:
//	void print()
//	{
//		cout << "I'm Parent." << endl;
//	}
//};
//
//class Child : public Parent
//{
//public:
//	void print()
//	{
//		cout << "I'm Child." << endl;
//	}
//};
//
//void how_to_print(Parent* p)
//{
//	p->print();
//}
//
//int main()
//{
//	Parent p;
//	Child c;
//	how_to_print(&p);    // Expected to print: I'm Parent.
//	how_to_print(&c);    // Expected to print: I'm Child.
//	return 0;
//}


//class Basic
//{
//public:
//	void print()
//	{
//		cout << "Basic" << endl;
//	}
//};
//class Derived :public Basic
//{
//public:
//	void  print()
//	{
//		cout << "Derived" << endl;
//	}
//};
//void func(Derived* p)
//{
//	p->print();
//}
//int main()
//{
//	Basic b;
//	Derived d;
//	Derived *pd = (Derived*)&b;
//	func(pd);
//	func(&d);
//	return 0;
//}


//class Basic
//{
//public:
//	void print() 
//	{
//		cout << "Basic" << endl;
//	}
//	int _a = 0;
//};
//class Derived :public Basic
//{
//public:
//	void  print()
//	{
//		cout << "Derived" << endl;
//	}
//	int _a = 1;
//};
//void func(Basic* p)
//{
//	p->print();
//	cout <<( p->_a) << endl;
//	cout << endl; 
//}
//void func(Basic& p)
//{
//	p.print();
//}
//int main()
//{
//	
//	Basic b;
//	Derived d;
//	
//	func(&b);
//	func(&d);
//	func(b);
//	func(d);
//	return 0;
//}

//int main()
//{
//	Derived d;
//	d.print();
//	cout << d._a << endl;
//	cout << endl;
//	Basic b;
//	b.print();
//	cout << b._a << endl;
//	return 0;
//}

class Basic
{
public:
	void print()
	{
		cout << "Basic" << endl;
	}
};
class Derived :public Basic
{
public:
	void print()
	{
		cout << "Derived" << endl;
	}
};

int main()
{
	Derived d;
	d.Basic::print();
	return 0;
}