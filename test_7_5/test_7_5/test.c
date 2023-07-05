#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
// 字符串  转义字符 注释

int main()
{
	// C语言中没有字符串类型
	//"abcdef";  // 字符串字面值
	char arr1[] = "abcdef";
	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	//char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0'};
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	return 0;
}