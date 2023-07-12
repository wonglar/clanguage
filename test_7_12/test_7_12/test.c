#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	for (i = 2; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


// 计算1！+2！+3！+...+10!

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

// 第二种方法
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}



// 在一个有序数组中查找k
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]); // 元素的个数
//
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		//int mid = left + (right - left) / 2;  // 不会有溢出问题
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有找到!\n");
//	}
//
//	return 0;
//}


