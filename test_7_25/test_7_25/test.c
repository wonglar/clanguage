#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


// 逻辑操作符
/*
&& 逻辑与
|| 逻辑或
*/



// 条件操作符  表达式1 ? 表达式2 : 表达式3

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}




// 逗号表达式,从左向右依次计算,整个表达式的结果是最后一个表达式的结果




// 下标引用操作符,函数调用操作符,结构访问操作符


//--------------------------------------------------------------------------


 // 小乐乐上课需要走n阶台阶，因为它的腿比较长，所以每次可以选择走一个台阶或者走两个台阶，那么他一共有多少种做法？
// 输入包含一个整数n（1<=n<=30）;输入一个整数，即小乐乐可以走的方法数

//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//
//	int m = fib(n);
//
//	printf("%d\n", m);
//
//	return 0;
//}



// 序列中删除指定数字
/*
输入：6
	 1 2 3 4 5 9
	 4
输出：1 2 3 5 9
*/

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[6];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	// 要删除的数字
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



// 最高分与最低分之差
//int main()
//{
//	// n个成绩，不会大于10000
//	int n = 0;
//	scanf("%d", &n);
//
//	// 输入n个成绩
//	int i = 0;
//	int arr[5];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	// 求最高分
//	int max = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	// 求最低分
//	int min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] < min)
//			min = arr[i];
//	}
//
//	printf("%d", max - min);
//	return 0;
//}

// 优化
//int main()
//{
//	// n个成绩，不会大于10000
//	int n = 0;
//	scanf("%d", &n);
//
//	// 输入n个成绩
//	int i = 0;
//	int arr[5];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	// 求最高分
//	// 求最低分
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//
//	printf("%d", max - min);
//	return 0;
//}


// 再优化,在输入的时候就找最低和最高分
//int main()
//{
//	// n个成绩，不会大于10000
//	int n = 0;
//	scanf("%d", &n);
//
//	// 输入n个成绩
//	int i = 0;
//	int arr[5];
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//
//	printf("%d", max - min);
//	return 0;
//}