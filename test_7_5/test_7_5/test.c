#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
// �ַ���  ת���ַ� ע��

int main()
{
	// C������û���ַ�������
	//"abcdef";  // �ַ�������ֵ
	char arr1[] = "abcdef";
	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	//char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0'};
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	return 0;
}