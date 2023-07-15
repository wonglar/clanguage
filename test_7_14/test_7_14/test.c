#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 写一个函数判断一个数是不是素数
// 打印100-200之间的素数
//int main()
//{
//	int count = 0;  // 统计个数
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1; // 假设是素数
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			count++;
//			printf("%d ", i);
//		}
//			
//	}
//
//	printf("\n100-200之间一共有 %d 个素数。\n", count);
//
//	return 0;
//}


// 打印100-200之间的素数 (优化)
//#include <math.h>
//int main()
//{
//	int count = 0;  // 统计个数
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1; // 假设是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//
//	printf("\n100-200之间一共有 %d 个素数。\n", count);
//
//	return 0;
//}


// 写一个函数判断一个数是不是素数
//#include <math.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int count = 0;  // 统计个数
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\n100-200之间一共有 %d 个素数。\n", count);
//
//	return 0;
//}




// 打印1000-2000之间的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}



// 写一个函数判断一年是不是闰年
//int is_leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}




// 写一个函数，实现一个整型数组的二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 找到返回下标，找不到返回-1
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}




// 写一个函数，每调用一次这个函数，就会将num增加1
//void ADD(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//	return 0;
//}