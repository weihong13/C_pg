#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// �ṹ��
// �ṹ�����͵��������ṹ���ʼ�����ṹ���Ա���ʡ��ṹ�崫��



//struct Peo {
//	char name[20];
//	char tel[12];
//	char sex[5];
//	int hight;
//}p1,p2;  //����ȫ�ֵĽṹ�����

//struct Peo {
//	char name[20];
//	char tel[12];
//	char sex[5];
//	int hight;
//};
//struct std {
//	struct Peo p;
//	int num;
//	float f;
//};
//// �ṹ�����.��Ա����
//void print1(struct Peo p) { // p�Ŀ������˷�ʱ��ռ�
//	printf("%s %s %s %d\n", p.name, p.tel, p.sex, p.hight);
//}
//// �ṹ��ָ��->��Ա����
//void print2(struct Peo* sp) {
//	printf("%s %s %s %d\n", sp->name, sp->tel, sp->sex, sp->hight);
//}
//int main() {
//
//	struct Peo p1 = {"weihong","1008611","��",183}; //�ṹ������Ĵ���
//
//	struct std s = { {"weihong","1008611","��",183},100,3.1415};
//
//	printf("%s %s %s %d\n", p1.name, p1.tel, p1.sex, p1.hight);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tel, s.p.sex, s.p.hight, s.num, s.f);
//
//	print1(p1);
//
//	print2(&p1);
//
//
//	return 0;
//}

// �������Ķ��������м���1
// 1
//int count_1(unsigned int n) { // ���������תΪ�޷������������Դ�����
//	int count = 0;
//	while (n) {
//		if ((n % 2 == 1)) {
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

// 2
//int count_1(int n) {
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		if ((n >> i & 1) == 1) {
//			count++;
//		}
//	}
//	return count;
//}


// 3
// n = 15;
// n = n & (n - 1);
// 1111
// 1110
// 1110 n
// 1101 n-1
// 1100 n
// 1011 n-1
// 1000 n
// 0111 n-1
// 0000 n
//int count_1(int n) {
//	int count = 0;
//	while (n) {
//		n= n& (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = count_1(num);
//	printf("%d", ret);
//	return 0;
//}


// �������� �Ķ������У��м�λ��ͬ
//// 1 ȥ��ÿһλ
//int count_diff(int n, int m) {
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//
//		if (((n >> i) & 1) != ((m >> i) & 1)) {
//			count++;
//		}
//	}
//	return count;
//}

//// 2 ^ ���
//int count_diff(int n, int m) {
//	int count = 0;
//	int ret = n^m; // ��ͬΪ0������Ϊ1
//	// ֱ��ͳ�� ret���м���1
//	while (ret) {
//		ret= ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int ret = count_diff(n, m);
//	printf("%d", ret);
//	return 0;
//}

// ȫ�ֱ�������̬�������Ǵ洢�ھ�̬����
// ȫ�ֱ�������̬����δ��ʼ����ʱ��Ĭ�ϻᱻ��ʼ��Ϊ 0
// �ֲ���������ջ���洢������ʼ����ʱ�������ֵ

//int i; // Ĭ����0
//int main() {
//	
//	i--; // -1
//	 // sizeof(i) = 4����������ǣ�����Ϊsizeof���㷵�صĽ����size_t���ͣ��޷������ͣ� 
//	// ���� -1 ��һ���޷������ͱȽ�ʱ���Ὣ-1 Ҳת��Ϊһ���޷������� ������ת����
//	// 1111 1111 1111 1111 1111 1111 1111 1111������
//	// ���ԣ�������������
//	if (i > sizeof(i)) {
//		printf(">\n");//�������
//	}
//	else {
//		printf("<\n");
//	}
//	return 0;
//}


// Debug  ���԰汾  ���ڳ���Ա����
// Release �����汾  �����ܽ����Ż������ڿͻ�ʹ��




//// ����
//int main() {
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++) { // �������
//		printf("%d  ", i);
//	}
//	for (i = 0; i < 10; i++) { // ���öϵ�
//		printf("%d  ", arr[i]);
//	}
//
//	return 0;
//}

// 1! + 2! + 3! +...+ n!

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) {
//		// ÿ����Ҫ���� ret
//		ret = 1;
//		for (j = 1; j <= i; j++) {
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d ", sum);
//	return 0;
//}


//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++) {
//		// ������ ret
//		// ��3��,ret�Ѿ�����2����ֱ�ӳ�3���У���n�Ľ׳ˣ�ret�Ѿ���n-1�Ľ׳�
//		ret *= i;  
//		sum += ret;
//	}
//
//	printf("%d ", sum);
//	return 0;
//}



// ���ھֲ�������ջ�����ǴӸߵ��ʹ洢��
// ���������ڴ����� �ɵ͵��� �洢��
// ��� i �ڸ�λ���� arr�ӵ͵��߷��ʵ�Խ��Ԫ��֮�󣬾ͺ��п��ܻ���ʵ� ��λ�� i
// ���� �� arr[12] ��Խ����ʵ���i������ i ��ֵ�޸�Ϊ0��
// ��� ������ ��ѭ��
//int main() {
//	// �ֲ�����
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	for (i = 0; i <= 12; i++) { // Խ��ķ��ʣ����ܻ������ѭ��������&i �� &arr[12] һ��
//		arr[i] = 0;
//		printf("weihong %d\n",i);
//	}
//	return 0;
//}


// strcpy
#include<string.h>
#include<assert.h>
// 1
//void my_strcpy(char* arr1, const char* arr2) {
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//
//}

// 2
// const �� * �� *ָ�� ���ܱ��޸�
// coust �� * �ң� ָ�벻���޸�
//void my_strcpy(char* arr1, const char* arr2) {
//	// ����
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++) 
//	{
//		;
//	}
//}

// 3
// Ϊʲô����char*��
// ������ʽ����
// strcpy���ص���Ŀ��ռ����ʼ��ַ
char* my_strcpy(char* arr1, const char* arr2) {
	char* ret = arr1;
	// ����
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (*arr1++ = *arr2++) 
	{
		;
	}
	// return arr1; //err,arr1 �Ѿ����ı�
	return ret; // ok
}
int main() {
	char arr1[20] = "XXXXXXXXXXXXXX";
	char arr2[] = "WeiHong";
	// strcpy �ڿ����ַ���ʱ�����\0Ҳ������ȥ
	// strcpy(arr1, arr2);
	
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}


// const ����
// const int* p = &m
// const �� * ��*p = 0�����޸ģ� p = &n�����޸�
// int* const p = &m
// const �� * �ң�p = &n�����޸ģ�*p = 0�����޸�
//
//int main() {
//	int m = 10;  // ����m ��10��
//	int n = 100; // ����n ��100
//
//	//int* p = &m; // Ů��p �� m ������
//	// *p = 0; // Ů������Ƥ���к�m 10��Ǯ��Ϊ0��
//
//	//const int* p = &m; // �к�m ���뻨Ǯ����const�� * ��
//	// *p = 0; // err  // ��ʱ �޷���Ǯ
//
//	//p = &n; // ok  // Ů���������� n ���ԣ�
//
//	int* const p = &m; // �к�m �� ������Ů���������ѣ�*�ң���const
//	// p = &n; // err    // ��ʱ���޷���������
//	return 0;
//}



// �����Ĵ���
// 1.�����ʹ����﷨����
// 2.�����ʹ��󣨳����������ڼ䣩 test.c ---> ���� ---> ���� ---> ��ִ���ļ�.exe
// 3.����ʱ����
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b); //������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬
//	// ����	LNK2019	�޷��������ⲿ���� _Add������ _main �������˸÷���	
//	// LNK ���Ӵ���
//
//	return 0;
//}