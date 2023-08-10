#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 冒泡排序函数
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	// 趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1; // 假设已经有序
//		// 一趟冒泡排序的过程
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; // 数组还不是有序的
//			}
//		}
//		if (flag)
//			break;
//	}
//}
//
//// 冒泡排序
//int main()
//{
//
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}