#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

// 菜单
void menu() {
	printf("***************************\n");
	printf("********* 1、play *********\n");
	printf("********* 0、exit *********\n");
	printf("***************************\n");


}

// 入口
void index() 
{
	int n = 0;
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &n);
		switch (n) 
		{
			case 1:
				printf("游戏开始！\n");
				play();
				break;
			case 0:
				printf("游戏结束！\n");
				break;
			default:
				printf("输入错误，请重新选择！\n");
				break;
		}
	} while (n);
}

// 游戏
void play() {
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][ROWS] = { 0 };

	//初始化 mine, 没有布置地雷时，都是 0
	InitBoard(mine, ROWS, COLS, '0');
	//初始化 show，没有排查地雷时，都是 *
	InitBoard(show, ROWS, COLS, '*');

	// 设置地雷 
	SetMine(mine, ROW, COL);
	// 打印 show 棋盘
	DisplayBoard(show, ROW, COL);

	// 扫雷
	FindMine(mine, show, ROW, COL);

	 


}
// 初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	// 不同的数组 输入不同的内容进行初始化
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}

}

// 打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	// 打印列标
	printf("--------扫雷游戏--------\n");
	for (j = 0; j <= col; j++) {
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++) 
	{
		printf("%d ", i); // 打印行标
		for (j = 1; j <= col; j++) 
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------扫雷游戏--------\n");
}

// 设置地雷
void SetMine(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT; // 设置地雷数量
	while (count) 
	{	// 设置坐标范围
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		// 没有地雷的位置放置地雷
		if (board[x][y] == '0') 
		{
			board[x][y] = '1';
			count--; // 放置之后，需要放置的地雷数量减一
		}
	}
}

// 统计周围地雷的个数
int  get_mine_count(char board[ROWS][COLS], int x, int y) {

	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = -1; i <= 1; i++) {
		for (j = -1; j <= 1; j++) {
			// 没有地雷的位置是'0',有地雷的位置是'1'，注意是字符，需要减去一个字符'0'，转换为int类型
			ret = ret + board[x + i][y + j]-'0';
		}
	}
	return ret;

}

// 排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) 
{
	int x = 0;
	int y = 0;
	int win = 0; // 排查次数

	while (win < row*col-EASY_COUNT) 
	{

		printf("请输入坐标扫雷：>");
		scanf("%d%d", &x, &y);
		
		if (x >= 1 && x <= row && y >= 1 && y <= col) // 判断输入范围是否合法
		{
			if (show[x][y] == '*') // 禁止重复输入坐标，未排查区域才能排雷
			{
				if (mine[x][y] == '1') // 如果是雷
				{
					printf("很遗憾，你被炸死了！\n");
					// 打印 mine 棋盘
					DisplayBoard(mine, ROW, COL);

				}
				else // 如果不是雷
				{
					win++;// 排查次数加一
					// 统计 mine 数组中，x y 周围有几个雷
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0'; // 转换为字符串
					// 打印 show 棋盘
					DisplayBoard(show, ROW, COL);
				}
			}
			else 
			{
				printf("该坐标已排查，请输入未排查坐标！\n");
			}
		}
		else 
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT) {
		printf("恭喜你，排雷成功！！\n");
		DisplayBoard(mine, ROW, COL);
	}


}

