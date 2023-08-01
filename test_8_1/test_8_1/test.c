#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 字符串逆序
//#include <string.h>
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//
//	// 逆序
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}



// 计算求和
/*
2  5
2 + 22 + 222 + 2222 + 22222

*/
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


// 求出0-100000之间的所有"水仙花数"并输出
//#include <math.h>
//int main()
//{
//	int i = 0;
//	// 1.产生0-100000之间的数字
//	for (i = 0; i <= 100000; i++)
//	{
//		// 2.是几位数
//		int n = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			n++;
//			tmp /= 10;
//		}
//		// 3.得到每一位数,计算它的n次方之和
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//
//		if (sum == i)
//			printf("%d ", i);
//	}
//
//	return 0;
//}


// 打印菱形
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int j = 0;
//	// 打印上半部分
//	for (i = 0; i < n; i++)
//	{
//		// 打印空格
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		// 打印*号
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	// 打印下半部分
//	for (i = 0; i < n - 1; i++)
//	{
//		// 打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		// 打印*号
//		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}


// 喝汽水
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//
//	// 置换
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	if (money > 0)
//	{
//		printf("%d", total);
//	}
//	else
//	{
//		printf("%d", 0);
//	}
//	return 0;
//}



// 二分查找
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7; // 要查找的数
	int sz = sizeof(arr) / sizeof(arr[0]);  // 元素个数

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = left + 1;
		}
		else
		{
			printf("找到了,下标是:%d\n", mid);
			break;
		}
	}

	if (left > right)
	{
		printf("未找到\n");
	}

	return 0;
}