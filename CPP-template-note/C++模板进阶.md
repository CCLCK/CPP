[toc]

# 🌲C++模板进阶

## 🌴非类型模板参数

非类型实参：用一个常量作为模板的一个参数，在模板中可以作为常量使用

- 常量就可以用来开数组之类的

- 这个常量不能是浮点数、类对象和字符串（不然报错：非类型模板参数“xx”的类型非法）

```c++
//非类型模板参数demo
template<class T,size_t N=10>
class Stack
{
public:
	size_t GetSize()
	{
		return N;
	}
private:
	T a[N];
};
int main()
{
	cout<<Stack<int>().GetSize()<<endl;
	Stack<int, 20>st;
	cout << st.GetSize() << endl;
	return 0;
}
```



![image-20220401112040643](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220401112040643.png)

> 这种Stack<int,10>st的用法可以指定这个容器的空间，参考stl里的array
>
> array不怎么用，因为如果开在栈上容易栈溢出（栈就几M而已），所以不如用vector，因为vector的空间开在堆上

## 🌴模板的特化

模板的特殊化，也就是针对一些类型特殊处理

> 比如比较函数，比较两个int和比较两个double都差不多，都是看值相不相等，但是如果是比较两个数组呢？
>
> 比较数组就有两种可能，比较数组的内容和比较数组首元素的地址，此时就得对其进行专门的处理

### 🌵函数模板特化

####  🍃函数模板特化的写法

```c++
template<>
返回值 函数名<参数类型>（参数列表）
```

####🍃 函数模板特化例子

```c++
template<class T>
bool Equal(const T&  a, const T&  b)
{
	cout << "bool Equal(const T&  a, const T&  b)" << endl;
	return a == b;
}

template<>
bool Equal<double>(const double& a, const double& b)
{
	cout << "bool Equal<double>(const double& a, const double& b)" << endl;
	return a == b;
}

int main()
{
	Equal(1, 2);
	Equal(1.0, 2.0);
	Equal("abcd", "abcde");
	return 0;
}
```



![image-20220401123514821](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220401123514821.png)



```c++
template<class T>
bool Equal(const T&  a, const T&  b)
{
	cout << "bool Equal(const T&  a, const T&  b)" << endl;
	return a == b;
}

template<>
bool Equal<double>(const double& a, const double& b)
{
	cout << "bool Equal<double>(const double& a, const double& b)" << endl;
	return a == b;
}

bool Equal(char* const&  a, char* const&  b)
{
	cout << "bool Equal(char* const&  a, char* const&  b)" << endl;
	return strcmp(a, b);
}
int main()
{
	Equal(1, 2);
	Equal(1.0, 2.0);
	Equal("abcd", "abcde");
	return 0;
}
```

![image-20220401124202028](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220401124202028.png)

> 对于函数模板的特化，还不如单独写一个函数去实现...~~写了半天函数特化，匹配不上字符数组~~

### 🌵类模板特化

#### 🍃全特化

> 全特化和偏特化本质上都还是特化

概念：将模板参数列表里的参数全部确定化

```c++
//全特化demo
template<class T1,class T2>
class Test
{
public:
	Test()
	{
		cout << "Test<T1,T2>" << endl;
	}
};

template<>
class Test<int,char>
{
public:
	Test()
	{
		cout << "Test<int,char>" << endl;
	}
};

int main()
{
	Test<int, int>();
	Test<int, char>();
	return 0;
}
```



![image-20220401141839410](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220401141839410.png)

#### 🍃半特化/偏特化

##### 🌼部分特化

```c++
template<class T1,class T2>
class Test
{
public:
	Test()
	{
		cout << "Test<T1,T2>" << endl;
	}
};

template<class T1>
class Test<T1, int>
{
public:
	Test()
	{
		cout << "Test<T1, int>" << endl;
	}
};
int main()
{
	Test<char, double>();
	Test<char, int>();
	return 0;
}
```



![image-20220401143004728](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220401143004728.png)

##### 🌼限制参数

```c++
template<class T1,class T2>
class Test
{
public:
	Test()
	{
		cout << "Test<T1,T2>" << endl;
	}
};

template<class T1, class T2>
class Test<T1*,T2*>
{
public:
	Test()
	{
		cout << "Test<T1*,T2*>" << endl;
	}
};
template<class T1, class T2>
class Test<T1&, T2&>
{
public:
	Test()
	{
		cout << "Test<T1&,T2&>" << endl;
	}
};
int main()
{
	Test<char, double>();
	Test<char*, int*>();
	Test<char&, int&>();
	return 0;
}
```

![image-20220401143527566](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220401143527566.png)

## 🌴模板分离编译

一句话，把类模板/函数模板的声明和实现放在一个文件里，不然可能导致**链接错误**

> 有通过显式实例化解决链接错误的办法，但有点麻烦不推荐使用，这里不展开记录

造成链接错误的原因：

> [高清图片](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220401153843631.png)

![image-20220401153843631](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220401153843631.png)

> 也因为这个原因，STL库里的源码实现中的模板声明和定义都是放在一起的

举个例子

>[高清图片](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220401154222897.png)

![image-20220401154222897](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220401154222897.png)

## 🌴模板总结

- 模板的好处在于提高了代码的复用性和灵活性，利于开发
- 模板的缺陷在于导致代码膨胀，致使编译时间过长，此外模板报错复杂，不好定位错误