#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//
// �Զ�������
// �ṹ�塢ö�١����� 
//

// �ṹ��

//struct Stu {
//	char name[20];
//	int age;
//};
//
//
//// �����ṹ�����--ֻ����һ��
//struct {
//	char name[20];
//	int age;
//}s3;


// �ṹ��������

//struct Node {
//	int date;
//	struct Node* next;
//};
//
//int main() {
//	
//	return 0;
//}





// !!! �ṹ���ڴ����
// ����ṹ���ڴ��С

// �ṹ���ڴ����Ĺ���
// 
// 1. ��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
// 2. ������ԱҪ���뵽ĳ�����֣������������������ĵ�ַ��
//    ��������������Ĭ�϶����� �� �ó�Ա��С�� ��Сֵ
//	  VS������Ĭ�϶�������8������������û��Ĭ�϶�����
// 
// 3. �ṹ���ܴ�СΪ����������ÿһ����Ա��������һ����������ȡ���ģ���������
// 4. �������Ƕ�׽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�������������������
//	  �ṹ��������С����������������������������Ƕ�׽ṹ��Ķ�������
//
// 
// ��Ҫ�ṹ������ԭ��
// 1. ƽ̨ԭ����ֲ���⣩����������ƽ̨���ܹ����������ַ������
//						  ĳЩӲ��ƽֻ̨�ܷ����ض���ַ�ϵ����ݣ�����ͻ��׳�Ӳ���쳣
// 
// 2. ����ԭ�����ݽṹ��������ջ����Ӧ�þ����ܵ�����Ȼ�߽��϶��룬
//			   ԭ�����ڣ�δ����ĵ��ڴ棬��������Ҫ���������ڴ���ʣ�
//			   ��������ڴ���ʽ���Ҫһ�μ��ɡ�
// 
// ��Ȼ���ڿռ��˷ѣ���Ч�����������������ÿռ任ʱ��
// �������ƽṹ��ʱ������Ҫ��ռ�ÿռ�С�ĳ�Ա����������һ��
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
//	// offsetof �ܹ����� ��Ա�ͽṹ��֮���ƫ����
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	printf("----S2-----\n");
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));
//	return 0;
//}


//// �޸�Ĭ�϶�����
//#pragma pack(4) // Ĭ�϶�������Ϊ4
//
//struct S  // ������16��������12
//{
//	int i; 
//	double d;
//};
//#pragma pack() // �ָ���Ĭ��8


// �ṹ�崫�� -- ��������ַ
//struct S {
//	int data[100];
//	int num;
//};
//// ѹջ���˷�ʱ��ռ�
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
//	print1(s);//  ������
//	print2(&s);// ��ַ
//
//}



