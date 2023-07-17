#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// 函数作业


// 写代码将三个整数按从大到小输出
//void swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	// 输入
//	scanf("%d %d %d", &a, &b, &c);
//	// 调整
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

// 写一个代码打印1-100之间的所有3的倍数
//int main()
//{
//	int i = 0;
//	/*for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}*/
//
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);	
//	}
//	return 0;
//}


// 给定两个数，求两个数的最大公约数(暴力求解法)
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//	
//	int max = a > b ? b : a;
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			break;
//		}
//		max--;
//	}
//	printf("max = %d\n", max);
//	 
//
//	return 0;
//}


// 辗转相除法求最大公约数 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}



// 最小公倍数 暴力求解法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a > b ? a : b;
//	while (1)
//	{
//		if (min % a == 0 && min % b == 0)
//		{
//			break;
//		}
//		min++;
//	}
//	printf("min = %d\n", min);
//
//	return 0;
//}


// 最小公倍数 两个数相乘除以最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int min = 0;
//	scanf("%d %d", &a, &b);
//	int ret = a * b;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	min = ret / b;
//	printf("min = %d\n", min);
//	return 0;
//}



// 编写程序数一下1-100之间所有的整数中出现多少个数字9
// 9 19 29 39 49 59 69 79 89 99  
// 90 91 92 93 94 95 96 97 98 99
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		// 个位为9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		// 十位为9
//		if (i / 10 == 9)
//		{
//			count++;
//		}	
//	}
//	printf("%d\n", count);
//	return 0;
//}

// 计算1/1-1/2+1/3-1/4+1/5....+1/99-1/100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}


// 求10个整数中的最大值


// 打印九九乘法表


// 实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

