#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
using std::cout;
using std::endl;


//struct Test
//{
//	operator int() const
//	{
//		return a;
//	}
//	int a=1;
//};
//int main()
//{
//	/*int x = Test();*/
//
//	//char ch = 1;
//	//char ch2 = 1.52;
//	return 0;
//}

//int main()
//{
//	size_t pos = 0;
//	int n = 3;
//	while (n >= pos)
//	{
//		n--;
//	}
//	return 0;
//}

//struct Test
//{
//	int a;
//};
//int main()
//{
//
//	//double a = (int)5.5 + 5.3;//结果是10.3
//	//double b = static_cast <int>(5.5) + 5.3;
//	//cout << "a: " << a << endl;
//	//cout << "b: " << b << endl;
//	//double c = static_cast <int>(Test()) + 5.3;
//	Test* t = new Test;
//	double c = reinterpret_cast <int>(&t) + 5.3;
//	cout << c << endl;
//	
//	return 0;
//}

//int main()
//{
//	double d = 12.1;
//	char* p = reinterpret_cast<char*>(&d); // 将d以二进制（位模式）方式解释为char，并赋给*p
//	double* q = reinterpret_cast<double*>(p);
//	std::cout << *q;
//
//	return 0;
//}


//int main()
//{
//	const int a = 1;
//	int* p = const_cast<int*>(&a);
//	*p = 2;
//
//	cout << a << endl;
//	cout << *p << endl;
//
//	return 0;
//}


class Entity
{
public:
	virtual void Print() {};
};
class Player:public Entity
{

};
class Enemy :public Entity
{

};
void Check(void* p)
{
	if (p)
	{
		cout << "转换成功" << endl;
	}
	else
	{
		cout << "转换失败" << endl;
	}
}
int main()
{
	Entity* e = new Entity();
	Entity* actuallyPlayer = new Player();//向上转型

	//安全的向下转型
	Player* player =(Player*)actuallyPlayer;//向下转型需要转换类型
	Player* player2 = dynamic_cast<Player*>(actuallyPlayer);
	Check(player2); cout << endl;

	
	//不安全的向下转型
	Player* player3 = (Player*)e;
	Player* player4 = dynamic_cast<Player*>(e);
	Check(player4); cout << endl;

	Entity* actuallyEnemy = new Enemy();
	Player* player5 = dynamic_cast<Player*>(actuallyEnemy);
	Check(player5); cout << endl;


	return 0;
}

