#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
乐乐改数字，输入一个整数
整数某一位是偶数，改为0，奇数改为1
eg：
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
//	// 输入
//	int n = 0;
//	scanf("%d", &n);
//	// 修改
//	int ret = modifyNum(n);
//	// 输出
//	printf("%d\n", ret);
//	return 0;
//}

//
// 打印输出带空格的直角三角形
// 5
//           * 2n -1-0 9
//         * * 2n-2-1 7
//       * * * 2n-3 -2 
//     * * * *
//	 * * * * *
//

//int main() {
//	// 输入
//	int n = 0;
//	scanf("%d", &n);
//	// 打印
//	int i = 0;
//	for (i = 1; i <= n; i++) {
//		int j = 0;
//		// 打印空格
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
//	// 输入
//	int n = 0;
//	scanf("%d", &n);
//	// 打印
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


// nc /bc63 网购
#include <stdio.h>

//int main() {
//    double price = 0.0;
//    int month = 0;
//    int day = 0;
//    int a = 0;
//    double sum = 0.0;
//    while (scanf("%lf %d %d %d", &price, &month, &day, &a) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to   
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



// 打印杨辉三角

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



// 左旋转字符串
//

//  abc defg
//  cba gfed // 分别逆序
//  defgabc  // 整个逆序

// 逆序字符串

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
//	// 旋转
//	revolve(ch, n);
//	// 输出
//	printf("%s\n", ch);
//	return 0;
//}


// 杨氏矩阵
// 一个二维矩阵，每一行都递增，每一列都递增
// 输入一个数，判断矩阵里能不能找到这个数
// 时间复杂的小于O(n)

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






