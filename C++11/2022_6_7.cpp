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
//	//��ֵ����
//	int& b = a;
//	const int& x = 1;//const����������
//	int& c = 5;//err
//
//	//��ֵ����
//	int&& m = 1;
//	int&& n = a;//err
//	int&& p = move(a);
//	
//
//	return 0;
//}


//class String
//{
//public:
//	String() = default;
//	String(const char* string)
//	{
//		printf("����\n");
//		_size = strlen(string);
//		_string = new char[_size];
//		memcpy(_string, string, _size);
//	}
//	String(const String& other)
//	{
//		printf("���\n");
//		_size = other._size;
//		_string = new char[_size];
//		memcpy(_string, other._string, _size);
//	}
//	String& operator=(String&& other)
//	{
//		printf("�ƶ���ֵ\n");
//		if (this != &other)//��ȡ�Ĳ����Լ�����Դ
//		{
//			//��������ݣ���ֹ�ڴ�й©
//			delete[] _string;
//			//��ȡ��Դ
//			_string = other._string;
//			_size = other._size;
//			//��ֹһ���ڴ汻��������
//			other._string = nullptr;
//			other._size = 0;
//		}
//		return *this;
//	}
//	String(String&& other) noexcept//�ṩһ���ƶ�����ĺ��� ��������ֵ
//	{
//		printf("�ƶ�����String\n");
//		_string = other._string;
//		_size = other._size;
//		other._string = nullptr;//���봦�������ʱ���ַ�������Ȼ����ָ��ָ��ͬһ���ڴ�
//		other._size = 0;
//	}
//	~String()
//	{
//		delete[] _string;
//	}
//	void Print()
//	{
//		for (size_t i = 0; i < _size; i++)
//		{
//			printf("%c", _string[i]);
//		}
//		printf("\n");
//	}
//private:
//	char* _string;
//	size_t _size;
//};
//class Entity
//{
//public:
//	Entity(const String& name)//���Կ�����������ľ�ֻ����������
//		:_name(name)//��������
//	{
//		printf("����Entity\n");
//	}
//	Entity(String&& name)
//		:_name(std::move(name))//move���԰���ֵת��Ϊ��ֵ������ƥ��String���ƶ�����
//	{
//		printf("�ƶ�����Entity\n");
//	}
//	void PrintName()
//	{
//		_name.Print();
//	}
//private:
//	String _name;
//};
//int main()
//{
//	/*Entity entity("ccl");
//	entity.PrintName();*/
//	String str = "ccl";
//	String str_move = std::move(str);
//
//	return 0;
//}

//void Test(int&)
//{
//	cout << "��ֵ����" << endl;
//}
//void Test(const int&)
//{
//	cout << "const ��ֵ����" << endl;
//}
//void Test(int&&)
//{
//	cout << "��ֵ����" << endl;
//}
//void Test(const int&&)
//{
//	cout << "const ��ֵ����" << endl;
//}
//template<class T>
//void PerfectForward(T&& t)//��������
//{
//	Test(std::forward<T>(t));
//}
//int main()
//{
//	/*int a = 1;
//	const int b = 1;
//	PerfectForward(a);
//	PerfectForward(b);
//	PerfectForward(1);*/
//
//	int&& x = 1;
//	x += 1;
//	cout << x << endl;
//	return 0;
//}


//class Entity
//{
//
//public:
//	const static int i = 1;
//};
//int main()
//{
//	cout << Entity::i << endl;
//	return 0;
//}


//template<class T>
//void ShowArguList(T value)
//{
//	cout << value << endl;
//	
//}
//
//template<class T,class...Args>//...��ʾģ��ĸ����ǲ��̶���
//void ShowArguList(T value,Args...args)
//{
//	cout << value << " ";
//	ShowArguList(args...);
//}
//
//int main()
//{
//	ShowArguList(1);
//	ShowArguList(2, 'b');
//	ShowArguList(3, 'c', 3.33);
//	ShowArguList(4, 'd', "hello");
//	return 0;
//}

//template<class T>
//void ShowArguList(T value)
//{
//	cout << value <<" ";
//}
//template<class ... Args>
//void ShowArguList(Args ... args)
//{
//	int arr[] = { (ShowArguList(args),0)... };
//	cout << endl;
//}
//int main()
//{
//	/*ShowArguList(1);*/
//	ShowArguList(2, 'b');
//	ShowArguList(3, 'c', 3.33);
//	ShowArguList(4, 'd', "hello");
//	return 0;
//}


class Test
{
public:
	Test()
	{
		cout << "�޲ι���" << endl;
	}
	Test(const Test&)
	{
		cout << "��������" << endl;
	}
	Test(Test&&)
	{
		cout << "�ƶ�����" << endl;
	}
	~Test()
	{
		cout << "����" << endl;
	}
};


int main()
{
	Test test;//��ֵ
	cout << endl;
	std::vector<Test>v1;
	cout << "push_back��";
	v1.push_back(test);
	v1.push_back(test);
	return 0;
}



