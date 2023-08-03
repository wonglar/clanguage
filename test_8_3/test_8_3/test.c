#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
//
//	return 0;
//}
// 一个有符号char的取值范围是 -128~127
// 无符号的char的取值范围是 0~255


// 10000000 00000000 00000000 10000000
// 11111111 11111111 11111111 
// 10000000
//int main()
//{
//	char a = -128;
//
//	printf("%u\n", a);
//	return 0;
//}


//00000000 00000000 00000000 10000000
//10000000
//11111111 11111111 11111111 10000000
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//
//	return 0;
//}



//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i+j);  // -10
//	return 0;
//}