#define _CRT_SECURE_NO_WARNINGS 1


//#include<iostream>
//using namespace std;
//
//#pragma pack(4)//指定对齐数是4
//struct A
//{
//	//测试double类型在默认值是4下的最大对齐数
//	int a;//0-3 
//	char b;//4    5-7
//	double c;//8-15
//	int i;//16-19   如果假设成立大小应该是20
//	//如果最大对齐数是4，那结果就应该是20   
//	//如果最大对齐数是8，拿结果就应该是24
//};
//
//int main()
//{
//	cout << sizeof(A) << endl;
//}



//#include<iostream>
//#include<algorithm>
//using namespace std;
//int maxSubArray(int* nums, int numsSize){
//	//ans=max(ans+nums[i],nums[i])
//	if (numsSize == 1)
//	{
//		return nums[0];
//	}
//	int ans = nums[0];
//	int mmax = nums[0];
//	for (int i = 1; i < numsSize; i++)
//	{
//		ans = max(ans + nums[i], nums[i]);
//		mmax = max(ans, mmax);
//	}
//	return mmax;
//}
//
//int main()
//{
//	int nums[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
//	int x=maxSubArray(nums, sizeof(nums) / sizeof(int));
//	printf("%d\n", x);
//}



//
//inline int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	cout << Add(1, 2) << endl;
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	auto pa = &a;
//	auto* pa2 = &a;
//	auto& b = a;//b是a的别名
//	cout << typeid(pa).name() << endl;
//	cout << typeid(pa2).name() << endl;
//	cout << typeid(b).name() << endl;
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//
//	for (auto& e : arr)
//	{
//		e *= 2;
//	}
//	for (auto e : arr)
//	{
//		cout << e <<" ";
//	}
//	cout << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void test(int)
//{
//	cout << "int"<< endl;
//}
//void test(int*)//重载
//{
//	cout << "int*" << endl;
//}
//
//int main()
//{
//	test(NULL);
//	test(nullptr);
//}



//#include<stdio.h>
//int a[1005][1005];
//int main()
//{
//	int w, h;
//	scanf("%d%d", &w, &h);
//	int cnt = 0;
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			if (a[i][j] == 0)
//			{
//				cnt++;
//				
//				a[i][j] = 1;
//				if (i + 2 < h)
//				{
//					a[i + 2][j] = 1;
//				}
//				if (i - 2 >= 0)
//				{
//					a[i - 2][j] = 1;
//				}
//				if (j + 2 < w)
//				{
//					a[i][j + 2] = 1;
//				}
//				if (j - 2 >= 0)
//				{
//					a[i][j - 2] = 1;
//				}
//			}	
//		}
//	}
//	printf("%d\n", cnt);
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int StrToInt(string str) {
		int len = str.length();
		int i = 0;
		int ans = 0;
		int flag = 0;
		while (str[i] == '0'||str[i]=='+'||str[i]=='-')
		{
			
			if (str[i] == '-')
			{
				flag = 1;
			}
			i++;
		}
		int tmp = i;
		for (i = tmp; i < len;i++)
		{
			if (str[i] < '0'||str[i] > '9')
			{
				return 0; 
			}
			else
			{
				ans = ans * 10 + (str[i] - '0');
			}
		}
		if (flag == 1)
		{
			ans = ans*(-1);
		}
		return ans;
	}
};


int main()
{
	string str = "0";
	Solution a;

	cout << a.StrToInt(str) << endl;
	return 0;
}
