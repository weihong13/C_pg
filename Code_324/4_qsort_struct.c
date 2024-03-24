#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 使用qsort 对 结构体类型数据进行排序
*/

//struct Stu {
//	char name[20];
//	int age;
//};
//// strcmp 比较两个字符串大小 返回值是 <0, 0 ,>0
//// 是一个字符一个字符比较的，不是按照长度
//// abcde 小
//// abqd  大
//int qsort_stu_by_name(const void* e1,const void* e2) {
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int qsort_stu_by_age(const void* e1, const void* e2) {
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test() {
//	// 测试使用sqort 排序结构体类型的数据
//	struct Stu s[] = { {"zhangsan",15} ,{"lisi",30} ,{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	// 按照姓名排序
//	// qsort(s, sz, sizeof(s[0]), qsort_stu_by_name);
//	// 按照年龄排序
//	 qsort(s, sz, sizeof(s[0]), qsort_stu_by_age);
//
//
//}
//
//int main() {
//	test();
//	return 0;
//}