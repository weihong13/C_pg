#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
// 
// Ԥ�������
// 
// 1��Ԥ������� -- ��־�ļ�
// __FILE__ ���б����Դ�ļ�
// __LINE__ �ļ���ǰ���к�
// __DATE__ �ļ������������
// __TIME__ �ļ��������ʱ��
// __STDC__ �������Ƿ���ѭ ANSI C, ��ѭΪ1������δ����
//			VS ����ѭ��gcc��ѭ 
// 
// 2��#define ����ı�ʶ�� ��  �� 
// ���֡��ַ��������롢�ؼ���
// ��Ԥ����׶α��滻
// ���ӷֺš��ֺ�Ҳ���滻
// 
//

// // 1��Ԥ������� -- ��־�ļ�
//int main() {
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//		return EXIT_FAILURE; // �����˳�����
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		fprintf(pf,"FILE:%s  LINE:%d  DATE:%s  TIME:%s  i=%d\n",__FILE__,__LINE__,__DATE__,__TIME__ ,i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 
// 2��#define ����ı�ʶ�� ��  ��
// 
// #define  ����ĺ꣡��
// 
// 
////      ����  ���� ����
//#define SQUARE(X) X*X
//// �����ű���ͺ�������
//// ���御������������
//// �겻�ܵݹ�
//// 
//int main() {
//	int r = SQUARE(6); // 36
//	printf("%d\n", r);
//	r = SQUARE(5+1); // 11
//	// ���ǽ����滻�ģ�ʵ����Ϊ r = 5+1*5+1 = 11
//	// X*X //err
//	// ((X)*(X)) // OK
//	printf("%d\n", r);
//	return 0;
//}

// 
// # �� ##
// # �������滻���ַ�����
// 
// 
//#define PRINT(N,FOMATE) printf("the value of "#N" is "FOMATE"\n", N);
//int main() {
//	int a = 10;
//	double b = 3.14;
//	PRINT(a, "%d");
//	PRINT(b, "%lf");
//	//printf("the value of a is %d", a);
//	//printf("the value of b is %d", b);
//
//	return 0;
//}

//
// ## �� ## ���ߵ����ݺϲ�Ϊһ������ 
//
//#define CAT(Class, Num) Class##Num
//int main() {
//	int Class100 = 10;
//	printf("%d\n", CAT(Class, 100));
//	printf("%d\n", Class100);
//	return 0;
//}


//
// ���и����õĺ����
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main() {
//	int a = 5;
//	int b = 4;
//	int m = MAX(a++, b++);
//	// ((a++)>(b++)?(a++):(b++))
//	//  5,a=6;4,b=5; 6,a=7 // m �õ�6
//	printf("%d\n", m); // 6
//	printf("%d\n", a); // 7
//	printf("%d\n", b); // 5
//
//	return 0;
//}


//// ��ͺ���
//// ��
//#define MAX(x,y) ((x)>(y)?(x):(y))
//// ����
//int Max(int x,int y) {
//
//	return ((x) > (y) ? (x) : (y));
//}
//
//int main() {
//	// ��Դ��������û������
//	// �ŵ㣺
//	// ������ں������ڳ���Ĺ�ģ���ٶȷ����ʤһ��
//	// ֻ���滻��Ȼ����м���
//	// ȱ��
//	// ÿ�ε��ú궼Ҫ�������
//	// ��û������
//	// ���������޹أ������Ͻ�
//	// ����ܴ������ȼ�����
//	//
//	float max = MAX(3.5, 5.4);
//
//	// �����Դ���Ĳ�������ȷ����
//	// �������á����Ρ�ջ֡���������㡢��������
//	int ret = Max(3, 5);
//	return 0;
//}

//��Ҳ���Դ������ͣ����Ǻ�����������

//#define MALLOC(NUM,TYPE) (TYPE*)malloc((NUM)*sizeof(TYPE))
//int main() {
//	// ��ʹ��malloc��ʱ���ȷ��������
//	// malloc(10, int); //err
//
//	//
//	int* p = MALLOC(10, int);
//	// �滻
//	//int* p = (int*)malloc(10 * sizeof(int));
//
//	free(p);
//	p = NULL; 
//	return 0;
//}


//// #undef M ȡ���궨��
//#define M 100
//#undef M