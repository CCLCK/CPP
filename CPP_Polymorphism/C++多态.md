[toc]



# 🌲多态概念

简单来说，不同的对象同一行为的结果不同

> 比如买票这个行为，大学生买票和普通成年人买票就不同，大学生可以买学生票，成年人得买全票
>
> 抢红包，每个人抢的金额可能都不一样，但是行为（抢红包）都是一样的
>
> 即同一件事给不同人做有不同结果

# 🌲构成多态的条件

- 重写虚函数
- 指针或者引用调用

> 这里出现了一个新的概念，虚函数

![image-20220403125800026](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220403125800026.png)

> 如果存在多态，说明存在虚表，要知道结果调用的父类的函数，还是子类的函数就看具体new的对象是谁

## 🌴重写

###🌵什么是重写/覆盖？

用于类的继承中，函数名，返回值，函数参数的个数以及类型都相同，只有函数体不同的两个函数构成重写，重写也叫做覆盖。

![image-20220403125441695](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220403125441695.png)

## 🌴虚函数

### 🌵什么是虚函数

在一个类里面被关键字virtual修饰的函数

> virtual这个关键字也用于虚继承解决菱形继承问题

```c++
class Test
{
public:
	virtual void func()//virtual修饰的函数
	{
		;
	}
};
```

### 🌵什么是虚表

将虚函数和虚函数地址映射起来的一张表

> 简单说就是这张表每个函数对应其自己的地址

![image-20220403231629408](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220403231629408.png)

### 🌵虚函数与普通函数的不同

- 类里如果存在虚函数，那就会生成一张虚表，实例化出的对象里面会有一个虚表指针指向虚表

- 虚函数在运行时是动态绑定的，普通函数是静态绑定的

> 动态绑定是啥？可以理解为运行时根据具体对象调用相应的函数，换句话说，new的是谁就找谁
>
> 静态绑定，把函数调用与响应调用所需的代码结合的过程称之为静态绑定，因为普通函数不存在多态一说，一般编译期间就可确定该对象调用的是哪个函数

### 🌵虚函数知识点

- **inline函数不可能是虚函数**，虚函数动态绑定，而inline在编译时就展开了，当然inline对编译器来说只是一种建议
- **虚函数的调用得通过this指针**，类构造时生成虚表指针和虚表，通过this指针访问虚表指针，进而访问虚表调用虚函数达到多态功能
- **static函数不能是虚函数**，因为static是静态绑定，并且static没有this指针，访问不了虚表
- **构造函数不能是虚函数**，首先是没必要，~~构造函数多态，多少离谱了点~~，此外也实现不了，虚表都是存在对象里的，构造函数是在对象创建时调用的，对象都还没构建出来，哪来的虚表，此外，创建对象就要调用构造函数，虚函数是在运行时确定对象类型的，此时如果对象都没创建好那编译器就不知道对象类型是啥，就发生矛盾了。
- **建议把父类的析构函数声明为虚函数**，如果我们不把父类的析构函数声明为虚函数，那么析构函数看做普通函数，是静态绑定的，下面存在这么一种场景：基类指针接受了子类的地址，析构基类指针时因为析构函数是普通函数，根据指针类型调用的就是基类的析构函数，此时子类就未被析构，而如果我们把析构函数声明为虚函数，那我们析构父类指针时会去虚表里找到派生类的析构函数，继承那一章我们知道只要析构函数构成多态就可以实现只要析构子类必定也会析构父类。
- **父类声明了一个函数是虚函数，那么子类重写的函数默认就是虚函数**，即父类写了虚函数 ，子类可以不写（最好是写上）
- 虚表在对象存储的前4或8个字节（根据这个可以打印虚表）

>  随笔记录:设计一个不能被继承的类:把基类的构造函数设为私有
>
> 同名函数不是重写就是重定义/隐藏

### 🌵final与override

final:被final修饰的类不能被继承，被final修饰的函数不能被重写

override:检查函数是否是重写，不是的话编译器报错

#### 🍃final

```c++
class Base final 
{

};
class Derive :public Base//err
{

};
int main()
{
	return 0;
}
```



![image-20220403232213024](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220403232213024.png)

```c++
class Base 
{
public:
	virtual void print() final {}
};
class Derive :public Base
{
public:
	virtual void print(){}//err
};
int main()
{

	return 0;
}
```



![image-20220403232457634](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220403232457634.png)

#### 🍃override

```c++
class Base 
{
public:
	virtual void print()  {}
};
class Derive :public Base
{
public:
	virtual void print(int) override{}//err
};
int main()
{

	return 0;
}
```



![image-20220403232743665](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220403232743665.png)

### 🌵抽象类

抽象类，也叫接口类，即包含纯虚函数的类

```cpp
virtual void Drive() =0;//纯虚函数，不需要实现，一般作为基类供子类继承
```

> 虚函数的继承是一种接口继承,普通函数的继承是一种实现继承

- 包含纯虚函数的类是抽象类
- 抽象类不能实例化出对象
- 继承抽象类就必须重写纯虚函数，如果没有重写也是抽象类，也不能实例化出对象

```c++
class Base
{
public:
	virtual void print()=0 ;
};
class Derive :public Base
{
public:
	virtual void print()
	{
		;
	}
};
int main()
{
	//Base b;
	Derive d;
	return 0;
}
```

![image-20220403233858882](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220403233858882.png)

![image-20220403233806937](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220403233806937.png)

### 🌵打印虚表

#### 🍃虚表的存在

```c++
class Base
{
public:
	virtual void one(){};
	virtual void two(){};
	virtual void three(){};
private:
	int a;
};
class Derive :public Base
{
public:

};
int main()
{
	Base b;
	Derive d;
	return 0;
}
```

![image-20220403234759001](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220403234759001.png)



![image-20220403235308421](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220403235308421.png)

> - 计算一个类的大小，如果这个类中有虚函数，大小需要加上一个虚表指针（4/8个字节）
>
> - 虚基表指针与虚表指针不同（虚函数表指针），虚基表是解决菱形继承时的一个东西
> - 虚函数被编译后和普通函数一样放在代码段  只是函数地址被放到虚表中
> - 一个类的所有对象共享一张虚表，不管是否完成重写

#### 🍃打印

```c++
class Base
{
public:
	virtual void one(){ cout << "Base::one" << endl; }
	virtual void two(){ cout << "Base::two" << endl; }
	virtual void three(){ cout << "Base::three" << endl; }
private:
	int a;
};
class Derive :public Base
{
public:
	virtual void one(){ cout << "Derive::one" << endl; }
	virtual void two(){ cout << "Derive::two" << endl; }
	virtual void three(){ cout << "Derive::three" << endl; }
};

typedef void(*VPTR)();
void Print(VPTR vptr[])
{
	for (int i = 0; vptr[i] != nullptr; i++)
	{
		printf("vptr[%d]:%p -> ", i, vptr[i]);
		vptr[i]();
	}
	cout << endl;
}
int main()
{
	Base b;    
	Print((VPTR*)(*((int*)&b)));
	Derive d;
	Print((VPTR*)(*((int*)&d)));
	return 0;
}
//              这里找到虚表
//&d->(int*)&d->*(int*)&d->(VPTR*)(*(int*)(&d))
```

![image-20220404004703867](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220404004703867.png)

### 🌵虚表与多继承

```c++
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
class Derive:public Base1,public Base2
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
	Print((VPTR*)(*(int*)((char*)&d + sizeof(Base1))));
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
```

> [高清图片](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220404183509696.png)

![image-20220404183509696](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220404183509696.png)

> 由于编译器的一些原因，打印虚表前需要清理解决方案，不然可能导致程序崩溃..
>
> ![image-20220404183903478](https://pic-1304888003.cos.ap-guangzhou.myqcloud.com/img/image-20220404183903478.png)

**小结**

- 多继承会使派生类中不止一张虚表

- 派生类未重写的虚函数放在第一张虚表中（这个第一张表的第一是继承的顺序，不是声明）
- 基类存在相同的函数，调用可能会导致访问不明确

> 菱形继承 菱形虚拟继承的虚表相关知识这里暂不讨论

## 🌴补充

- 为什么多态需要指针或者引用？

如果传对象也可以实现多态 ，那就会发生一种情况，子类切片后赋给父类，改变了父类的虚函数表，那父类都不知道自己调用的虚函数是自己的还是子类的。

- 指针和引用调用不会管虚表是子类还是父类的，调用虚函数统一去访问头四个/八个字节，即去虚表里找，从另一个角度看，虚表这种处理方式为指针调用虚函数提供了一种统一的方式
- 虚函数放在代码，函数地址放在虚表，那虚表呢？常量区（VS下验证地址离常量区最近）
- 对象访问普通函数比访问虚函数的效率略微高一点，因为不用寻址

# 🌲总结

- 多态，不同人做同一件事有不同的效果
- 多态的机制实现是虚函数重写+指针/引用调用，因为指针/引用调用提供了一种统一的方式去访问虚表（寻址

> 后面会记录一篇题目合集





















