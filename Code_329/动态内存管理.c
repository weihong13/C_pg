#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//
// 动态内存管理
// malloc 申请内存空间
// calloc
// realloc
// free  释放内存空间
// 申请的空间都是在堆区上申请的
// 
//

// malloc 申请内存空间
// void *malloc( size_t size ); （size 开辟多大空间）
// malloc 开辟空间失败，返回NULL，所以一定要检查返回值
// 如果malloc参数为0，malloc行为标准是未定义的，取决于编译器
// 
// 
#include<stdlib.h>
#include<string.h>
//int main() {
//	//
//	int arr[10] = { 0 };
//	//
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//	}
//
//	// 释放p指针
//	free(p);
//	p = NULL;
//	// 不是说不使用free释放空间就一直占用堆内存
//	// 当程序结束之后，内存就会被系统收回
//	// 但还是要进行收回，避免内存泄露
//	//
//	return 0;
//}


// calloc 
// void *calloc( size_t num, size_t size ); 
// num 开辟元素个数，size 每个元素大小 
// 开辟空间时，会把内容初始化为0，malloc是随机值

//int main() {
//
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


// realloc 调整内存空间
// void* realloc(void* ptr, size_t size);
// ptr：要修改内存空间的起始位置
// size: 调整后的大小
// 
// 如果在使用realloc时传入一个空指针，等价于malloc
//

//int main() {
//
//	int* p = (int*)malloc(40);
//	if (NULL == p) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(p + i) = i + 1;
//	}
//	// 扩容
//	int* ptr = reaclloc(p, 80);
//	if (ptr != NULL) {
//		p = ptr;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}