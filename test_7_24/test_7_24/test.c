#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 位操作符
/*
按位与 &
按位或 |
异或	   ^   相同为0相异为1



*/
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	//00000000 00000000 00000000 00000011  --  3
//	//10000000 00000000 00000000 00000101  -- -5的原码
//	//11111111 11111111 11111111 11111011  -- -5的补码
//
//	//00000000 00000000 00000000 00000011
//	//11111111 11111111 11111111 11111011
//	//00000000 00000000 00000000 00000011    3 
//	printf("c = %d\n", c);  // %d意味着打印一个有符号的整数
//
//	return 0;
//}

// 不创建临时变量，实现两个数的交换  此方法会有溢出的问题
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	return 0;
//}


// 不创建临时变量，实现两个整数数的交换
// a ^ a = 0, 0 ^ b = b
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}



// 赋值操作符

// 单目操作符
/*
! 逻辑取反操作
- 负值
+ 正值
& 取地址
sizeof 
~ 对一个数的二进制位按位取反（所有位取反）
--
++
* 间接访问操作符
(类型)
*/
//int main()
//{
//	//int flag = 3;
// 	//// flag为假进入if语句
//	//if (!flag)
//	//{
//
//	//}
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof int);  // err
//	printf("%d\n", sizeof(5));
//	printf("%d\n", sizeof 5);
//	printf("%d\n", sizeof 3.14);
//	return 0;
//}


 

// 关系操作符