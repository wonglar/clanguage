#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


//struct S {
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	//int sz = sizeof(struct S);
//	//printf("%d\n", sz);
//
//	// 柔性数组的使用
//	struct S* ps = malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	// 扩容
//	struct S* ptr = realloc(ps, sizeof(struct S) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	free(ps);
//	ps = NULL;
//	return 0;
//}



//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	if (ps->arr == NULL)
//	{
//		perror("main:ps->arr");
//		return 1;
//	}
//
//	// 使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(ps->arr + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ps->arr + i));
//	}
//	printf("\n");
//
//	// 扩容
//	int* ptr = (int*)realloc(ps->arr, 80);
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		*(ps->arr + i) = i;
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(ps->arr + i));
//	}
//
//	return 0;
//
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	// 扩容
//	int* ptr = (int*)malloc(80);
//	for (i = 0; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}




struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		perror("main");
		return 1;
	}

	ps->n = 100;
	ps->arr = (int*)malloc(40);
	if (ps->arr == NULL)
	{
		perror("main:ps->arr");
		return 1;
	}

	// 使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(ps->arr + i) = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(ps->arr + i));
	}
	printf("\n");

	// 扩容
	int* ptr = (int*)realloc(ps->arr, 80);
	/*if (ptr == NULL)
	{
		perror("main:realloc");
		free(ps->arr);
		free(ps);
		return 1;
	}*/
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}

	for (i = 0; i < 20; i++)
	{
		*(ps->arr + i) = i;
	}

	for (i = 0; i < 20; i++)
	{
		printf("%d ", *(ps->arr + i));
	}

	free(ps->arr);
	free(ps);


	return 0;

}