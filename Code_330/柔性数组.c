#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

//
// ���������Ա--�ṹ���е����һ��Ԫ��������δ֪��С�����顣
// �����ڽṹ���У��ұ��������һ����Ա���Ҹ������Сδ֪
// 
// �ص�
// �ṹ���У����������Աǰ������Ҫ��һ��������Ա
// sizeof���صĽṹ���С�����������������ڴ�
// ������������Ľṹ�壬��Ҫ��malloc�����ڴ���䣬���ҷ�����ڴ��СӦ�ô��ڽṹ���С������Ӧ��������Ԥ�ڴ�С
// 
//
//typedef struct st_type {
//
//	int i;
//	int a[0];// ���������Ա��0��ʾ����Ԫ��δ֪��
//	// ĳЩ�����������޷�����
//	// int a[]; �ĳ�����
//
//}type_a;
//
//int main() {
//	int sz = sizeof(type_a); // 4
//	printf("%d\n", sz);
//
//	// ����ʹ�ã�����û����������Ŀռ�
//	// type_a a; // 4���ֽ�
//	
//	// �����������ȷʹ��
//	type_a* t_a =  (type_a*)malloc(sizeof(type_a) + 40); // �ṹ���С���ǲ�������������ģ�+ ������������Ĵ�С
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
	// ����
	int* ptr = (int*)realloc(ps->arr, 80);
	if (NULL == ptr) {
		printf("%s\n", strerror(errno));
		return 1;
	}
	ps->arr = ptr;
	ptr = NULL;
	// �ͷſռ�
	free(ps->arr);
	// ���ͷ�arr�����ͷ�ps����Ȼarr�Ҳ�����
	free(ps);
	ps = NULL;
	return 0;
}