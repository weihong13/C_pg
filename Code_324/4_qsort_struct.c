#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 ʹ��qsort �� �ṹ���������ݽ�������
*/

//struct Stu {
//	char name[20];
//	int age;
//};
//// strcmp �Ƚ������ַ�����С ����ֵ�� <0, 0 ,>0
//// ��һ���ַ�һ���ַ��Ƚϵģ����ǰ��ճ���
//// abcde С
//// abqd  ��
//int qsort_stu_by_name(const void* e1,const void* e2) {
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int qsort_stu_by_age(const void* e1, const void* e2) {
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test() {
//	// ����ʹ��sqort ����ṹ�����͵�����
//	struct Stu s[] = { {"zhangsan",15} ,{"lisi",30} ,{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	// ������������
//	// qsort(s, sz, sizeof(s[0]), qsort_stu_by_name);
//	// ������������
//	 qsort(s, sz, sizeof(s[0]), qsort_stu_by_age);
//
//
//}
//
//int main() {
//	test();
//	return 0;
//}