#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1; // 假设数组已经有序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; // 表示数组还不是有序状态
//			}
//		}
//		if (flag)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// 冒泡排序
//	bubble_sort(arr, sz);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



// 库函数qsort()
/*

void qsort (void* base,   // 待排序数据的起始位置
			size_t num,	  // 待排序数据元素的个数
			size_t size,  // 待排序数据元素的大小
			int (*compar)(const void*,const void*));  // 比较函数

*/

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



// 测试使用qsort来排序结构体数据
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////int cmp_stu_by_age(const void* e1, const void* e2)
////{
////	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
////}
////
////void test1()
////{
////	struct Stu s[] = { {"zhangsan", 15}, {"lisi", 30}, {"wangwu", 25} };
////	int sz = sizeof(s) / sizeof(s[0]);
////	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
////}
//
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e2)->name, ((struct Stu*)e1)->name);
//}
//void test2()
//{
//	struct Stu s[] = { {"zhangsan", 15}, {"lisi", 30}, {"wangwu", 25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}




//------------------------------------------------------------
// 将冒泡排序改造成能够排序任何类型的
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int (*cmp) (const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1; // 假设数组已经有序
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				// 交换
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0; // 表示数组还不是有序状态
			}


		}

		if (flag)
			break;
	}
}

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	// 冒泡排序
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
};

int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}



int main()
{
	struct Stu s[] = { {"zhangsan", 15}, {"lisi", 30}, {"wangwu", 25} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_by_name);
	return 0;
}