#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 字符指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//
//	printf("%c\n", ch);
//
//	return 0;
//}

// 以上是我们常规写的字符指针


//int main()
//{
//	char* p = "abcdef"; // 把字符串首字符a的地址赋值给了p
//	printf("%s\n", p);
//	printf("%p\n", p);
//	return 0;
//}


//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("p1==p2\n");
//	}
//	else
//	{
//		printf("p1 != p2");
//	}
//
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//
//	return 0;
//}



// 指针数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1, arr2, arr3 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(*(parr + i) + j));
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0; 
//}



// 数组指针

// 数组名的讨论
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	int(*parr)[10] = &arr;
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//	return 0;
//}



//void print(int(*p)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr, 3, 5);
//	return 0;
//}


// 函数指针 - 指向函数的指针

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//
//	printf("%p\n", &add);
//	printf("%p\n", add);
//
//	int (*pf)(int, int) = &add;
//	int ret = (*pf)(3, 5);
//	printf("%d\n", ret);
//	ret = (******pf)(10, 5);
//	printf("%d\n", ret);
//
//	/*
//	ret = add(3, 4);
//	int (*pf)(int, int) = add;  pf也就相当于 add
//	所以, ret = pf(3,4)
//	*/
//	ret = pf(2, 5);
//	printf("%d\n", ret);
//	return 0;
//}



//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = add;
//	int ret = pf(20, 30);
//	printf("%d\n", ret);
//	return 0;
//}


