#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 数组名是什么？
// 数组名确实能表示首元素的地址
// 但是有两个例外，1、sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
// 2、&数组名，这里的数组名也表示的是整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	int n = sizeof(arr); 
//	printf("%d\n", n);   // 40
//
//	return 0;
//}


// 二维数组的数组名
//int main()
//{
//	int arr[3][4] = {0};
//	/*int sz = sizeof(arr);
//	printf("%d\n", sz);*/
//
//	arr; // 二维数组的数组名也表示数组首元素的地址
//
//	return 0;
//}




