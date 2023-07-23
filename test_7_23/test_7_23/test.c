#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

// 操作符详解

// 算数操作符：+ - * / %
//int main()
//{
//	printf("%d\n", 5 % 3);
//	printf("%d\n", 5 % -3);
//	printf("%d\n", -5 % 3);
//	return 0;
//}



// 移位操作符  左移右移只针对整数
//int main()
//{
//	int a = 7;
//	int b = a << 2;
//	printf("a = %d\n", a);  // 7
//	printf("b = %d\n", b);  // 28
//	return 0;
//}

//int main()
//{
//	int a = 8;
//	printf("%d %d\n", a >> 3, a );  // 1 8
//	return 0;
//}

//int main()
//{
//	printf("%d\n", -7 << 2);
//	return 0;
//}


// 右移操作符分为：
// 算数右移：右边丢弃，左边补原符号位
// 逻辑右移(无符号右移)：右边丢弃，左边补0
int main()
{
	//int a = 7;
	//printf("%d %d\n", a >> 1, a);  // 3

	int a = -7;
	printf("%d\n", a >> 1); // -4 // vs采用的是算数右移，左边补原符号位
	 
	return 0;
}