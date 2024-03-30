#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 
// 常见的内存管理错误
//
// 对NULL的解引用
// 对动态开辟空间的越界访问
// 对非动态开辟的内存进行释放
// 使用free释放一块动态开辟内存的一部分
// 对同一块动态内存空间多次释放
// 动态内存空间忘记释放（内存泄露）
// 


//// 对NULL的解引用
//int main() {
//	int* p = (int*)malloc(40);
//	// 不进行判空，直接解引用，可能为空指针，
//	// 
//	*p = 20;
//	return 0;
//}
//
//// 对非动态开辟的内存进行释放
//int main() {
//	int a = 10;
//	int* p = &a;
//
//	// err
//	//free(p);
//	//p = NULL;
//	return 0;
//}


//// 使用free释放一块动态开辟内存的一部分
//int main() {
//	int* p = (int*)malloc(40);
//	int i = 0;
//
//	for (i = 0; i < 10; i++) {
//		*p = i;
//		p++;
//	}
//	// err，p已经不在起始位置了
//	free(p);
//	p = NULL;
//
//	return 0;
//}


// // 1、指出下面代码的错误
#include<string.h>
//void GetMemory(char* p) {
//	// 形参每次调用函数都会申请100个字节内存空间
//	// 但调用结束后，p就被销毁了，内存泄露
//	p = (char*)malloc(100);
//}
//void test(void) {
//	char* str = NULL;
//
//	GetMemory(str);
//	// str 没被改变，依旧是空指针，使用strcpy对空指针进行copy，非常危险
//	strcpy(str, "Hello World");
//	printf(str);
//}
//int main() {
//	test();
//	return 0;
//}
//// 正确版本
//void GetMemory(char** p) {
//	// 传入的是指针str的地址，所以用二级指针接收
//	// 对二级指针解引用，得到str，此时str才会开辟空间
//	*p = (char*)malloc(100);
//}
//void test(void) {
//	char* str = NULL;
//	// 传递str的指针进去，才会对str中的内容进行修改
//	GetMemory(&str);
//	// str指向的是新开辟的100个字节空间
//	strcpy(str, "Hello World");
//	printf(str);
//	// 释放空间
//	free(str);
//	str = NULL;
//}
//int main() {
//	test();
//	return 0;
//}




// // 2、指出下面代码的错误
//char* GetMemory(void){
//	char p[] = "Hello World";
//	return p;
//}
//
//void test(void) {
//	char* str = NULL;
//	// p地址被传回来了，但p中的内容 被销毁了
//	str = GetMemory();
//	printf(str);
//}
//int main() {
//	test();
//	return 0;
//}


//// // 3、指出下面代码的错误
//void GetMemory(char** p,int num) {
//	*p = (char*)malloc(100);
//}
//void test(void) {
//	char* str = NULL;
//	// 传递str的指针进去，才会对str中的内容进行修改
//	GetMemory(&str,100);
//	// str指向的是新开辟的100个字节空间
//	strcpy(str, "Hello World");
//	printf(str);
//	// 没呀释放内存空间，会造成内存泄露
//
//}
//int main() {
//	test();
//	return 0;
//}

//void test() {
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	// 这里str的指向的100字节大小的空间虽然被释放了
//	// 但str 依然指向之前的空间
//	// 属于野指针
//	
//	str = NULL; // 正确做法
//	if (str != NULL) {
//		strcpy(str, "world");
//		printf(str);
//	}
//
//}



// 
// 内存开辟
// 
// 内存空间分布
// 
// 内核区域（用户代码不能读写）
// 栈区（向下增长）
// 内存映射段（文件映射、动态库、匿名映射）
// 堆区（线上增长）
// 数据段---静态区（全局变量、静态变量）
// 代码段（可执行代码、只读常量）
//








