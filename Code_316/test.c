#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// �����������Ͷ���
// 
// ����������--������main��������� ���� �ڱ���ʱ�ᱨ���棬����������������ٶ���
// ������������һ����� ͷ�ļ��� 
//int Add(int x, int y); //���ﲻд x  yҲ��
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}
//// �����Ķ���
//int Add(int x, int y) {
//
//	return x + y;
//}


//// �Լ������ͷ�ļ�����" ", 
//#include "add.h"  // ��ͷ�ļ� ���� ��ͷ�ļ������ݿ�������
//
//// ���뾲̬��
//#pragma comment(lib,"Code_316_Sub")
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	// �ӷ�
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	// ����
//	int sub = Sub(a, b);
//	printf("%d\n", sub);
//	return 0;
//}


//  ***�����ݹ�***
// ���»�С
// �ݹ��������Ҫ����
// 1�������������������Խ����ݹ�
// 2��ÿ�εݹ飬Խ��Խ�ӽ���������

// ����1234
// ��ӡ 1 2 3 4

//// �ݹ��ʵ��
//void print(unsigned int n) {
//	// ջ�� ������ ���ֲ������������ķ���ֵ��ÿһ�κ����ĵ��ã�������ջ������ռ�
//	if (n>9) { // ȥ�� if ���ͻ����ݹ飬һֱ�����Լ�������Stack overflow ջ���
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() {
//	unsigned int num = 0;
//	scanf("%d", &num); //1234
//
//	print(num);
//}


//// %d ��ӡ�����������и�
//// %u ��ӡ�޷���������û�з��ţ��޸���
//int main() {
//	unsigned int num = 0;
//	scanf("%d", &num); //1234
//	while (num) {
//		printf("%u ", num % 10); //4 3 2 1
//		num = num / 10;
//	}
//
//}



// ������ʹ����ʱ���������ַ�������

//int my_strlen(char* str) {
//	int count = 0; //��ʱ����
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}

//// �ݹ����
//int my_strlen(char* str) {
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//
//	char arr[] = "abc";
//
//	int len = my_strlen(arr);
//	
//	printf("%d", len);
//
//	return 0;
//}


//// �� n��
//int fac(int x) {
//	if (x<=1) {
//		return 1;
//	}
//	else {
//		return x*fac(x - 1);
//	}
//	
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = fac(n);
//	printf("%d",ret);
//
//	return 0;
//}


//// ���n��쳲���������
//// 1 1 2 3 5 8 13 21 34 55 ......
//int count = 0;
//int fib(int x) {
//	if (3 == x) {
//		count++; // ���� n=3 �ж��ٴ�
//	}
//	if (x <= 2) {
//		return 1;
//	}
//	else {
//		return fib(x - 1) + fib(x - 2);
//	}
//	
//}
////       40 
////    39    38
//// 38   37 37  36
////37 36 36 35 36 35 35 34
// // ���� 40 ��ʱ�� n=3 �������� 3000w�Σ������ܲ��ã�����˷ѣ�ʹ�õ���

// ��������
int fib(int x) {
	int a = 1;
	int b = 1;
	int c = 0;
	while (x >= 3) {
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}
int main() {
	int n = 0;
	scanf("%d", &n);

	int ret = fib(n);
	printf("%d\n", ret);
	//printf("%d\n", count);
	return 0;
}


