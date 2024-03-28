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


// ������Ϣ
typedef struct PeoInfo {
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tel[MAX_TEL];
    char addr[MAX_ADDR];
}PeoInfo;

// ͨѶ¼��Ϣ
typedef struct Contact {
    PeoInfo data[MAX];
    int count;
}Contact;


// ��ʼ������
void InitContact(Contact* pc);

// �����ϵ��
void AddContact(Contact* pc);

// չʾͨѶ¼
void ShowContact(Contact* pc);

// ��������ɾ����ϵ��
void DelContact(Contact* pc);

// ��������������ϵ��
void SearchContact(Contact* pc);

// ���������޸���ϵ��
void ModifyContact(Contact* pc);

// ����������ͨѶ¼����
void SortContact(Contact* pc);