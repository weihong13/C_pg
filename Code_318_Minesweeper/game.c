#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

// �˵�
void menu() {
	printf("***************************\n");
	printf("********* 1��play *********\n");
	printf("********* 0��exit *********\n");
	printf("***************************\n");


}

// ���
void index() 
{
	int n = 0;
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &n);
		switch (n) 
		{
			case 1:
				printf("��Ϸ��ʼ��\n");
				play();
				break;
			case 0:
				printf("��Ϸ������\n");
				break;
			default:
				printf("�������������ѡ��\n");
				break;
		}
	} while (n);
}

// ��Ϸ
void play() {
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][ROWS] = { 0 };

	//��ʼ�� mine, û�в��õ���ʱ������ 0
	InitBoard(mine, ROWS, COLS, '0');
	//��ʼ�� show��û���Ų����ʱ������ *
	InitBoard(show, ROWS, COLS, '*');

	// ���õ��� 
	SetMine(mine, ROW, COL);
	// ��ӡ show ����
	DisplayBoard(show, ROW, COL);

	// ɨ��
	FindMine(mine, show, ROW, COL);

	 


}
// ��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	// ��ͬ������ ���벻ͬ�����ݽ��г�ʼ��
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}

}

// ��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	// ��ӡ�б�
	printf("--------ɨ����Ϸ--------\n");
	for (j = 0; j <= col; j++) {
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++) 
	{
		printf("%d ", i); // ��ӡ�б�
		for (j = 1; j <= col; j++) 
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------ɨ����Ϸ--------\n");
}

// ���õ���
void SetMine(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT; // ���õ�������
	while (count) 
	{	// �������귶Χ
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		// û�е��׵�λ�÷��õ���
		if (board[x][y] == '0') 
		{
			board[x][y] = '1';
			count--; // ����֮����Ҫ���õĵ���������һ
		}
	}
}

// ͳ����Χ���׵ĸ���
int  get_mine_count(char board[ROWS][COLS], int x, int y) {

	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = -1; i <= 1; i++) {
		for (j = -1; j <= 1; j++) {
			// û�е��׵�λ����'0',�е��׵�λ����'1'��ע�����ַ�����Ҫ��ȥһ���ַ�'0'��ת��Ϊint����
			ret = ret + board[x + i][y + j]-'0';
		}
	}
	return ret;

}

// ����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) 
{
	int x = 0;
	int y = 0;
	int win = 0; // �Ų����

	while (win < row*col-EASY_COUNT) 
	{

		printf("����������ɨ�ף�>");
		scanf("%d%d", &x, &y);
		
		if (x >= 1 && x <= row && y >= 1 && y <= col) // �ж����뷶Χ�Ƿ�Ϸ�
		{
			if (show[x][y] == '*') // ��ֹ�ظ��������꣬δ�Ų������������
			{
				if (mine[x][y] == '1') // �������
				{
					printf("���ź����㱻ը���ˣ�\n");
					// ��ӡ mine ����
					DisplayBoard(mine, ROW, COL);

				}
				else // ���������
				{
					win++;// �Ų������һ
					// ͳ�� mine �����У�x y ��Χ�м�����
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0'; // ת��Ϊ�ַ���
					// ��ӡ show ����
					DisplayBoard(show, ROW, COL);
				}
			}
			else 
			{
				printf("���������Ų飬������δ�Ų����꣡\n");
			}
		}
		else 
		{
			printf("��������Ƿ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT) {
		printf("��ϲ�㣬���׳ɹ�����\n");
		DisplayBoard(mine, ROW, COL);
	}


}

