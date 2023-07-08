#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// #define 定义常量和宏

//
//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//
//	int num = MAX;
//	printf("%d\n", num);
//
//	return 0;
//}


// #define 定义宏
//#define ADD(a, b) ((a)+(b));
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}


// 指针


//int main()
//{
//	int a = 10;
//	// &a; // 取地址运算符
//	//printf("%p\n", &a);
//
//	int* p = &a; // p就是指针变量
//	*p = 20;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	// 不管是什么类型的指针，都是在创建指针变量
//	// 指针变量是用来存放地址的
//	// 指针变量的大小取决于一个地址存放的时候需要多大空间
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}



// 结构体


//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* ps)
//{
//	//printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//
//}
//
//int main()
//{
//	struct Stu s1 = {"zhangsan", 20, "男", "13312356987"};
//	// 结构体对象.成员名
//	//printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.tele);
//	print(&s1);
//	return 0;
//}