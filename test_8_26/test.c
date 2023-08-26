#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 枚举类型

//enum Color
//{
//	RED = 1,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color c = RED;
//	printf("%d\n", c);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	c = 5;
//	printf("%d\n", c);
//	return 0;
//}


// 联合体(共用体)

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	u.c = 0x00;
//	u.i = 0x11223344;
//	return 0;
//}


//// 判断当前机器的大小端
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}



//// 判断当前机器的大小端
//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;	
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}



//union Un
//{
//	char arr[5];
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}


//union Un
//{
//	int i;
//	double d;
//	char c;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}