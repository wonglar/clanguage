#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// memcpy 内存拷贝
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	int arr2[10] = {0};
//
//	memcpy(arr2, arr1, 20);
//
//	
//
//	return 0;
//}


// 模拟实现memcpy
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 0 };
//
//	my_memcpy(arr2, arr1, 20);
//
//
//
//	return 0;
//}




//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 0 };
//	memmove(arr1+2, arr1, 20);
//	return 0;
//}


// 模拟实现memmove
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	if (src < dest)
//	{
//		// 后->前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	else
//	{
//		// 前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;  
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 0 };
//	my_memmove(arr2, arr1 + 2, 20);
//	return 0;
//}



// memset
// 内存设置函数
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x', 6);
//
//}


//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 2);
//
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d", &input);
//
//	while (input)
//	{
//		int bit = input % 10;
//		if (bit % 2 == 1)
//		{
//			bit = 1;
//		}
//		else
//		{
//			bit = 0;
//			
//		}
//		sum += bit * (int)pow(10, i);
//		i++;
//		input /= 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		// 打印空格空格
//		for (j = i+1; j < n; j++)
//		{
//			printf("  ");
//		}
//		// 打印*空格
//		for (j = 0; j < i+1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	double price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//
//	scanf("%lf %d %d %d", &price, &m, &d, &flag);
//
//	if (m == 11 && d == 11)
//	{
//		price = price * 0.7 - flag * 50;
//	}
//	else if (m == 12 && d == 12)
//	{
//		price = price*0.8 - flag * 50;
//	}
//
//	if (price < 0.0)
//	{
//		printf("%.2lf\n", 0.0);
//	}
//	else
//	{
//		printf("%.2lf\n", price);
//	}
//
//	return 0;
//}




//int main()
//{
//	// 00000000 00000000 00000000 11001000
//	// 11001000
//	unsigned char a = 200;
//	// 00000000 00000000 00000000 01100100
//	// 01100100
//	unsigned char b = 100;
//
//	unsigned char c = 0;
//	// 00000000 00000000 00000000 11001000
//	// 00000000 00000000 00000000 01100100
//	// 00000000 00000000 00000001 00101100  
//	// 00101100
//	c = a + b;
//
//	printf("%d %d\n", a + b, c); //300 44
//
//	return 0;
//}



