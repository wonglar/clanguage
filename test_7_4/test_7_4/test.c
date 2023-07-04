#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 数据类型

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

// C语言规定：sizeof(long) >= sizeof(int)


//int main() {
//
//	int age = 20;
//	double price = 66.6;
//	return 0;
//}

// 变量和常量的概念
// 变量分为： 局部变量和全局变量

// 局部变量 - {}内部定义的变量
// 全局变量 - {}外部定义的变量

//int b = 20;  // 全局变量
//int main()
//{
//	//short age = 20; // 年龄
//	//int height = 180; // 身高
//	//float weight = 88.5; // 体重
//
//	int a = 10; // 局部变量
//	return 0;
//}


//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a);// 当全局变量和局部变量名字相同的情况下，局部优先。
//	// 但是建议不要将全局和局部变量的名字写的一样
//	return 0;
//}


// 写一个代码，计算2个整数的和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;  // 初始化
//	int sum = 0;
//	// 输入2个整数
//	scanf("%d %d", &num1, &num2);
//	// 求和
//	sum = num1 + num2;
//	// 输出
//	printf("num = %d\n", sum);
//	return 0;
//}


// 变量的作用域
// 1.局部变量
// 局部变量的作用域就是变量所在的局部范围
// 2.全局变量
// 全局变量的作用域是整个工程

// 变量的生命周期
// 局部变量：进入作用域生命周期开始，出作用域生命周期结束
// 全局变量：整个程序的生命周期

//int a = 10;
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	/*{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);*/
//
//
//	/*int a = 10;
//	{	
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);*/
//
//
//	test();
//	{
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//	return 0;
//}



// 常量
// 1.字面常量
// 2.const修饰的常变量
// 3.#define定义的标识符常量
// 4.枚举常量


//#define MAX 10
//#define STR "abcd"
//int main()
//{
//	// 字面常量
//	/*3.14;
//	58;
//	'a';
//	100;*/
//
//	//const int a = 10;  // 在C语言中，const修饰a，本质还是变量，但是不能修改其值，具有常量的属性
//	//a = 20;  // 无法修改
//
//	//const int n = 20;
//	//int arr[n] = { 0 };  // error
//
//
//	//int arr[MAX] = { 0 };
//	//MAX = 20;// error
//	/*printf("%d\n", MAX);
//	printf("%s\n", STR);*/
//
//	//enum color
//	//{
//	//	RED,
//	//	GREEN,
//	//	BLUE
//	//};
//
//	//enum color c = GREEN;
//	//printf("%d\n", c);
//	//BLUE = 3;  // error
//	return 0;
//}