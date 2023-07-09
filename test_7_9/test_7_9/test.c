#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 分支和循环语句
// C语言是结构化的程序设计语言
// 顺序结构 选择结构 循环结构


// 分支结构
/*
if(表达式)
	语句;


if(表达式)
	语句1;
else
	语句2;

// 多分支
if(表达式1)
	语句1;
else if(表达式2)
	语句2;
else
	语句3;

*/
//int main()
//{
//	/*if (3 == 3)
//		printf("Yes\n");*/
//
//	//int age = 10;
//	//if (age > 18)
//	//	printf("成年\n");
//
//	//int age = 10;
//	//if (age < 18)
//	//{
//	//	printf("未成年\n");
//	//}
//	//else
//	//{
//	//	printf("成年\n");
//	//}
//
//
//	// error
//	//int age = 10;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//	printf("不能饮酒\n");
//	//else
//	//	printf("成年\n");
//
//
//	//int age = 10;
//	//if (age < 18)
//	//{
//	//	printf("未成年\n");
//	//	printf("不能饮酒\n");
//	//}
//	//else
//	//	printf("成年\n");
//
//
//	//int age = 0;
//	//while (1)
//	//{
//	//	printf("请输入年龄（输入0退出）:");
//	//	scanf("%d", &age);
//	//	if (age == 0)
//	//		return;
//	//	if (age < 18)
//	//		printf("青少年\n");
//	//	else if (age < 28)
//	//		printf("青年\n");
//	//	else if (age < 40)
//	//		printf("中年\n");
//	//	else if (age < 60)
//	//		printf("壮年\n");
//	//	else if (age <= 100)
//	//		printf("老年\n");
//	//	else
//	//		printf("老寿星\n");
//	//}
//
//
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//	else
//	//		printf("haha\n");
//	//else
//	//	printf("heihei\n");
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	if (5 == a)
//	{
//		printf("Yes\n");
//	}
//
//	return 0;
//}



// 判断一个数是否是奇数
//int isJiShu(int num)
//{
//	if (num % 2 == 1)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = isJiShu(num);
//	if (ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}



// 输出1-100之间的奇数
//int main()
//{ 
//	int num = 1;
//	//while (num <= 100)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		printf("%d ", num);
//	//	}
//	//	num++;
//	//}
//
//	while (num <= 100)
//	{
//		printf("%d ", num);
//		num += 2;
//	}
//	return 0;
//}



// switch语句
/*
switch(常量表达式)
{
	case 整型常量表达式:
		break;
}


*/

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入有误！\n");
//		break;
//	}
//
//	return 0;
//}



// 循环语句

// 打印1-10的数字
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


// 死循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}

// while循环中
// break是用于永久的终止训话
// continue跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断

