#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// 数据类型
//int main()
//{
//	// printf("Hellow World!!");
//	char a = "郭宏伟";  // 字符型
//	short b = 155555555; // 短整型
//	int c = 152;          // 整型
//	long d = 158168154845145648;  // 长整型
//	long long e = 1581681548451145648;  // 更长的整型
//	float f = 3.1415;          // 单精度浮点型
//	double g = 3.1415926875;  // 双精度浮点型
//
//	// 不同类型所占空间的大小
//	printf("%zu\n", sizeof(char)); // sizeof 谁的大小   char的大小，zu 的意义是打印一个sizeof返回的整型
//	printf("%d\n", sizeof(short)); // sizeof 谁的大小   short的大小
//	printf("%d\n", sizeof(int)); // sizeof 谁的大小   int的大小
//	printf("%d\n", sizeof(long)); // sizeof 谁的大小   long的大小
//	printf("%d\n", sizeof(long long)); // sizeof 谁的大小   long long的大小
//	printf("%d\n", sizeof(float)); // sizeof 谁的大小   float的大小
//	printf("%d\n", sizeof(double)); // sizeof 谁的大小   double的大小
//	// 结果 1 2 4 4 8 4 8  单位是字节
//	// C语音规定 sizeof（long）>= sizeof（int）即可
//	return 0;
//}

// 变量和常量
// 变量：局部变量（{}里的变量）、全局变量{}外的变量

//int a = 12; // 全局变量
//int main()
//{
//	int a = 1; //局部变量
//	// int a = 100; 运行报错，在同一个范围内，只能定义一次 
//	printf("a=%d", a); // 当全局变量与局部变量相同时，优先使用局部变量
//	return 0;
//}

//// 计算两个数的和
//int main()
//{
//	int a = 0;
//	int b = 0;
//	// 输入两个数
//	scanf("%d %d",&a,&b); // &a 指 a 的地址
//
//	// 求和
//	int sum = a + b;
//	// 输出
//	printf("%d\n",sum);
//	return 0;
//}

// 变量的作用域
// 局部变量的作用域是变量所在的局部范围
// 全局变量的作用域是整个工程

// 声明来自外部的符号
//extern int a;
//
//test() 
//{
//	printf("test--->%d\n",a);
//}
//
//int main()
//{
//	test();
//	{
//		printf("%d\n",a);
//	}
//	printf("a=%d\n",a);
//	return 0;
//}

// 变量生命周期
// 局部变量的生命周期的从进入作用域开始，出作用域结束
// 全局变量的生命周期是整个程序的生命周期，

// 常量 
// 1. 字面常量 10、3.14、'w'、"ghw"
// 2. const 修饰的常变量
// 3. define 定义的标识符常量
// 4. 枚举常量

// 2. const 修饰的常变量
//int main()
//{
//	const int a = 10; // a 为 const修饰的常变量，无法被改变
//	// a = 20;  //会报错
//
//	return 0;

//}
// 3. define 定义的标识符常量
//#define Max 100
//#define STR "ABCDEFG"
//int main() {
//
//	printf("%d\n", Max);
//	int a = Max;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	// Max = 200; 会报错
//	return 0;
//}

// 枚举常量

//enum Color {
//	// 枚举常量
//	RED,
//	GREEN,
//	BIUE
//};
//
//int mian() {
//	// 三原色
//	// 创建对象
//	enum Color c = RED;
//	return 0;
//}


//// 字符串
//// char 字符类型
//// c语言种没有字符串类型
//#include <string.h>
//
//int main() {
//
//	char arr1[] = "abcdefg";// 隐藏了\0
//	// 通过监视发现，字符串的结束标志是\0,没有 \0 就不知道在哪里结束，
//	// 在打印时，在内存内部就会遇到\0才会结束
//	char arr2[] = { 'a','b','c','d','e','f','g','\0'};
//	// strlen()	求字符串长度的函数 string length
//	// 使用该函数需要导入库函数，头文件 string.h
//	int len = strlen(arr2);
//	printf("%d\n", len);
//	return 0;
//}

//// 转义字符
//int main() {
//
//	// \ddd 1-3个八进制字符
//	printf("%c\n", '\130'); // 输出X，代表把八进制下的133转为十进制下的88，88所对应的ASC码值为X
//
//	//xdd 
//	printf("%c",'\x060');  // 代表把十六进制下的60转换为十进制下的96，96对应的ASC码值为'
//
//	return 0;
//}