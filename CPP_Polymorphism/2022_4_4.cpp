#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
using namespace  std;


class Base1
{
public:
	virtual void one(){ cout << "Base1::one()" << endl; }
	virtual void two(){ cout << "Base1::two()" << endl; }
private:
	int a;
};
class Base2
{
public:
	virtual void one(){ cout << "Base2::one()" << endl; }
	virtual void two(){ cout << "Base2::two()" << endl; }
};
class Derive:public Base2,public Base1
{
public:
	virtual void three(){ cout << "Derive::three()" << endl; }

};
typedef void(*VPTR)();
void Print(VPTR vptr[]);

int main()
{
	Base1 b1;
	Print((VPTR*)(*((int*)&b1)));

	Base2 b2;
	Print((VPTR*)(*((int*)&b2)));

	Derive d;
	Print((VPTR*)(*(((int*)(&d)) + 0)));
	
	//Print((VPTR*)(*(((int*)(&d)) + 1)));
	Print((VPTR*)(*(int*)((char*)&d + sizeof(Base2))));
	return 0;
}
void Print(VPTR vptr[])
{
	for (int i = 0; vptr[i] != nullptr; i++)
	{
		printf("vptr[%d]:%p -> ", i, vptr[i]);
		vptr[i]();
	}
	cout << endl;
}