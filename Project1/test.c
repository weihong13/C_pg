#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// ��������
//int main()
//{
//	// printf("Hellow World!!");
//	char a = "����ΰ";  // �ַ���
//	short b = 155555555; // ������
//	int c = 152;          // ����
//	long d = 158168154845145648;  // ������
//	long long e = 1581681548451145648;  // ����������
//	float f = 3.1415;          // �����ȸ�����
//	double g = 3.1415926875;  // ˫���ȸ�����
//
//	// ��ͬ������ռ�ռ�Ĵ�С
//	printf("%zu\n", sizeof(char)); // sizeof ˭�Ĵ�С   char�Ĵ�С��zu �������Ǵ�ӡһ��sizeof���ص�����
//	printf("%d\n", sizeof(short)); // sizeof ˭�Ĵ�С   short�Ĵ�С
//	printf("%d\n", sizeof(int)); // sizeof ˭�Ĵ�С   int�Ĵ�С
//	printf("%d\n", sizeof(long)); // sizeof ˭�Ĵ�С   long�Ĵ�С
//	printf("%d\n", sizeof(long long)); // sizeof ˭�Ĵ�С   long long�Ĵ�С
//	printf("%d\n", sizeof(float)); // sizeof ˭�Ĵ�С   float�Ĵ�С
//	printf("%d\n", sizeof(double)); // sizeof ˭�Ĵ�С   double�Ĵ�С
//	// ��� 1 2 4 4 8 4 8  ��λ���ֽ�
//	// C�����涨 sizeof��long��>= sizeof��int������
//	return 0;
//}

// �����ͳ���
// �������ֲ�������{}��ı�������ȫ�ֱ���{}��ı���

//int a = 12; // ȫ�ֱ���
//int main()
//{
//	int a = 1; //�ֲ�����
//	// int a = 100; ���б�����ͬһ����Χ�ڣ�ֻ�ܶ���һ�� 
//	printf("a=%d", a); // ��ȫ�ֱ�����ֲ�������ͬʱ������ʹ�þֲ�����
//	return 0;
//}

//// �����������ĺ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	// ����������
//	scanf("%d %d",&a,&b); // &a ָ a �ĵ�ַ
//
//	// ���
//	int sum = a + b;
//	// ���
//	printf("%d\n",sum);
//	return 0;
//}

// ������������
// �ֲ��������������Ǳ������ڵľֲ���Χ
// ȫ�ֱ���������������������

// ���������ⲿ�ķ���
//extern int a;
//
//test() 
//{
//	printf("test--->%d\n",a);
//}
//
//int main()
//{
//	test();
//	{
//		printf("%d\n",a);
//	}
//	printf("a=%d\n",a);
//	return 0;
//}

// ������������
// �ֲ��������������ڵĴӽ���������ʼ�������������
// ȫ�ֱ�������������������������������ڣ�

// ���� 
// 1. ���泣�� 10��3.14��'w'��"ghw"
// 2. const ���εĳ�����
// 3. define ����ı�ʶ������
// 4. ö�ٳ���

// 2. const ���εĳ�����
//int main()
//{
//	const int a = 10; // a Ϊ const���εĳ��������޷����ı�
//	// a = 20;  //�ᱨ��
//
//	return 0;

//}
// 3. define ����ı�ʶ������
//#define Max 100
//#define STR "ABCDEFG"
//int main() {
//
//	printf("%d\n", Max);
//	int a = Max;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	// Max = 200; �ᱨ��
//	return 0;
//}

// ö�ٳ���

//enum Color {
//	// ö�ٳ���
//	RED,
//	GREEN,
//	BIUE
//};
//
//int mian() {
//	// ��ԭɫ
//	// ��������
//	enum Color c = RED;
//	return 0;
//}


//// �ַ���
//// char �ַ�����
//// c������û���ַ�������
//#include <string.h>
//
//int main() {
//
//	char arr1[] = "abcdefg";// ������\0
//	// ͨ�����ӷ��֣��ַ����Ľ�����־��\0,û�� \0 �Ͳ�֪�������������
//	// �ڴ�ӡʱ�����ڴ��ڲ��ͻ�����\0�Ż����
//	char arr2[] = { 'a','b','c','d','e','f','g','\0'};
//	// strlen()	���ַ������ȵĺ��� string length
//	// ʹ�øú�����Ҫ����⺯����ͷ�ļ� string.h
//	int len = strlen(arr2);
//	printf("%d\n", len);
//	return 0;
//}

//// ת���ַ�
//int main() {
//
//	// \ddd 1-3���˽����ַ�
//	printf("%c\n", '\130'); // ���X������Ѱ˽����µ�133תΪʮ�����µ�88��88����Ӧ��ASC��ֵΪX
//
//	//xdd 
//	printf("%c",'\x060');  // �����ʮ�������µ�60ת��Ϊʮ�����µ�96��96��Ӧ��ASC��ֵΪ'
//
//	return 0;
//}