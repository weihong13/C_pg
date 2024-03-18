#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

// 游戏函数命名

// 菜单
void neum();

// 入口
void index();

// 玩游戏
void Play();

// 初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

// 打印棋盘
void DispalyBoard(char board[ROW][COL], int row, int col);

// 玩家下棋
void PlayMove(char board[ROW][COL], int row, int col);

// 电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

// 判断输赢
/*
1.玩家赢：返回 *
2.电脑赢：返回 #
3.平局  ：返回 Q
4.继续  ：返回 C
*/
char IsWin(char board[ROW][COL], int row, int col);
