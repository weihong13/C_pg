#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

// ��Ϸ��������

// �˵�
void neum();

// ���
void index();

// ����Ϸ
void Play();

// ��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

// ��ӡ����
void DispalyBoard(char board[ROW][COL], int row, int col);

// �������
void PlayMove(char board[ROW][COL], int row, int col);

// ��������
void ComputerMove(char board[ROW][COL], int row, int col);

// �ж���Ӯ
/*
1.���Ӯ������ *
2.����Ӯ������ #
3.ƽ��  ������ Q
4.����  ������ C
*/
char IsWin(char board[ROW][COL], int row, int col);
