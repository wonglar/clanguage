#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[20] = "abcdef###########";
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2, 20);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	char arr1[20] = "hello\0xxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//}


//int main()
//{
//	char arr1[20] = "hello\0xxxxxx";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 6);
//	printf("%s\n", arr1);
//}



//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2, 3);
//
//	if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//
//	return 0;
//}


/*
strstr 查找子串
*/

//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	char* ret = strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


// 模拟实现strstr

//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)p;
//		if (*s1 == '\0')
//			return NULL;
//
//		p++;
//	}
//
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "ab";
//	char* ret = my_strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}



//int main()
//{
//	const char* sep = "@.";
//	char email[] = "wonglar@163.com";
//	char cp[30] = { 0 };
//	strcpy(cp, email);
//
//	char* ret = strtok(cp, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	return 0;
//}


//int main()
//{
//	const char* sep = "@.";
//	char email[] = "wonglar@163.com";
//	char cp[30] = { 0 };
//	strcpy(cp, email);
//
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}




//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//
//	return 0;
//}


int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	return 0;
}