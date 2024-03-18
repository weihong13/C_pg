#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

// ��Ϸ���
void index();

// �˵�
void menu();

// ��Ϸ
void play();

// ��ʼ������
void InitBoard(char board[ROWS][COLS], int row, int col, char set);

// ��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);

// ���õ���
void SetMine(char board[ROWS][COLS], int row, int col);

// ɨ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

