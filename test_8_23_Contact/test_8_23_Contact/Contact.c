#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

// 初始化通讯录
void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}


// 添加通讯录
void AddContact(Contact* pc)
{
	if (pc->data == MAX_SIZE)
	{
		printf("通讯录已满\n");
		return;
	}
}

