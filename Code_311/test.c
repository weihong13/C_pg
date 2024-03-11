#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//
//	// \0是字符串结束标致
//	// EOF-end of file 文件结束的标志 值是-1
//	// 数组初始化的时候，可以不指定数组的大小  int arr[] = {1,2,3};
//
//	//// 不完全初始化，剩余的部分默认为0
//	//char arr[4] = { 'G','H','W' };
//	//printf("%d", strlen(arr)); // 在内存中遇到\0结束，随机值
//
//	// c99之前，数组大小只能用常量或常量表达式指定
//	// // int arr[10]={0};
//	// // int arr[4+6]={0};
//	// 
//	// c99之后，数组大小可以是变量，但这种数组不能初始化
//	// // int n = 10;
//	// // int arr[n];
//
//
//	return 0;
//}

//// 写一个函数，求两个数的较大值
//int Max(a, b) {
//	int z;
//	if (a > b) {
//		z = a;
//	}
//	else {
//		z = b;
//	}
//	return z;
//}
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = Max(a, b);
//	printf("%d", max);
//	return 0;
//}

// 操作符

//// /除法 % 取模
//int main() {
//
//	// 除号 两端操作数都是整数时，执行整数除法。只保留整数位；有一个浮点数，就执行浮点数除法
//	// 取模 两端操作数只能是整数
//	float a = 7 / 2.0;
//	int b = 7 % 2; //取模 取余
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//
//	return 0;
//
//}

// 赋值操作符
// = += -= *= /= ^=

// 单目操作符
// 只需要一个操作数 ！、-、+、&（取地址）、*、sizeof()、（类型）强制类型转换
//int main() {
//
//	//int a = 10;
//	//printf("%d", sizeof(a)); // 4
//	//printf("%d", sizeof(int));// 4
//	//printf("%d", sizeof a);// 4
//
//	//int arr[10] = { 0 };
//	//printf("%d", sizeof(arr));  // 40 计算整个数组的大小
//	//printf("%d", sizeof(arr[0])); // 4 计算数组元素的大小
//	//printf("%d", sizeof(arr)/sizeof(arr[0]));// 10 数组元素个数
//
//	//// ++  --
//	//// a++ 先赋值再运算；++a 先运算再赋值
//
//	//int n = 10;
//	//int m = a++; // int m = a; a=a+1;
//	//printf("%d", m); // 10
//	//printf("%d", n);// 11
//
//
//	// （类型）强制类型转换
//
//	int a = (int)3.14;
//	//3.14  字面浮点数，编译器默认为double类型
//	printf("%d", a);
//	return 0;
//
//}


// 逻辑与&&   逻辑或 ||  注意短路操作!!!

// 三目操作符  exp1?exp2:exp3 
// 表达式1为真，执行表达式2；表达式1为假，执行表达式3
//int main() {
//
//	int a = 10;
//	int b = 20;
//	int r = (a > b ? a : b);
//	printf("%d", r);
//
//	return 0;
//}


// 逗号表达式
// 用逗号隔开的几个表达式，从左向右依次计算，整个表达式的结果是最后一个表达式的结果
//int main() {
//
//	int a = 50;
//	int b = 20;
//	int c = 0;
//	//         c = 30;   a=30;   c=20;  
//	int m = (c = a - b, a = 30, c - 10); // m = 20;
//
//	return 0;
//}




