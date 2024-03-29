#pragma once

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define DEFAULT_SZ 3
#define INC_SZ 2

#define MAX 3 
#define FUNC_NUM 7
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 12
#define MAX_ADDR 30


// 个人信息
typedef struct PeoInfo {
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tel[MAX_TEL];
    char addr[MAX_ADDR];
}PeoInfo;

//// 静态版本通讯录信息
//typedef struct Contact {
//    PeoInfo data[MAX];
//    int count;
//}Contact;

// 动态版本通讯录信息
typedef struct Contact {
    PeoInfo* data; // 存放个人信息
    int count; // 记录当前通讯录中实际个数
    int capacity; // 当前通讯录容量
}Contact;


// 初始化数组
void InitContact(Contact* pc);

// 销毁空间
void DestoryContact(Contact* pc);

// 添加联系人
void AddContact(Contact* pc);

// 展示通讯录
void ShowContact(Contact* pc);

// 按照姓名删除联系人
void DelContact(Contact* pc);

// 按照姓名查找联系人
void SearchContact(Contact* pc);

// 按照姓名修改联系人
void ModifyContact(Contact* pc);

// 按照姓名对通讯录排序
void SortContact(Contact* pc);