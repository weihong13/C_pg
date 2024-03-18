#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

// 游戏入口
void index();

// 菜单
void menu();

// 游戏
void play();

// 初始化棋盘
void InitBoard(char board[ROWS][COLS], int row, int col, char set);

// 打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

// 设置地雷
void SetMine(char board[ROWS][COLS], int row, int col);

// 扫雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

