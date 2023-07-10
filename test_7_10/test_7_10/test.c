#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


// for训话和do while训话


// 在屏幕上打印1-10；
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

// break 终止整个break所在的整个循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);  // 1 2 3 4
//	}
//
//	return 0;
//}


// continue跳过本次循环continue后面的代码，执行下一次循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);  // 1 2 3 4 6 7 8 9 10
//	}
//
//	return 0;
//}



/*
建议：
1、不可在for循环体内修改循环变量，防止for循环失去控制
2、建议for循环语句的循环变量的取值采用“前闭后开区间”的写法

*/

// for循环的判断部分省略意味着判断会恒成立
//int main()
//{
//	for (;;)
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}


// 省略初始化所带来的后果
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("haha\n");
//		}
//	}
//
//	return 0;
//}


//C99语法和c++语法才支持的这种写法
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


// 使用多余一个变量控制循环
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}



// do while循环

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}

// break
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}


// continue
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i); // 1 2 3 4 死循环
//		i++;
//	} while (i <= 10);
//}


