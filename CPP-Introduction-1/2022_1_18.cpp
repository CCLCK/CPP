#define _CRT_SECURE_NO_WARNINGS 1


//#ifdef __cplusplus
//extern "C" {
//#endif
// 
////some code ...
// 
//#ifdef __cplusplus
//}
//#endif


//#include<stdio.h>
//#include<string.h>
//char a[300],b[300];
//int main()
//{
//	char ch;
//	int cnt = 0;
//	int max=0;
//	
//	
//	while ((ch=getchar()) != '\n')
//	{
//		if (ch >= '0'&&ch <= '9')
//		{
//			b[cnt++] = ch;		
//		}
//		else
//		{
//			if (cnt > max)
//			{
//				max = cnt;
//				strcpy(a, b);
//			}
//			cnt = 0;
//		}
//	}
//	if (ch == '\n'&&cnt>max)
//	{
//		strcpy(a, b);
//	}
//	printf("%s\n", a);
//	return 0;
//}


//#include<stdio.h>
//static int a[10005];
//int MoreThanHalfNum_Solution(int* numbers, int numbersLen) {
//	// write code here
//	for (int i = 0; i < numbersLen; i++)
//	{
//		a[numbers[i]]++;
//		if (a[numbers[i]]>numbersLen / 2)
//		{
//			return numbers[i];
//		}
//	}
//
//}
//
//int main()
//{
//	int b[] = { 1};
//	int len = sizeof(b) / sizeof(int);
//	int ans=MoreThanHalfNum_Solution(b, len);
//	printf("%d\n", ans);
//}


//#include<iostream>
////using namespace std;
//int main()
//{
//	std::cout << "hello C++!" << std::endl;
//	return 0;
//}



//int main()
//{
//	long long a = 1, b = 2, c = 3;
//	printf("a::%d %d b::%d %d c::%d %d\n", a, b, c);
//
//	return 0;
//}

//#include<stdio.h>    
//int main()
//{
//	long long a = 1;
//	printf("%d %d\n", a);
//
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//namespace ck
//{
//	int a = 0;
//}
//namespace ck
//{
//	int b = 100;
//}
//int main()
//{
//	cout <<"a£∫"<< ck::a << endl;
//	cout <<"b: "<<ck::b << endl;
//	return 0;
//}

#include<iostream>
using namespace std;
namespace ck
{
	int Add(int a, int b)
	{
		return a + b;
	}
	struct People
	{
		int height;//…Ì∏ﬂ
		int age;//ƒÍ¡‰
	};
	
	namespace ck_2
	{
		int a=0;
	}
}
int main()
{
	ck::People people = { 180, 18 };
	cout << "ADD: " << ck::Add(1, 2) << endl;
	cout << "people height: " << people.height << endl;
	cout << "a: "<<ck::ck_2::a << endl;
}