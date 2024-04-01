#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
// 
// 预处理详解
// 
// 1、预处理符号 -- 日志文件
// __FILE__ 进行编译的源文件
// __LINE__ 文件当前的行号
// __DATE__ 文件被编译的日期
// __TIME__ 文件被编译的时间
// __STDC__ 编译器是否遵循 ANSI C, 遵循为1，否则未定义
//			VS 不遵循，gcc遵循 
// 
// 2、#define 定义的标识符 和  宏 
// 数字、字符串、代码、关键字
// 在预处理阶段被替换
// 不加分号、分号也会替换
// 
//

// // 1、预处理符号 -- 日志文件
//int main() {
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//		return EXIT_FAILURE; // 错误退出符号
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		fprintf(pf,"FILE:%s  LINE:%d  DATE:%s  TIME:%s  i=%d\n",__FILE__,__LINE__,__DATE__,__TIME__ ,i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 
// 2、#define 定义的标识符 和  宏
// 
// #define  定义的宏！！
// 
// 
////      宏名  参数 宏体
//#define SQUARE(X) X*X
//// 左括号必须和宏名挨着
//// 宏体尽量不吝啬括号
//// 宏不能递归
//// 
//int main() {
//	int r = SQUARE(6); // 36
//	printf("%d\n", r);
//	r = SQUARE(5+1); // 11
//	// 宏是进行替换的，实际上为 r = 5+1*5+1 = 11
//	// X*X //err
//	// ((X)*(X)) // OK
//	printf("%d\n", r);
//	return 0;
//}

// 
// # 和 ##
// # 将参数替换到字符串中
// 
// 
//#define PRINT(N,FOMATE) printf("the value of "#N" is "FOMATE"\n", N);
//int main() {
//	int a = 10;
//	double b = 3.14;
//	PRINT(a, "%d");
//	PRINT(b, "%lf");
//	//printf("the value of a is %d", a);
//	//printf("the value of b is %d", b);
//
//	return 0;
//}

//
// ## 将 ## 两边的内容合并为一个符号 
//
//#define CAT(Class, Num) Class##Num
//int main() {
//	int Class100 = 10;
//	printf("%d\n", CAT(Class, 100));
//	printf("%d\n", Class100);
//	return 0;
//}


//
// 带有副作用的宏参数
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main() {
//	int a = 5;
//	int b = 4;
//	int m = MAX(a++, b++);
//	// ((a++)>(b++)?(a++):(b++))
//	//  5,a=6;4,b=5; 6,a=7 // m 得到6
//	printf("%d\n", m); // 6
//	printf("%d\n", a); // 7
//	printf("%d\n", b); // 5
//
//	return 0;
//}


//// 宏和函数
//// 宏
//#define MAX(x,y) ((x)>(y)?(x):(y))
//// 函数
//int Max(int x,int y) {
//
//	return ((x) > (y) ? (x) : (y));
//}
//
//int main() {
//	// 宏对传入的类型没有限制
//	// 优点：
//	// 宏相对于函数，在程序的规模和速度方面更胜一筹
//	// 只是替换，然后进行计算
//	// 缺点
//	// 每次调用宏都要插入代码
//	// 宏没法调试
//	// 宏与类型无关，不够严谨
//	// 宏可能带来优先级问题
//	//
//	float max = MAX(3.5, 5.4);
//
//	// 函数对传入的参数有明确限制
//	// 函数调用、传参、栈帧创建、计算、函数返回
//	int ret = Max(3, 5);
//	return 0;
//}

//宏也可以传入类型，这是函数做不到的

//#define MALLOC(NUM,TYPE) (TYPE*)malloc((NUM)*sizeof(TYPE))
//int main() {
//	// 在使用malloc的时候就确定好类型
//	// malloc(10, int); //err
//
//	//
//	int* p = MALLOC(10, int);
//	// 替换
//	//int* p = (int*)malloc(10 * sizeof(int));
//
//	free(p);
//	p = NULL; 
//	return 0;
//}


//// #undef M 取消宏定义
//#define M 100
//#undef M