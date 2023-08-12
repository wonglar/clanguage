#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// 计数器法
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}


// 递归法
//size_t my_strlen(const char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}

// 指针-指针
//size_t my_strlen(const char* str)
//{
//	const char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}

//size_t my_strlen(const char* str)
//{
//	const char* begin = str;
//	while (*str++);
//	return str - begin - 1;
//}
//
//
//// 求字符串长度
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}


// 字符串拷贝
//int main()
//{
//	char name[20] = { 0 };
//	strcpy(name, "zhangsan");
//
//	printf("%s\n", name);
//	return 0;
//}

// 如果提前遇到'\0'
//int main()
//{
//	char name[20] = "xxxxxxxxxxxxx";
//	strcpy(name, "zhangsan");
//
//	printf("%s\n", name);
//	return 0;
//}
// 以上代码可以发现strcpy在拷贝字符串的时候'\0'也会拷贝过去


//int main()
//{
//	char name[20] = "xxxxxxxxxxxxx";
//	char arr[] = { 'a', 'b', 'c' };
//	strcpy(name, arr);
//
//	printf("%s\n", name);
//	return 0;
//}

// 放不下的情况
//int main()
//{
//	char name[3] = "xx";
//	char arr[] = { 'a', 'b', 'c', '\0' };
//	strcpy(name, arr);
//
//	printf("%s\n", name);
//	return 0;
//}


// 目标空间必须可修改
//int main()
//{
//	char* p = "abcdef";
//	char arr[] = "abc";
//	strcpy(p, arr);
//
//	return 0;
//}


// 模拟实现strcpy
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	while (*src)
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

// 优化
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	/*my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);*/
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}


// 字符串追加函数 strcat



//int main()
//{
//	char arr[20] = "hello ";
//	printf("%s\n", strcat(arr, "world"));
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello ";
//	char str[] = { 'a', 'b', 'c' };
//	printf("%s\n", strcat(arr, str));
//	return 0;
//}

// 模拟实现strcat函数
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0') dest++;
//	while (*dest++ = *src++);
//
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	printf("%s\n", my_strcat(arr1, arr2));
//}

// 思考:字符串自己给自己追加行不行?
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0') dest++;
//	while (*dest++ = *src++);
//
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	//char arr2[] = "world";
//	printf("%s\n", my_strcat(arr1, arr1));
//}



// 字符串比较函数 strcmp
//int main()
//{
//	char arr1[] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	int ret = strcmp(arr1, arr2);
//	if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//
//	return 0;
//}


// 模拟实现strcmp
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char arr1[] = "zhangsan";
//	char arr2[] = "zhangsan";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//
//	return 0;
//}