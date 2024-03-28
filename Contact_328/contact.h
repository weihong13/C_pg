#pragma once

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define MAX 100
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

// 通讯录信息
typedef struct Contact {
    PeoInfo data[MAX];
    int count;
}Contact;


// 初始化数组
void InitContact(Contact* pc);

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