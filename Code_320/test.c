#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//	// ָ�����ڴ�����С��Ԫ�ı�ţ�Ҳ�е�ַ
//	int a = 10;
//
//	// ָ������Ǵ�ŵ�ַ�ı���������ͨ��ָ������ҵ��ڴ��е�ĳһ��ַ
//	int* pa = &a;
//
//	// ����32λ�Ļ�����������32����ַ�ߣ������ĵ�ַ���� 
//	// 0000 0000 0000 0000 0000 0000 0000 0000 ~ 1111 1111 1111 1111 1111 1111 1111 1111
//	// 2^32����ַ���У�ÿ����ַ��һ���ֽڱ�ţ�����4GB
//	// 64����ַ�ߣ�17,179,869,184GB
//
//	return 0;
//}

// ָ�����͵�����

//int main() {
//
//	int a = 0x11223344;
//	
//	//int* pa = &a; // *pa = a= 0x11223344
//	//*pa = 0;      //�ڴ���Ϊ0x44332211 ����֮��Ϊ 0x00000000 4���ֽ�ȫ���޸�
//
//	char* pa = &a;  // ���棺�ӡ�int * ������char* �������Ͳ�����	*pa = a= 0x11223344
//	*pa = 0;  // �ڴ���Ϊ0x44332211��˵��char*���Դ��int*�ĵ�ַ���ֽ���ͬ ����֮��Ϊ 0x00332211 ֻ�޸�һ���ֽ�
//
//	// ���ԣ�
//	// ָ�����;����ˣ���ָ�뱻 �����õ�ʱ����ʼ����ֽ�
//	// ���磬int*��ָ������ã�������4���ֽڣ�char*���͵�ָ�룬�����÷�����1���ֽ�
//	// �ƹ㵽�������ͣ�double*���͵�ָ�룬��������ʱ������8���ֽ�
//
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//
//	printf("%p\n", pa);    // 0079F9BC  
//	printf("%p\n", pa+1);  // 0079F9C0  ����4���ֽ�
//	printf("%p\n", pc);    // 0079F9BC
//	printf("%p\n", pc+1);  // 0079F9BD  ����һ���ֽ�
//
//	// ��ˣ���ͬ��ָ�����;����� �ڶ�ָ��������в���ʱ�����ʵ�ַ�ķ�ʽ
//	// ����밴�� int*���͵ķ�ʽ�����ͻ���һ�����͵Ĵ�С -- 4byte
//	// ����밴�� char*���͵ķ�ʽ�����ͻ���һ��char�Ĵ�С -- 1byte
//	return 0;
//}

//int main() {
//	int a = 0;
//	int* pi = &a;  // pi �����÷���4���ֽڣ�pi+1Ҳ����4���ֽ�
//	float* pf = &a; // pf �����÷���4���ֽڣ�pi+1Ҳ����4���ֽ�
//	// ������������
//	// *pi = 100; // ��ʱ a�ڴ���� 0x 64 00 00 00
//	*pf = 100; // ��ʱ a�ڴ���� 0x 00 00 c8 42
//
//	return 0;
//}


// Ұָ�룬ָ������

// Ұָ��
// 1.δ��ʼ����ָ��
// 2.ָ��Խ�����
// 3.ָ��ָ���ڴ�ռ��ͷŵĵ�ַ

// 1.δ��ʼ����ָ��
//int main() {
//	int* p;
//	// ���ݺ���ջ֡�Ĵ��������٣����� pδ��ʼ����������һ���漴ֵ��һ���� 0xcccccccc
//	*p = 10; //����� 0xcccccccc ��ֵ��������Ұָ����
//	return 0;
//}


// 2.ָ��Խ�����
//int main() {
//	int arr[10] = {0};
//	int* p = &arr;
//	int i = 0;
//	// ����i=10 ���� Խ����ʣ���ʱp��Ұָ��
//	for (i = 0; i <= 10; i++) {
//		*p = i;
//		p++;
//	}
//	return 0;
//}

 
// 3.ָ��ָ���ڴ�ռ��ͷŵĵ�ַ
//int* test() {
//	int a = 10; // �ֲ��������ں�����������֮��ͱ�������
//	return &a;
//}
//int main() {
//	// ���� test���������ڵ������a�������ˣ����� pָ�� ������a�ĵ�ַ������Ұָ��
//	int* p = test();
//	printf("Hello");
//	if(p != NULL){
//		 printf("%d",*p); // ����10��
// }
//	return 0;
//}

//int main() {
//	int a = 10;
//	int* p = &a; //��ȷ����ĳ����ַ
//
//	int* p1 = NULL; // ��֪����˭���͸�һ����ָ��
//	// *p1 = 100; // err
//	return 0;
//}



// ָ�������

// ָ�� +- ����
#define arr_value 5
//int main() {
//	int arr[arr_value];
//	int* pa;
//	// ָ���ʼ����ָ���ϵ����
//	for (pa = &arr[0]; pa < &arr[arr_value];) {
//		// *pa = 1; pa++;
//		*pa++ = 1; // ָ��+ -
//
//	}
//
//	return 0;
//}
//int main() {
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++) {
//	//	*p = i;
//	//	p++;
//
//	//}
//	// Ч��һ��
//	for (i = 0; i < sz; i++) {
//
//		*(p + i) = 1;
//
//	}
//	return 0;
//}

// ָ�� - ָ��
//int main() {
//	int arr[10] = { 0 };
//	printf("%d ", &arr[9] - &arr[0]); // 9
//	// ָ�� - ָ�� ����ֵ �õ����� ָ��֮���Ԫ�ظ���
//	// �������е�ָ�붼�����
//	// ָ��ͬһ���ռ��ָ�������������
//
//	return 0;
//}

// ���ַ�������
#include<stdio.h>
// 1
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
// �ݹ�
//int my_strlen(char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	return 1+my_strlen(str+1);
//}
//// ָ��-ָ��
////int my_strlen(char* str) {
////	char* star = str;
////	while (*str != '\0') {
////		str++;
////	}
////	return (str-star);
////}
//int main() {
//	char str[10] = "weihong";
//	// ʹ�ÿ⺯��
//	// int len = strlen(str);
//	// �Լ�д����
//	int len = my_strlen(str); // �����ַ������ Ҳ��ָ�룬���׸��ַ��ĵ�ַ
//
//	printf("%d", len);
//	return 0;
//}

// ָ��Ĺ�ϵ����

//int main() {
//	int arr[arr_value];
//	int* p;
//	// ��������
//	// ��һ������
//	//for (p = &arr[arr_value]; p > &arr[0];) {
//
//	//	*--p = 1;
//	//}
//	for (p = &arr[arr_value-1]; p >= &arr[0];p--) {
//
//		*p = 1;
//	}
//	// �����������������ִ�У�����׼����֤����ִ��
//	// ��׼�涨�������ڵ�ָ����Ժ��������һ��Ԫ�غ����ָ����бȽϣ�
//	// �����ܺ������һ��Ԫ��֮ǰ��ָ����бȽ�
//
//	for (int i = 0; i < arr_value; i++) {
//
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



// ���飺һ����ͬ���͵�Ԫ��
// ָ�룺��ַ
// ����������Ԫ�ص�ַ��������������²��ǣ�1.sizeof 2. &��������

//int main() {
//	int arr[10] = { 0 };
//	int* p = arr; // ��Ԫ�ص�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%p  -------  %p\n", &arr[i], p+i);
//	}
//	// arr[i] = *(arr+i) = *(p+i)
//	return 0;
//}


// ����ָ��
// ���һ��ָ���ַ��ָ�� 

// ָ������
// ���ָ�������

int main() {
	int arr[3][4] = { 1,2,3,4,2,3,4,5,6,7,8,9 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------\n");
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 1,2,3,4 };
	int arr3[4] = { 1,2,3,4 };
	int* parr[3] = { arr1,arr2,arr3 };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
	return 0;
}