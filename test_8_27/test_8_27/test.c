#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int arr[10] = { 0 };
//
//	// 动态内存开辟
//	int *p = (int*)malloc(sizeof(arr));
//
//	if (p == NULL)
//	{
//		perror("内存开辟失败");
//		return 1;
//	}
//
//	// 使用
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	// 开辟10个整型空间
//	int *p = (int*) calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("");
//		return 1;
//	}
//
//	// 打印
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	int *p = (int*)malloc(40);
//
//	if (NULL == p)
//	{
//		perror("内存开辟失败");
//		return 1;
//	}
//
//	// 使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//	// 扩容
//	int *ptr = realloc(p, 80);
//	if (ptr != NULL)
//		p = ptr;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	free(p);
//	p = NULL;
//}
// realloc(NULL, 40);  相当于 malloc(40);

