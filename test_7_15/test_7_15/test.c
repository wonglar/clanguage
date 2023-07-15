#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 函数的声明和定义

#include "add.h"
// #pragma comment(lib, "add.lib");  // 包含动态库

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	// 加法
	int sum = add(a, b);
	printf("%d\n", sum);

	return 0;
}


