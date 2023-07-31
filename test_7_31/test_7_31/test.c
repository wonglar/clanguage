#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 以下代码死循环
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
// 局部变量放在栈区
// 栈区内存的使用习惯是先使用高地址的空间,再使用低地址空间
// 数组随着下标的增长地址是由低到高变化的
// 如果i和arr之间有适当的空间,利用数组的越界操作可能会覆盖到i,就可能会导致死循环出现

#include <string.h>
#include <assert.h>
void my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	while (*dest++ = *src++){ ; }
}

int main()
{
	char arr1[20] = "xxxxxxxxxxx";
	char arr2[] = "hello bit";
	//strcpy(arr1, arr2);

	my_strcpy(arr1, arr2);

	printf("%s\n", arr1);
	return 0;
}