#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 函数的声明和定义
// 
// 函数的声明--定义在main函数后面的 函数 在编译时会报警告，这里可以先声明，再定义
// 函数的声明，一般放入 头文件中 
//int Add(int x, int y); //这里不写 x  y也行
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}
//// 函数的定义
//int Add(int x, int y) {
//
//	return x + y;
//}


//// 自己定义的头文件，用" ", 
//#include "add.h"  // 该头文件 就是 将头文件的内容拷贝过来
//
//// 导入静态库
//#pragma comment(lib,"Code_316_Sub")
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	// 加法
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	// 减法
//	int sub = Sub(a, b);
//	printf("%d\n", sub);
//	return 0;
//}


//  ***函数递归***
// 大事化小
// 递归的两个必要条件
// 1、存在限制条件，可以结束递归
// 2、每次递归，越来越接近限制条件

// 输入1234
// 打印 1 2 3 4

//// 递归的实现
//void print(unsigned int n) {
//	// 栈区 的内容 ：局部变量，函数的返回值，每一次函数的调用，都会在栈区申请空间
//	if (n>9) { // 去掉 if ，就会死递归，一直调用自己，报错Stack overflow 栈溢出
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


//// %d 打印整数，有正有负
//// %u 打印无符号整数，没有符号，无负数
//int main() {
//	unsigned int num = 0;
//	scanf("%d", &num); //1234
//	while (num) {
//		printf("%u ", num % 10); //4 3 2 1
//		num = num / 10;
//	}
//
//}



// 不允许使用临时变量，求字符串长度

//int my_strlen(char* str) {
//	int count = 0; //临时变量
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}

//// 递归求解
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


//// 求 n！
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


//// 求第n个斐波那契数列
//// 1 1 2 3 5 8 13 21 34 55 ......
//int count = 0;
//int fib(int x) {
//	if (3 == x) {
//		count++; // 计算 n=3 有多少次
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
// // 计算 40 的时候 n=3 被运行了 3000w次，这样很不好，造成浪费，使用迭代

// 函数迭代
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


