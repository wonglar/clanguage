#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// ��������

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

// C���Թ涨��sizeof(long) >= sizeof(int)


//int main() {
//
//	int age = 20;
//	double price = 66.6;
//	return 0;
//}

// �����ͳ����ĸ���
// ������Ϊ�� �ֲ�������ȫ�ֱ���

// �ֲ����� - {}�ڲ�����ı���
// ȫ�ֱ��� - {}�ⲿ����ı���

//int b = 20;  // ȫ�ֱ���
//int main()
//{
//	//short age = 20; // ����
//	//int height = 180; // ���
//	//float weight = 88.5; // ����
//
//	int a = 10; // �ֲ�����
//	return 0;
//}


//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a);// ��ȫ�ֱ����;ֲ�����������ͬ������£��ֲ����ȡ�
//	// ���ǽ��鲻Ҫ��ȫ�ֺ;ֲ�����������д��һ��
//	return 0;
//}


// дһ�����룬����2�������ĺ�
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;  // ��ʼ��
//	int sum = 0;
//	// ����2������
//	scanf("%d %d", &num1, &num2);
//	// ���
//	sum = num1 + num2;
//	// ���
//	printf("num = %d\n", sum);
//	return 0;
//}


// ������������
// 1.�ֲ�����
// �ֲ���������������Ǳ������ڵľֲ���Χ
// 2.ȫ�ֱ���
// ȫ�ֱ���������������������

// ��������������
// �ֲ������������������������ڿ�ʼ�����������������ڽ���
// ȫ�ֱ����������������������

//int a = 10;
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	/*{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);*/
//
//
//	/*int a = 10;
//	{	
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);*/
//
//
//	test();
//	{
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//	return 0;
//}



// ����
// 1.���泣��
// 2.const���εĳ�����
// 3.#define����ı�ʶ������
// 4.ö�ٳ���


//#define MAX 10
//#define STR "abcd"
//int main()
//{
//	// ���泣��
//	/*3.14;
//	58;
//	'a';
//	100;*/
//
//	//const int a = 10;  // ��C�����У�const����a�����ʻ��Ǳ��������ǲ����޸���ֵ�����г���������
//	//a = 20;  // �޷��޸�
//
//	//const int n = 20;
//	//int arr[n] = { 0 };  // error
//
//
//	//int arr[MAX] = { 0 };
//	//MAX = 20;// error
//	/*printf("%d\n", MAX);
//	printf("%s\n", STR);*/
//
//	//enum color
//	//{
//	//	RED,
//	//	GREEN,
//	//	BLUE
//	//};
//
//	//enum color c = GREEN;
//	//printf("%d\n", c);
//	//BLUE = 3;  // error
//	return 0;
//}