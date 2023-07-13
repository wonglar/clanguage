#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 猜数字小游戏
// 1.产生一个1-100之间的随机数
// 2.猜数字
// 3.判断

//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("*******    1.play   *******\n");
//	printf("*******    0.exit   *******\n");
//	printf("***************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	// 产生随机数1-100
//	int ret = rand() % 100 + 1;
//	
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


// 写一个函数找出两个整数的最大值

//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = get_max(a, b);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


// 写一个函数可以交换两个整型变量的内容
//void swap(int * pa, int * pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("交换前：a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//
//	return 0;
//}