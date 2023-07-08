#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 操作符


//int main()
//{
//	int a = 7 / 2;
//	// 取模操作符的两端只能是整数
//	int b = 7 % 2;
//	float c = 7 / 2.0;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%.2f\n", c);
//	return 0;
//}


// 单目操作符-只有一个操作数的操作符
//int main()
//{
//	/*int flag = 2;
//	if (!flag)
//	{
//		printf("haha\n");
//	}*/
//
//	//int a = -5;
//	//int b = -a;
//	//printf("%d\n", b);
//
//
//	// sizeof是一个操作符，而且是一个单目操作符
//	//int a = 10;
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof 10);
//	////printf("%d\n", sizeof int);  // 语法不支持
//	//printf("%d\n", sizeof(int));
//
//	//int arr[10] = {0};
//	//printf("%d\n", sizeof(arr));  // 计算的是整个数组的大小，单位是字节
//	//printf("%d\n", sizeof(arr[0])); // 数组第一个元素的大小
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));  // 数组元素的个数
//
//	//int a = 10;
//	////int b = a++;  // 后置++，先使用后++
//	//int b = ++a;  // 前置++，先++，后使用
//
//
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//
//
//	int a = (int)3.14;  
//	printf("%d\n", a);
//
//	return 0;
//}


// 关系操作符
//int main()
//{
//	int a = 10;
//	/*if (a = 3)
//	{
//		printf("haha\n");
//	}*/
//
//	if (a == 3)
//	{
//	printf("haha\n");
//	}
//	return 0;
//}


// 逻辑操作符  && 逻辑与， || 逻辑或
//int main()
//{
//	/*int a = 0;
//	int b = 20;
//	if (a && b)
//	{
//		printf("hello\n");
//	}*/
//
//	int a = 0;
//	int b = 20;
//	if (a || b)
//	{
//	printf("hello\n");
//	}
//
//	return 0;
//}


// 条件操作符(三目操作符) exp1 ? exp2 : exp3;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = a > b ? a : b;
//	printf("%d\n", ret);
//	return 0;
//}


// 逗号表达式
// 从左向右依次计算，整个表达式的结果是最后一个表达式的结果。

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("d = %d\n", d);
//	return 0;
//}


// 下标引用操作符[] , 函数调用操作符()
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int n = 3;
//	arr[n] = 44;
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int sum = add(2, 3);  // add 2 3都是()的操作数
//	printf("sum = %d\n", sum);
//	return 0;
//}


// typedef 类型重命名
//typedef unsigned int u_int;
// 
// 
// 
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num1 = 10;
//	u_int num2 = 20;
//
//	struct Node n1;
//	Node n2;
//	return 0;
//}


// static 关键字
// 1.修饰局部变量 2.修饰全局变量 3.修饰函数
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


//void test()
//{
//	// static 修饰局部变量的时候，局部变量出了作用域，不销毁，本质上，static修饰局部变量，改变了变量的存储位置，影响了变量的生命周期，生命周期变长，和程序的生命周期一样。
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}



// static修饰全局变量
// static 修饰全局变量的时候这个全局变量的外部链接属性就变成了内部链接属性，其他源文件就不能使用到这个全局变量了
// 声明外部符号
//extern int g_val;
//
////int a = 200;
//static int a = 200;
//
//int main()
//{
//	printf("a = %d\n", a);
//	//printf("%d\n", g_val);
//	return 0;
//}

// static 修饰函数

//extern int add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = add(a, b);
//	printf("%d\n", z);
//	return 0;
//}


//int main()
//{
//	// 寄存器变量
//	register int num = 10; // 建议放到寄存器中
//	return 0;
//}