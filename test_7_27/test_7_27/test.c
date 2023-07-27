#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// 指针
/*


*/
//int main()
//{
//	int a = 10; // a是整型变量,占用4个字节的内存空间
//	int * pa = &a;  
//	// pa是一个指针变量,用来存放地址的
//	// 指针就是地址,口头语中我们所说的指针通常指的是指针变量
//	// 指针变量是用来存放地址的一个变量,而通过这个地址,就能找到对应的一个内存单元
//	
//
//	// 指针变量是用来存放地址的,地址是唯一标识一块内存空间
//	// 指针的大小在32位平台是4个字节,在64位平台是8个字节
//
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}



// 指针类型的意义是什么?

//int main()
//{
//	/*int a = 0x11223344;
//	int  * pa = &a;
//	*pa = 0;*/
//
//	/*int a = 0x11223344;
//	char  * pa = &a;
//	*pa = 0;*/
//
//	// 结论:
//	// 指针类型决定了指针在被解引用的时候访问几个字节
//
//
//	return 0;
//}


int main()
{
	int a = 0x11223344;
	int * pa = &a;
	char * pc = &a;

	printf("%p\n", pa);
	printf("%p\n", pa+1);
	printf("%p\n", pc);
	printf("%p\n", pc+1);

	// 指针类型决定了指针+1和-1的时候跳过几个字节
	// 也就是决定了指针的步长
	return 0;
}