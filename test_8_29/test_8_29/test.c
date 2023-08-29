#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//// 求两个数的最大公约数和最小公倍数之和
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		int max = n > m ? m : n;
//		int min = n > m ? n : m;
//
//		while (1)
//		{
//			if (n % max == 0 && m % max == 0)
//			{
//				break;
//			}
//			max--;
//		}
//
//		while (1)
//		{
//			if (min % n == 0 && min % m == 0)
//			{
//				break;
//			}
//			min++;
//		}
//		printf("%d\n", max + min);
//	}
//
//	return 0;
//}



// 求最小公倍数
//int main()
//{
//
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		int i = 1;
//		while ((n * i) % m)
//		{
//			i++;
//		}
//		printf("%d\n", n * i);
//	}
//}


// 求最大公约数
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int r = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		while (r = n % m)
//		{
//			n = m;
//			m = r;
//		}
//		printf("%d\n", m);
//	}
//
//	return 0;
//}


//int main()
//{
//
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		// 求最大公约数
//		int i = n;
//		int j = m;
//		int r = 0;
//		while (r = i % j)
//		{
//			i = j;
//			j = r;
//		}
//		// j 就是最大公约数
//
//		printf("%d\n", (m * n) / j + j);
//	}
//}



//int main()
//{
//
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		int i = n;
//		int j = m;
//		int r = 0;
//		// 求最大公约数
//		while (r = i % j)
//		{
//			i = j;
//			j = r;
//		}
//		// j就是最大公约数
//
//		// 求最小公倍数
//		i = 1;
//		while (n * i % m)
//		{
//			i++;
//		}
//		// n * i 就是最小公倍数
//		printf("%d\n", j + n * i);
//	}
//}

//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0 || j == 0 || j == n - 1 || i == n - 1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}