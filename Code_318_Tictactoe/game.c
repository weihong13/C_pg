#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
// 游戏的实现

// 菜单
void neum() {
	printf("*************************\n");
	printf("*********1、play*********\n");
	printf("*********0、exit*********\n");
	printf("*************************\n");
}

// 入口
void index() {
	int n = 1;
	do {
		neum();
		printf("请选择：>\n");
		scanf("%d", &n);
		switch (n) {
		case 1:
			printf("游戏开始\n");
			Play();
			break;
		case 0:
			printf("游戏结束，已退出！\n");
			break;
		default:
			printf("输入错误！\n");
			continue;
		}

	} while (n);
}

// 游戏
void Play() {

	char board[ROW][COL] = { 0 };
	char ret;
	// 数组初始化,初始化棋盘
	InitBoard(board, ROW, COL);
	// 打印棋盘
	DispalyBoard(board, ROW, COL);
	// 下棋
	while (1) {

		// 玩家下棋
		PlayMove(board, ROW, COL);
		// 判断输赢
		ret = IsWin(board, ROW, COL);
		// 返回不是继续，跳出循环
		if (ret != 'C') 
		{
			break;
		}
		// 打印棋盘
		DispalyBoard(board, ROW, COL);

		//电脑下棋
		ComputerMove(board, ROW, COL);
		// 判断输赢
		ret = IsWin(board, ROW, COL);
		// 返回不是继续，跳出循环
		if (ret != 'C') 
		{
			break;
		}
		// 打印棋盘
		DispalyBoard(board, ROW, COL);
	}
	// 返回的是*，玩家赢了
	if (ret == '*') {
		printf("玩家赢了！\n");
	}
	// 返回的是#，电脑赢了
	else if (ret == '#') {
		printf("电脑赢了！\n");
	}
	else {
		printf("平局！\n");
	}
	// 打印最后的棋盘
	DispalyBoard(board, ROW, COL);

}


// 初始化数组
void InitBoard(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	int j = 0;
	// 数组每个元素都初始化为 空格
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			board[i][j] = ' ';
		}
	}
}

// 打印棋盘
void DispalyBoard(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	for (i = 0; i < row; i++) 
	{
		// 行列不能变
		// printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++) 
		{
			printf(" %c ", board[i][j]);
			if (j < col-1) 
			{
				printf("|"); // 最后一列不打印分割 |
			}
		}
		printf("\n");
		// 打印分割信息
		//printf("---|---|---\n");
		if (i < row - 1) 
		{ // 最后一行不打印分隔
			int j = 0;
			for (j = 0; j < col; j++) 
			{
				printf("---");
				if (j < col-1) 
				{ // 最后一列 不打印 |
					printf("|");
				}
			}
			printf("\n");
		}
	}
}


// 玩家下棋
void PlayMove(char board[ROW][COL], int row, int col) 
{
	int x = 0;
	int y = 0;
	while (1) 
	{
		printf("玩家，请输入坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) { // 判断输入是否合法
			if (board[x - 1][y - 1] == ' ') { // 判断输入的坐标是否被占用
				board[x - 1][y - 1] = '*';
				break;
			}
			else 
			{   // 被占用提示
				printf("该坐标已占用，请输入其他坐标。\n");
			}
		}
		else 
		{   // 输入不合法提示
			printf("超出范围，请重新输入坐标。\n");
		}
	}
}


// 电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋\n");
	while (1) 
	{
		x = rand() % row; // 将随机数控制在合法范围内
		y = rand() % col; //
		if (board[x][y] == ' ')  
		{   // 没被占用，才会输入，不然一直生产随机数
			board[x ][y] = '#';
			break;
		}

	}
}

// 判断满没满
// 满了 返回 1
// 没满 返回 0
int IsFull(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 1;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{   // 有空值，肯定没满，返回 0
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char IsWin(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	int j = 0;
	char temp; // 中间值
	int n = 1; // 默认状态1，默认有人赢了，0为没人赢
	// 判断行
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{   // 中间值设为每行第一个元素
			temp = board[i][0];
			if ((board[i][j] != temp) || board[i][j] == ' ')
			{   // 若该行存在一个元素 和 该行首元素不同，或者是该行存在空格，说明没有人赢
				n = 0; // 将默认状态改为0，代表没人赢
				break;
			}
			else
			{   // 如果有元素相等，将默认状态改回1
				n = 1;
			}
		}
		if (1 == n) 
		{   //// 若某一行所有元素都相等，此时默认状态为1，说明有人赢了，输出该行首元素
			return board[i][0];
		}
	}
	// 判断列
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			temp = board[0][i];
			if ((board[j][i] != temp) || board[j][i] == ' ')
			{// 若该列存在一个元素 和 该行首元素不同，或者是该列存在空格，说明没有人赢
				n = 0;
				break;
			}
			else
			{
				n = 1;
			}
		}
		if (1 == n)
		{  // 若某一行列有元素都相等，此时默认状态为1，说明有人赢了，输出该列首元素
			return board[0][i];
		}
	}

	// 判断对角线
	for (i = 0; i < row; i++) // 正对角线
	{   
		temp = board[0][0]; // 中间值 给 第一行第一列的元素
		if ((board[i][i] != temp) || board[i][i] == ' ')
		{   // 如果正对角线上的某个元素和第一行第一列的元素不一样，或者存在空格
			n = 0; // 默认值修改为 0，没人赢
			break;
		}
		else 
		{   //有元素相等，默认值改为1，
			n = 1;
		}
	}
	if (1 == n) 
	{ // 循环结束，判断是否有人赢，赢了返回 第一行第一列的元素
		return board[0][0];
	}

	for (i = 0; i < row; i++) // 判断反对角线
	{   // 中间值 给 第一行第最后一列的元素
		temp = board[0][col-1];
		if ((board[i][col-i-1] != temp) || board[i][col-i-1] == ' ')
		{
			n = 0;
			break;
		}
		else
		{
			n = 1;
		}
	}
	if (1 == n) 
	{// 循环结束，判断是否有人赢，赢了返回 第一行最后一列的元素
		return board[0][col - 1];
	}

	// 没有人赢，判断满没满
	if(IsFull(board, ROW, COL)){
		// 满了返回 Q
		return 'Q';
	}
	// 所有情况都不满足，返回继续 C
	return 'C';
}