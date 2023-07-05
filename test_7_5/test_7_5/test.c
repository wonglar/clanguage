<<<<<<< HEAD
﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
// 字符串  转义字符 注释
//int main()
//{
//	// C语言中没有字符串类型
//	//"abcdef";  // 字符串字面值
//	char arr1[] = "abcdef";
//	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	//char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}


// 转移字符
// %d 打印整数
// %c 打印字符
// %s 打印字符串
// %f 打印float类型的数据
// %lf 打印double类型的数据
// %zu 打印sizeof的返回值

//int main()
//{
//	//printf("abcn\n");
//	//printf("abc\n");
//
//	//printf("abcd0efg\n");
//	//printf("abcd\0efg\n");
//	//printf("abcd\\0efg\n");
//
//	// 三字母词
//	// ??)-->]
//	// ??(-->[
//	//printf("(are you ok??)\n");
//	//printf("(are you ok\?\?)\n");
//
//	//printf(""abc"\n");
//	//printf("\"abc\"\n");
//
//	//printf("c:\test\test.c\n");
//	//printf("c:\\test\\test.c\n");
//
//	//printf("%c\n", ''');
//	//printf("%c\n", '\'');
//
//	//printf("%c\n",'\a');  // 警告字符， 蜂鸣
//
//	//printf("abcde\n");
//	//printf("a\bcde\n");  // \b  退格符
//
//	/*printf("abcdef\n");
//	printf("abc\rdef\n");
//	printf("hello wo\rld\n");*/
//
//
//	//printf("%c\n", '\130');
//	//printf("%c\n", '\6');
//
//	//printf("%c\n", '\x70');
//
//	//printf("%d\n", strlen("c:\test\628\test.c"));  // 14
//	//printf("%d\n", strlen("c:\test\0188\test.c"));  // 15
//
//
//
//	return 0;
//}


// 注释
//1.注释可以梳理程序
//2.对复杂的代码进行解释说明
//3.写代码的时候写注释，是帮助自己，也是帮助别人


//int main()
//{
//	// C语言的注释风格
//	/*int a = 10;
//	int b = 20;*/
//
//	// c++的注释风格
//	//int c = 30;
//
//	// C语言的注释风格无法进行嵌套注释
//	/*int d = 50;*/
//	return 0;
//}


//===================================================

// 选择语句 循环语句

//int main()
//{
//	int age = 0;
//	printf("请输入您的年龄：");
//	scanf("%d", &age);
//
//	if (age > 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int line = 0;
//
//	while (line < 20000)
//	{
//		printf("写代码\n");
//		line++;
//	}
//
//	if (line >= 20000)
//	{
//		printf("nice\n");
//	}
//	else
//	{
//		printf("继续加油！\n");
//	}
//	return 0;
//}



// 求两个任意整数和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	// 输入
//	scanf("%d %d", &num1, &num2);
//	// 求和
//	sum = num1 + num2;
//
//	// 输出
//	printf("sum = %d\n", sum);
//
//
//	return 0;
//}


// 封装一个函数来进行求和

// 求和的函数
int add(int x, int y)
{
	return x + y;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	// 输入
	scanf("%d %d", &num1, &num2);
	// 求和
	sum = add(num1, num2);
	// 输出
	printf("%d\n", sum);
=======
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
// �ַ���  ת���ַ� ע��

int main()
{
	// C������û���ַ�������
	//"abcdef";  // �ַ�������ֵ
	char arr1[] = "abcdef";
	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	//char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0'};
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
>>>>>>> db6a2cea7e6eae2a89bad5dc58bcb5cf7645eabd

	return 0;
}