#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;

//int main()
//{
//
//	/*int arr1[] = { 1,2,3,4,5 };
//	int arr2[]{ 1,2,3,4,5 };
//
//	pair<int, int>(1, 1);
//	pair<int, int>{1, 1};
//
//	pair<string, int>* pr = new pair<string, int>[2]{ {"sort",1} {"good",2} };*/
//	
//	pair<string, int>* pr = new pair<string, int>[2]{ {"sort",1} {"good",2} };
//	auto il_int = { 10,20,30 };
//	auto il_char = {'a','b','c'};
//	cout << typeid(il_int).name() << endl;
//	cout << typeid(il_char).name() << endl;
//	return 0;
//}

//int main()
//{
//	auto a = 0;
//	auto b = 1L;
//	auto c = 1.1;
//	std::vector<std::string>::iterator it;
//	auto d = it;
//	
//	return 0;
//}

//int main()
//{
//	/*int x = 1;
//	double y = 2;
//	decltype(x * y)  z;
//	cout << typeid(z).name() << endl;*/
//
//	cout << typeid(nullptr).name() << endl;
//	return 0;
//}


//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int* p = arr;
//	for (auto e : arr)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	vector<int>v{ 1,2,3,4,5 };
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	string str = "ccl";
//	for (auto e : str)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}


//int main()
//{
//	int a = 1;
//
//	//左值引用
//	int& b = a;
//	const int& x = 1;//const引用是例外
//	int& c = 5;//err
//
//	//右值引用
//	int&& m = 1;
//	int&& n = a;//err
//	int&& p = move(a);
//	
//
//	return 0;
//}


class String
{
public:
	String() = default;
	String(const char* string)
	{
		printf("构造\n");
		_size = strlen(string);
		_string = new char[_size];
		memcpy(_string, string, _size);
	}
	String(const String& other)
	{
		printf("深拷贝\n");
		_size = other._size;
		_string = new char[_size];
		memcpy(_string, other._string, _size);
	}
	String& operator=(String&& other)
	{
		printf("移动赋值\n");
		if (this != &other)//窃取的不是自己的资源
		{
			//处理旧数据，防止内存泄漏
			delete[] _string;
			//窃取资源
			_string = other._string;
			_size = other._size;
			//防止一块内存被析构两次
			other._string = nullptr;
			other._size = 0;
		}
	}
	String(String&& other) noexcept//提供一个移动构造的函数 参数是右值
	{
		printf("移动构造String\n");
		_string = other._string;
		_size = other._size;
		other._string = nullptr;//必须处理这个临时的字符串，不然两个指针指向同一块内存
		other._size = 0;
	}
	~String()
	{
		delete[] _string;
	}
	void Print()
	{
		for (size_t i = 0; i < _size; i++)
		{
			printf("%c", _string[i]);
		}
		printf("\n");
	}
private:
	char* _string;
	size_t _size;
};
class Entity
{
public:
	Entity(const String& name)//可以看出构造出来的就只在这里用了
		:_name(name)//拷贝构造
	{
		printf("构造Entity\n");
	}
	Entity(String&& name)
		:_name(std::move(name))//move可以把左值转换为右值，用于匹配String的移动构造
	{
		printf("移动构造Entity\n");
	}
	void PrintName()
	{
		_name.Print();
	}
private:
	String _name;
};
int main()
{
	/*Entity entity("ccl");
	entity.PrintName();*/
	String str = "ccl";
	String str_move = std::move(str);

	return 0;
}



