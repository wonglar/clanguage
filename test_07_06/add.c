#define _CRT_SECURE_NO_WARNINGS 1

// 全局变量
//static int g_val = 2022;


// 函数是具有外部链接属性的
//int add(int a, int b)
//{
//	return a + b;
//}


// 一个函数本来是具有外部链接属性的，被static修饰后，就变成了内部链接属性，其他源文件就无法使用了。
static int add(int a, int b)
{
	return a + b;
}

