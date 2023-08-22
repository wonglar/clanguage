#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//// 结构体的声明
//struct Stu
//{
//	char name[20];
//	int age;
//}s1, s2;  // s1和s2是全局变量
//
//
//int main()
//{
//
//	struct Stu s3; // s3是局部变量
//	return 0;
//}


// 匿名结构体类型,只能使用一次
//struct
//{
//	char name[20];
//	int age;
//}s1;


// 结构体自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};


//struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


//struct score
//{
//	int n;
//	char ch;
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//	struct score s;
//};
//
//int main()
//{
//	struct Stu s1 = { "zhangsan", 20, { 100, 'a' } };
//
//
//	return 0;
//}


#include <stddef.h>
//结构体内存对齐

//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	printf("%d\n", offsetof(struct s1, c1));
//	printf("%d\n", offsetof(struct s1, i));
//	printf("%d\n", offsetof(struct s1, c2));
//	return 0;
//}



//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//
//
//struct s4
//{
//	char c1;
//	struct s3 s;
//	double d;
//};
//
//
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct s4));
//	printf("%d\n", offsetof(struct s4, c1));
//	printf("%d\n", offsetof(struct s4, s));
//	printf("%d\n", offsetof(struct s4, d));
//	return 0;
//}


// 修改默认对齐数
//#pragma pack(2)
//struct s1
//{
//	int a;
//	char c;
//};
//
//struct s2
//{
//	double d;
//	int i;
//	struct s1 s;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct s2));
//	printf("%d\n", offsetof(struct s2, d));
//	printf("%d\n", offsetof(struct s2, i));
//	printf("%d\n", offsetof(struct s2, s));
//	return 0;
//}
//#pragma pack()