#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
	ʹ��ð�������Լ�ʵ�� qsort����
*/


// ��������Ԫ�ص�λ�ã��������Ǵ�����һ��Ԫ�صĿ��
// ��ÿ��Ԫ�صĿ��Ϊ���ƣ����Ժܺõ�ȷ��Ҫ������Ԫ�����Ǹ�λ��ֹͣ������Խ�����
void Swap(char* buf1,char* buf2,int width) {
	int i = 0;
	char temp = 0;
	for (i = 0; i < width; i++) {
		temp = buf1[i];
		buf1[i] = buf2[i];
		buf2[i] = temp;

	}
}
// ʵ��qsort // ��Ϊ��֪���������ʲô���ͣ�void* base ����һ������ 
void bubbleSort(void* base, int sz, int width, int(*cmp)(const void* e1,const void* e2)) {
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < sz - 1; i++) { // ����
		// һ��ð������
		int flag = 1; // �����Ѿ������������
		for (j = 0; j < sz - i - 1; j++) {
			
			// (char*)base + j * width
			// ������ǽ�baseǿ��ת��Ϊchar*�����ݣ�ʹ����ÿ��ֻ����תһ���ֽ�
			// Ȼ�����Ǹ��ݴ����ÿ��Ԫ�ؿ�� width ����ÿ����ת�Ĵ�С����������
			// �����Ϳ���ѡȡ����ȷ��λ��
			// ������������ �Լ�д��cmp��������Ԫ�صıȽϣ�������Ǵ��Ƚϵ�����Ԫ�صĵ�ַ
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				// �������뺯��������
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0; // �����ˣ�˵�����������
			}


		}
		if (1 == flag) {
			break;
		}
	}
}

int cmp_int(const void* e1, const void* e2) {
	// ֱ�ӷ������ߵĲ�ֵ���� -- ����
	return (*(int*)e1 - *(int*)e2);

	// ���� ���� e2 - e1 �Ĳ�ֵ
	// return (*(int*)e2 - *(int*)e1);
}

// ���Զ�int���н�������
void test1() {
	int arr[] = { 1,4,5,8,6,7,10,11,14,9,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// ����
	bubbleSort(arr, sz,sizeof(arr[0]), cmp_int);
	// ���
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	// ���� ��int����
}


struct Stu {
	char name[20];
	int age;
};
// strcmp �Ƚ������ַ�����С ����ֵ�� <0, 0 ,>0
int qsort_stu_by_name(const void* e1,const void* e2) {
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
int qsort_stu_by_age(const void* e1, const void* e2) {
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test2() {
	// ����ʹ��sqort ����ṹ�����͵�����
	struct Stu s[] = { {"zhangsan",15} ,{"lisi",30} ,{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	// ������������
	// bubbleSort(s, sz, sizeof(s[0]), qsort_stu_by_name);
	// ������������
	bubbleSort(s, sz, sizeof(s[0]), qsort_stu_by_age);


}

int main() {

	// ���� ��int����
	//test1();
	// ���ԶԽṹ������
	test2();
	return 0;
}