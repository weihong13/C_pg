#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
���ָ����֣�����һ������
����ĳһλ��ż������Ϊ0��������Ϊ1
eg��
123
101

2222
0
*/

//int modifyNum(int n) {
//	int ret = 0;
//	int count = 1;
//	while (n) {
//		
//		if (n % 2 == 0) 
//		{
//			ret += 0 * count;
//			count *= 10;
//			n /= 10;
//		}
//		else 
//		{
//			ret += 1 * count;
//			count *= 10;
//			n /= 10;
//		}
//	}
//	return ret;
//}
//int main() {
//	// ����
//	int n = 0;
//	scanf("%d", &n);
//	// �޸�
//	int ret = modifyNum(n);
//	// ���
//	printf("%d\n", ret);
//	return 0;
//}

//
// ��ӡ������ո��ֱ��������
// 5
//           * 2n -1-0 9
//         * * 2n-2-1 7
//       * * * 2n-3 -2 
//     * * * *
//	 * * * * *
//

//int main() {
//	// ����
//	int n = 0;
//	scanf("%d", &n);
//	// ��ӡ
//	int i = 0;
//	for (i = 1; i <= n; i++) {
//		int j = 0;
//		// ��ӡ�ո�
//		for (j = 1; j <= 2*n-2*i+1 ;j++) {
//			printf(" ");
//		}
//		for (j = 1; j <= 2*i;j++) {
//			if (j % 2 == 1) {
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main() {
//	// ����
//	int n = 0;
//	scanf("%d", &n);
//	// ��ӡ
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		int j = 0;
//		for (j = 0; j < n; j++) {
//			if (i + j < n - 1) {
//				printf("  ");
//			}
//			else 
//			{
//				printf("* ");
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}


// nc /bc63 ����
#include <stdio.h>

//int main() {
//    double price = 0.0;
//    int month = 0;
//    int day = 0;
//    int a = 0;
//    double sum = 0.0;
//    while (scanf("%lf %d %d %d", &price, &month, &day, &a) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to   
//    }
//    if (month == 11 && day == 11) {
//        sum = price * 0.7;
//        if (a == 1) {
//            sum = sum - 50;
//        }
//    }
//    else if (month == 12 && day == 12) {
//        sum = price * 0.8;
//        if (a == 1) {
//            sum = sum - 50;
//        }
//    }
//    else {
//        sum = price;
//    }
//    if (sum >= 0) {
//        printf("%.2lf", sum);
//    }
//    else {
//        sum = 0;
//        printf("%.2lf", sum);
//    }
//
//    return 0;
//}



// ��ӡ�������

//int main() {
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++) 
//		{
//			if (0 == j) 
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j) 
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1) 
//			{
//				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++) {
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



// ����ת�ַ���
//

//  abc defg
//  cba gfed // �ֱ�����
//  defgabc  // ��������

// �����ַ���

//void Reverse(char* left, char* right) {
//
//	char temp = 0;
//	while (left < right) {
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//#include<string.h>
//void revolve(char ch[], int n) {
//	int len = strlen(ch);
//	Reverse(ch, ch+n-1);
//	Reverse(ch+n,ch+len-1);
//	Reverse(ch, ch+len-1);
//
//
//}
//int main() {
//	char ch[] = "abcdefg";
//	int n = 0;
//	scanf("%d", &n);
//	// ��ת
//	revolve(ch, n);
//	// ���
//	printf("%s\n", ch);
//	return 0;
//}


// ���Ͼ���
// һ����ά����ÿһ�ж�������ÿһ�ж�����
// ����һ�������жϾ������ܲ����ҵ������
// ʱ�临�ӵ�С��O(n)

struct Point {
	int x;
	int y;
};

struct Point find_num(int arr[][3], int r, int c, int k) {
	int x = 0;
	int y = c - 1;
	struct Point p = { -1,-1 };
	while (x<=r-1 && y>=0) {
		if (k < arr[x][y]) {
			y--;
		}
		else if (k>arr[x][y]) {
			x++;
		}
		else {
			p.x = x;
			p.y = y;
			return p;
		}
	}
	return p;
}
int main() {
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d",&k);

	struct Point ret = find_num(arr, 3, 3, k);
	printf("%d %d", ret.x, ret.y);
	return 0;
}






