#define _CRT_SECURE_NO_WARNINGS 1



//class Derived;
//class Basic
//{
//	friend void func(Basic& b, Derived& d);
//protected:
//	int _bas=1;
//};
//class Derived :public Basic
//{	
//protected:
//	int _der=2;
//};
//void func(Basic& b,Derived& d)
//{
//	cout <<b._bas<< endl;
//	cout << d._der << endl;
//}
//int main()
//{
//	Basic b; 
//	Derived d;
//	func(b,d);
//	return 0;
//}




//class Basic
//{
//public:
//	static int _bas ;
//};
//int Basic::_bas = 1;
//class Derived:public Basic
//{
//	
//};
//int main()
//{	
//	cout << Basic::_bas << endl;
//	cout << Derived::_bas << endl;
//	return 0;
//}

#include<iostream>
using namespace std;
class Person
{
protected:
	int _age=0;
};
class Student : virtual public  Person
{
protected:
	int _stuId=1;
};
class Teacher : virtual public  Person
{
protected:
	int _jobId=2;
};
class Assistant :public Student, public Teacher
{
public:
	void show()
	{
		cout << _age << endl;
	}
protected:
	int _courseId=3;
};
int main()
{
	Assistant a;
	return 0;
}


