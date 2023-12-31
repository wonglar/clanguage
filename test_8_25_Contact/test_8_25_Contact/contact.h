﻿#pragma once

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 10
#define DEFAULT_SZ 3
#define INC_SZ 2

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;



//typedef struct contact
//{
//	PeoInfo data[MAX];
//	int sz;  // 记录当前通讯录中有效信息的个数
//}Contact;



// 动态版本通讯录
typedef struct contact
{
	PeoInfo* data;
	int sz;  // 记录当前通讯录中有效信息的个数
	int capacity; // 当前通讯录的容量
}Contact;



// 初始化通讯录
void InitContact(Contact* pc);

// 增加人的信息
void AddContact(Contact* pc);

// 打印通讯录
void PrintContact(const Contact* pc);

// 删除通讯录
void DelContact(Contact* pc);

// 查找通讯录
void SearchContact(Contact* pc);

// 修改通讯录
void ModifyContact(Contact* pc);

// 排序通讯录通过姓名
void SortContact(Contact* pc);