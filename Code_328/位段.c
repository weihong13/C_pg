#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 
// 位段--省吃俭用版结构体
// 成员必须是 ：int、unsigned int 、 signed int、char也行
// 
// 位段成员变量名后 是 冒号：数字
// 数字表示该成员变量 占多少位
// 
// 能在一定程度上节省空间
// 
// 
// 位段的内存开辟
// 成员是int类型，一次开辟4个字节，不够再开辟4个字节
// 成员是char类型，一次1个字节
// 但具体是如何存储的，不得而知
// 因此位段是不跨平台的，注重可移植程序应该避免使用位段
// 

//struct A {
//	// 4byte--32bit
//	int a : 2; // 占两个比特位
//	int b : 5; 
//	int c : 10;
//	// 剩了15个比特位，不够下一个30，就会再开辟4个字节
//	// 4byte--32bit
//	int d : 30;
//	// 一共八个比特位。
//};
//int main() {
//
//	printf("%d\n", sizeof(struct A)); // 8
//
//	return 0;
//}


struct S {
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main() {
	struct S s = {0};
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	return 0;
}


//
// 位段跨平台的问题
// int 被当作有符号位数还是 无符号位数是不确定的
// 位数的最大位的数目是不确定的。（16位机器写 30 就会报错）
// 位段成员在内存中从左向右分配，还是从右向左分配，标准尚未定义
// 当一个结构体包含两个位段时，第二个位段较大，无法容纳与第一个位段时，是舍弃剩余，还是利用剩余，还是不确定的
// 
// 
// 位段在网路中使用较多
//

