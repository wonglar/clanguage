#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 函数指针的用途

//void menu()
//{
//	printf("*********************************\n");
//	printf("******   1.add     2.sub   ******\n");
//	printf("******   3.mul     4.div   ******\n");
//	printf("******        0.exit       ******\n");
//	printf("*********************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入有误,请重新输入\n");
//			break;
//		}
//
//	} while (input);
//}




// 函数指针的应用
//void menu()
//{
//	printf("*********************************\n");
//	printf("******   1.add     2.sub   ******\n");
//	printf("******   3.mul     4.div   ******\n");
//	printf("******        0.exit       ******\n");
//	printf("*********************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入有误,请重新输入\n");
//			break;
//		}
//
//	} while (input);
//}



// 函数指针数组
//void menu()
//{
//	printf("*********************************\n");
//	printf("******   1.add     2.sub   ******\n");
//	printf("******   3.mul     4.div   ******\n");
//	printf("******        0.exit       ******\n");
//	printf("*********************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	int (*parr[5])(int, int) = { 0,add, sub, mul, div };
//
//	do
//	{
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入有误,请重新输入!\n");
//		}
//
//	} while (input);
//
//}




//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//// 指向函数指针数组的指针
//int main()
//{
//	int (*parr[4])(int, int) = { add, sub, mul, div }; // 函数指针数组
//
//	int (*(*pparr)[4])(int, int) = &parr;
//
//	return 0;
//}