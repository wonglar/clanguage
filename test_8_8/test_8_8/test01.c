//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////int main()
////{
////	(*(void (*)())0)();  // 调用0地址处的函数
////	// 把0强制转化成函数指针类型,无参,返回值为void的函数地址
////	// *号解引用找到这个函数,然后再调用函数
////	return 0;
////}
//
//
//
////int main()
////{
////	// void (*    signal(int, void (*)(int))    )(int);
////	// 以上代码是一个函数的声明
////	// signal是一个函数名
////	// 声明的signal函数,第一个参数是int类型,第二个参数是一个函数指针类型,该指针指向一个参数是int,返回值是void的函数
////	// signal函数的返回值类型也是一个函数指针,该函数指针指向一个参数是int,返回值类型是void的函数.
////
////	return 0;
////}
//
//
////// 以上的函数声明可以进行简化
////typedef	void (*pf_t)(int);  // 进行类型重定义,把void (*)(int)类型重命名为pf_t
////int main()
////{
////	pf_t signal(int, pf_t);
////	return 0;
////}