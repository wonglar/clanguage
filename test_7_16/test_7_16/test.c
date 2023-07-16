#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 函数递归

// 接收一个整型值，按照循序打印它的每一位
// 例如：输入：1234 输出：1 2 3 4

//void print(unsigned int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ",num % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;  
//}



// 求字符串的长度
//#include <string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

// 求字符串的长度，不允许创建临时变量
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//} 
//
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


// 求n的阶乘
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}

//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 2; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}



// 求第n个菲波那切数列
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


// 使用迭代求菲波那切数列

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}




