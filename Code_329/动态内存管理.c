#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//
// ��̬�ڴ����
// malloc �����ڴ�ռ�
// calloc
// realloc
// free  �ͷ��ڴ�ռ�
// ����Ŀռ䶼���ڶ����������
// 
//

// malloc �����ڴ�ռ�
// void *malloc( size_t size ); ��size ���ٶ��ռ䣩
// malloc ���ٿռ�ʧ�ܣ�����NULL������һ��Ҫ��鷵��ֵ
// ���malloc����Ϊ0��malloc��Ϊ��׼��δ����ģ�ȡ���ڱ�����
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
//	// �ͷ�pָ��
//	free(p);
//	p = NULL;
//	// ����˵��ʹ��free�ͷſռ��һֱռ�ö��ڴ�
//	// ���������֮���ڴ�ͻᱻϵͳ�ջ�
//	// ������Ҫ�����ջأ������ڴ�й¶
//	//
//	return 0;
//}


// calloc 
// void *calloc( size_t num, size_t size ); 
// num ����Ԫ�ظ�����size ÿ��Ԫ�ش�С 
// ���ٿռ�ʱ��������ݳ�ʼ��Ϊ0��malloc�����ֵ

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


// realloc �����ڴ�ռ�
// void* realloc(void* ptr, size_t size);
// ptr��Ҫ�޸��ڴ�ռ����ʼλ��
// size: ������Ĵ�С
// 
// �����ʹ��reallocʱ����һ����ָ�룬�ȼ���malloc
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
//	// ����
//	int* ptr = reaclloc(p, 80);
//	if (ptr != NULL) {
//		p = ptr;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}