#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
// ��Ϸ��ʵ��

// �˵�
void neum() {
	printf("*************************\n");
	printf("*********1��play*********\n");
	printf("*********0��exit*********\n");
	printf("*************************\n");
}

// ���
void index() {
	int n = 1;
	do {
		neum();
		printf("��ѡ��>\n");
		scanf("%d", &n);
		switch (n) {
		case 1:
			printf("��Ϸ��ʼ\n");
			Play();
			break;
		case 0:
			printf("��Ϸ���������˳���\n");
			break;
		default:
			printf("�������\n");
			continue;
		}

	} while (n);
}

// ��Ϸ
void Play() {

	char board[ROW][COL] = { 0 };
	char ret;
	// �����ʼ��,��ʼ������
	InitBoard(board, ROW, COL);
	// ��ӡ����
	DispalyBoard(board, ROW, COL);
	// ����
	while (1) {

		// �������
		PlayMove(board, ROW, COL);
		// �ж���Ӯ
		ret = IsWin(board, ROW, COL);
		// ���ز��Ǽ���������ѭ��
		if (ret != 'C') 
		{
			break;
		}
		// ��ӡ����
		DispalyBoard(board, ROW, COL);

		//��������
		ComputerMove(board, ROW, COL);
		// �ж���Ӯ
		ret = IsWin(board, ROW, COL);
		// ���ز��Ǽ���������ѭ��
		if (ret != 'C') 
		{
			break;
		}
		// ��ӡ����
		DispalyBoard(board, ROW, COL);
	}
	// ���ص���*�����Ӯ��
	if (ret == '*') {
		printf("���Ӯ�ˣ�\n");
	}
	// ���ص���#������Ӯ��
	else if (ret == '#') {
		printf("����Ӯ�ˣ�\n");
	}
	else {
		printf("ƽ�֣�\n");
	}
	// ��ӡ��������
	DispalyBoard(board, ROW, COL);

}


// ��ʼ������
void InitBoard(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	int j = 0;
	// ����ÿ��Ԫ�ض���ʼ��Ϊ �ո�
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			board[i][j] = ' ';
		}
	}
}

// ��ӡ����
void DispalyBoard(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	for (i = 0; i < row; i++) 
	{
		// ���в��ܱ�
		// printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++) 
		{
			printf(" %c ", board[i][j]);
			if (j < col-1) 
			{
				printf("|"); // ���һ�в���ӡ�ָ� |
			}
		}
		printf("\n");
		// ��ӡ�ָ���Ϣ
		//printf("---|---|---\n");
		if (i < row - 1) 
		{ // ���һ�в���ӡ�ָ�
			int j = 0;
			for (j = 0; j < col; j++) 
			{
				printf("---");
				if (j < col-1) 
				{ // ���һ�� ����ӡ |
					printf("|");
				}
			}
			printf("\n");
		}
	}
}


// �������
void PlayMove(char board[ROW][COL], int row, int col) 
{
	int x = 0;
	int y = 0;
	while (1) 
	{
		printf("��ң����������꣺>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) { // �ж������Ƿ�Ϸ�
			if (board[x - 1][y - 1] == ' ') { // �ж�����������Ƿ�ռ��
				board[x - 1][y - 1] = '*';
				break;
			}
			else 
			{   // ��ռ����ʾ
				printf("��������ռ�ã��������������ꡣ\n");
			}
		}
		else 
		{   // ���벻�Ϸ���ʾ
			printf("������Χ���������������ꡣ\n");
		}
	}
}


// ��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������\n");
	while (1) 
	{
		x = rand() % row; // ������������ںϷ���Χ��
		y = rand() % col; //
		if (board[x][y] == ' ')  
		{   // û��ռ�ã��Ż����룬��Ȼһֱ���������
			board[x ][y] = '#';
			break;
		}

	}
}

// �ж���û��
// ���� ���� 1
// û�� ���� 0
int IsFull(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 1;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{   // �п�ֵ���϶�û�������� 0
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
	char temp; // �м�ֵ
	int n = 1; // Ĭ��״̬1��Ĭ������Ӯ�ˣ�0Ϊû��Ӯ
	// �ж���
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{   // �м�ֵ��Ϊÿ�е�һ��Ԫ��
			temp = board[i][0];
			if ((board[i][j] != temp) || board[i][j] == ' ')
			{   // �����д���һ��Ԫ�� �� ������Ԫ�ز�ͬ�������Ǹ��д��ڿո�˵��û����Ӯ
				n = 0; // ��Ĭ��״̬��Ϊ0������û��Ӯ
				break;
			}
			else
			{   // �����Ԫ����ȣ���Ĭ��״̬�Ļ�1
				n = 1;
			}
		}
		if (1 == n) 
		{   //// ��ĳһ������Ԫ�ض���ȣ���ʱĬ��״̬Ϊ1��˵������Ӯ�ˣ����������Ԫ��
			return board[i][0];
		}
	}
	// �ж���
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			temp = board[0][i];
			if ((board[j][i] != temp) || board[j][i] == ' ')
			{// �����д���һ��Ԫ�� �� ������Ԫ�ز�ͬ�������Ǹ��д��ڿո�˵��û����Ӯ
				n = 0;
				break;
			}
			else
			{
				n = 1;
			}
		}
		if (1 == n)
		{  // ��ĳһ������Ԫ�ض���ȣ���ʱĬ��״̬Ϊ1��˵������Ӯ�ˣ����������Ԫ��
			return board[0][i];
		}
	}

	// �ж϶Խ���
	for (i = 0; i < row; i++) // ���Խ���
	{   
		temp = board[0][0]; // �м�ֵ �� ��һ�е�һ�е�Ԫ��
		if ((board[i][i] != temp) || board[i][i] == ' ')
		{   // ������Խ����ϵ�ĳ��Ԫ�غ͵�һ�е�һ�е�Ԫ�ز�һ�������ߴ��ڿո�
			n = 0; // Ĭ��ֵ�޸�Ϊ 0��û��Ӯ
			break;
		}
		else 
		{   //��Ԫ����ȣ�Ĭ��ֵ��Ϊ1��
			n = 1;
		}
	}
	if (1 == n) 
	{ // ѭ���������ж��Ƿ�����Ӯ��Ӯ�˷��� ��һ�е�һ�е�Ԫ��
		return board[0][0];
	}

	for (i = 0; i < row; i++) // �жϷ��Խ���
	{   // �м�ֵ �� ��һ�е����һ�е�Ԫ��
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
	{// ѭ���������ж��Ƿ�����Ӯ��Ӯ�˷��� ��һ�����һ�е�Ԫ��
		return board[0][col - 1];
	}

	// û����Ӯ���ж���û��
	if(IsFull(board, ROW, COL)){
		// ���˷��� Q
		return 'Q';
	}
	// ��������������㣬���ؼ��� C
	return 'C';
}