#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


// 初始化通讯录
void InitContact(Contact* pc)
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->sz = 0;
}


// 添加人的信息
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == sizeof(pc->data))
	{
		printf("通讯录已满!\n");
		return;
	}
	// 增加一个人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("增加成功!\n");

}


// 打印通讯录
void PrintContact(const Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-10s\t%-3s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-10s\t%-3d\t%-12s\t%-30s\n", pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}


int FindByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;  // 找到返回下标
		}
	}

	return -1; // 找不到

}

// 删除通讯录
void DelContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空!,无需删除!\n");
		return;
	}

	char name[MAX_NAME] = { 0 };
	printf("请输入要删除人的姓名:>");
	scanf("%s", name);

	// 要删除,首先要查找有没有这个人
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在!\n");
		return;
	}

	// 找到这个人, 删除
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功!\n");

}