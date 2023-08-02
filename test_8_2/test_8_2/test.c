#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 求最小公倍数 方法一
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int min = a > b ? a : b;
//
//	while (1)
//	{
//		if (min % a == 0 && min % b == 0)
//		{
//			break;
//		}
//		min++;
//	}
//
//	printf("min = %d\n", min);
//
//
//	return 0;
//}


// 求最小公倍数 方法二

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int i = 1;
//
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d\n", a * i);
//
//
//	return 0;
//}

// 倒置字符串
/*
I like beijing.   ---- >  beijing. like I

*/
//#include <string.h>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//
//	int len = strlen(arr);
//
//	// 整体倒置字符串
//	reverse(arr, arr + len - 1);
//
//	// 然后再倒置每个单词
//	char* start = arr;
//
//	char* end = start;
//	while (*start)
//	{
//
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//			end++;
//		start = end;
//	}
//
//	printf("%s\n", arr);
//	return 0;
//}


// 检查系统是大端字节序还是小端字节序
// 返回1是小端,返回0是大端
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}