#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 结构体


// 人
// 声明的结构体类型 struct Peo
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int height;
//};


//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int height;
//}p1, p2;   // p1和p2是使用struct Peo结构类型创建的2个变量
//// p1和p2是两个全局结构体变量




//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int height;
//};
//
//int main()
//{
//	struct Peo p1 = {0};
//	return 0;
//}


//-----------------------------------------------

// 写一个函数返回参数二进制中1的个数
//int count_num_of(unsigned int n) // 使用unsigned对于负数也适用
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


//int count_num_of(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//int count_num_of(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num); 
//	int count = count_num_of(num);
//	printf("cont = %d\n", count);
//	return 0;
//}




