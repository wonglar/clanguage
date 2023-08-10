#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a[] = { 1, 2, 3, 4 };

	printf("%d\n", sizeof(a));  //16 数组名单独放在sizeof中表示整个数组,计算的是整个数组所在内存空间的大小,单位是字节.
	printf("%d\n", sizeof(a + 0));  // 4/8  表示的是数组首元素的地址

	printf("%d\n", sizeof(*a)); // 4
	printf("%d\n", sizeof(a + 1)); // 4/8
	printf("%d\n", sizeof(a[1])); // 4
	printf("%d\n", sizeof(&a));  // 4/8
	printf("%d\n", sizeof(*&a)); //16

	printf("%d\n", sizeof(&a + 1)); // 4/8
	printf("%d\n", sizeof(&a[0])); // 4/8
	printf("%d\n", sizeof(&a[0] + 1)); // 4/8

	return 0;
}