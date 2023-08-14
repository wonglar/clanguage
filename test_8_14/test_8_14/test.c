#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
/*
内存操作函数
*/


// memcpy 内存拷贝
int main()
{
	int arr1[] = {1,2,3,4,5,6,7};
	int arr2[10] = {0};
	memcpy(arr2, arr1, sizeof(arr1[0])*7);

	return 0;
}