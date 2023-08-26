﻿#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};

void menu()
{
	printf("********************************\n");
	printf("****** 1.add      2.del    *****\n");
	printf("****** 3.search   4.modify *****\n");
	printf("****** 5.show     6.sort   *****\n");
	printf("******        0.exit       *****\n");
	printf("********************************\n");
}

int main()
{
	int input = 0;
	Contact con;  // 创建通讯录
	// 初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			PrintContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入有误!请重新输入\n");
			break;
		}

	} while (input);

	return 0;
}