#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a)); // -1 -2 -3 ... -128 127 126 ... 2 1 0
//
//}


//unsigned char i = 0;
//// unsigned char 类型的取值范围是0~255
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}




//--------------------------------------------------------


/*
浮点型在内存中的存储
浮点数家族包括:float,double,long double类型
类型定义在float.h文件中
整型家族定义在limits.h中
*/

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//
//	printf("n的值为:%d\n", n);  // 9
//	printf("pFloat的值为:%f\n", *pFloat); // 0.000000
//
//	*pFloat = 9.0;
//	printf("num的值为:%d\n", n);  //01000001000100000000000000000000
//	printf("*pFloat的值为:%f\n", *pFloat); // 9.000000
//	return 0;
//}   



void move_odd_even(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left < right)
	{
		// 从左向右找一个偶数,停下来
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		// 从右向左找一个奇数,然后停下来
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}

		// 交换奇数偶数
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}

	}
}


// 调整奇数偶数顺序
int main()
{
	int arr[10] = {0};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", arr + i);
	}

	// 调整
	move_odd_even(arr, sz);


	// 输出
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


// 有序序列的合并
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[n];
//	int arr2[m];
//
//	// 输入n个整数
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//
//	// 输入m个整数
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//
//	// 合并打印
//	int j = 0;
//	int k = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d ", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; k < m; k++)
//		{
//			printf("%d ", arr1[k]);
//		}
//	}
//	return 0;
//}