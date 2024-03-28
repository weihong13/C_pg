#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//
// 自定义类型
// 结构体、枚举、联合 
//

// 结构体

//struct Stu {
//	char name[20];
//	int age;
//};
//
//
//// 匿名结构体变量--只能用一次
//struct {
//	char name[20];
//	int age;
//}s3;


// 结构体自引用

//struct Node {
//	int date;
//	struct Node* next;
//};
//
//int main() {
//	
//	return 0;
//}





// !!! 结构体内存对齐
// 计算结构体内存大小

// 结构体内存对齐的规则
// 
// 1. 第一个成员在与结构体变量偏移量为0的地址处
// 2. 其他成员要对齐到某个数字（对齐数）的整数倍的地址处
//    对齐数：编译器默认对齐数 和 该成员大小的 较小值
//	  VS编译器默认对齐数是8，其他编译器没有默认对齐数
// 
// 3. 结构体总大小为最大对齐数（每一个成员变量都有一个对齐数，取最大的）的整数倍
// 4. 如果存在嵌套结构体的情况，嵌套的结构体对齐到自己最大对齐数的整数倍。
//	  结构体的整体大小就是所有最大对齐数的整数倍（含嵌套结构体的对齐数）
//
// 
// 需要结构体对齐的原因
// 1. 平台原因（移植问题）：不是所有平台都能够访问任意地址的数据
//						  某些硬件平台只能访问特定地址上的数据，否则就会抛出硬件异常
// 
// 2. 性能原因：数据结构（尤其是栈），应该尽可能地在自然边界上对齐，
//			   原因在于，未对齐的的内存，处理器需要进行两次内存访问；
//			   而对齐的内存访问仅需要一次即可。
// 
// 虽然存在空间浪费，但效率有所提升。属于拿空间换时间
// 因此在设计结构体时，我们要让占用空间小的成员尽量集中在一起
// 


//struct S1 {
//	char c1;
//	int i;
//	char c2;
//};
//struct S2 {
//	char c1;
//	char c2;
//	int i;
//};
//struct S3 {
//	double d;
//	char c1;
//	int i;
//};
//struct S4 {
//	
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//
//#include<stddef.h>
//int main() {
//
//	printf("%d\n", sizeof(struct S1)); // 12
//	printf("%d\n", sizeof(struct S2)); // 8
//	printf("----S1-----\n");
//	// offsetof 能够返回 成员和结构体之间的偏移量
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	printf("----S2-----\n");
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));
//	return 0;
//}


//// 修改默认对齐数
//#pragma pack(4) // 默认对齐数改为4
//
//struct S  // 本来是16，现在是12
//{
//	int i; 
//	double d;
//};
//#pragma pack() // 恢复到默认8


// 结构体传参 -- 尽量传地址
//struct S {
//	int data[100];
//	int num;
//};
//// 压栈，浪费时间空间
//void print1(struct S ss) {
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		printf("%d ", ss.data[i]);
//	}
//	printf("%d\n", ss.num);
//}
//
//void print2(const struct S* ps) {
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
//
//int main() {
//	struct S s = { {1,2,3,4,5},100 };
//	print1(s);//  变量名
//	print2(&s);// 地址
//
//}



