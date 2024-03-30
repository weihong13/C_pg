#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

//
// 柔性数组成员--结构体中的最后一个元素允许是未知大小的数组。
// 必须在结构体中，且必须是最后一个成员、且该数组大小未知
// 
// 特点
// 结构体中，柔性数组成员前，至少要有一个其他成员
// sizeof返回的结构体大小，不包括柔性数组内存
// 包含柔性数组的结构体，需要用malloc进行内存分配，并且分配的内存大小应该大于结构体大小，以适应柔性数组预期大小
// 
//
//typedef struct st_type {
//
//	int i;
//	int a[0];// 柔性数组成员，0表示数组元素未知，
//	// 某些编译器可能无法编译
//	// int a[]; 改成这样
//
//}type_a;
//
//int main() {
//	int sz = sizeof(type_a); // 4
//	printf("%d\n", sz);
//
//	// 错误使用，这里没有柔性数组的空间
//	// type_a a; // 4个字节
//	
//	// 柔性数组的正确使用
//	type_a* t_a =  (type_a*)malloc(sizeof(type_a) + 40); // 结构体大小（是不包含柔性数组的）+ 期望柔性数组的大小
//
//	return 0;
//}


struct S {
	int count;
	int* arr;
};

int main() {
	
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (NULL == ps) {
		printf("%s\n", strerror(errno));
		return 1;
	}
	ps->count = 100;
	ps->arr = (int*)malloc(40);
	if (NULL == ps->arr) {
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++) {
		ps->arr[i] = i;
	}
	// 扩容
	int* ptr = (int*)realloc(ps->arr, 80);
	if (NULL == ptr) {
		printf("%s\n", strerror(errno));
		return 1;
	}
	ps->arr = ptr;
	ptr = NULL;
	// 释放空间
	free(ps->arr);
	// 先释放arr，再释放ps，不然arr找不到了
	free(ps);
	ps = NULL;
	return 0;
}