#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	����ָ�롢����ָ�����顢ָ����ָ�������ָ�롢�ص�����
	���ú���ָ��ʵ�ּ����� �Ӽ��˳�
	���ú���ָ������ʵ�ּ����� �Ӽ��˳�
*/

//// ����ָ��
//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	// ����ָ��-- &arr
//	int arr[5];
//	int(*parr)[5] = &arr;
//	
//	// ����ָ��-- &������
//	Add(3, 5);
//	printf("%p", &Add);
//	printf("%p", Add); // ��ַ��ͬ
//	// &������ �ͺ����� ���Ǻ����ĵ�ַ
//
//	// ����ָ��
//	int (*padd)(int, int) = &Add; //  int    (*padd)    (int, int)
//							  //  ����ֵ����  ˵����ָ��   ��������
//	// &������ �ͺ����� ���Ǻ����ĵ�ַ
//	int (*padd1)(int, int) = Add; // Ҳ��
//
//	// ����
//	int a = 10;
//	int* p = &a; 
//	*p = a;
//	// ��ô
//	padd = &Add;
//	padd1 = Add; 
//
//	(*padd)(10, 20); 
//	padd(20, 20); // �����Ե��� ����
//	return 0;
//}

//int main() {
//
//	( * (void(*)()) 0 )();
//	// void(*p)()   p�Ǻ���ָ��
//	// void(*)()    �Ǻ���ָ������
//	// ��� (char) 0 ��0 ǿ������ת��Ϊ char����
//	// (void(*)()) 0  ��0 ǿ������ת��Ϊ����ָ�����ͣ��޲���������ֵ������void���͵ĺ����ĵ�ַ
//	// *(void(*)()) 0 �� ��ַ���н����ã��õ���0Ϊ��ַ�ĺ���
//	// (*(void(*)()) 0)()  ������0Ϊ��ַ�ĺ���
//
//	// ��ˣ��������� ��������һ�κ�������
//	// 1. ��0����ǿ������ת����תΪ���޲���������ֵ������void���͵ĺ����ĵ�ַ
//	// 2. ����0����ַ �ĺ���
//	// 
//
//	return 0;
//}

//// ����tpyedef �����ͽ���������
//typedef void (*pf_t)(int); // ��void (*)(int)����ָ������ ������Ϊ pf_t
//int main() {
//	void (*signal(int, void(*)(int)))(int);
//	void (*    signal(int, void(*)(int))   )(int);
//	// signal �Ǻ����������ϴ�����һ�κ�������
//	// signal(int, void(*)(int)) �� void (* s..)(int);
//	// ������signal������������������һ������������int�� �ڶ������������� ����ָ�����ͣ� ������ָ��Ĳ�����int������ֵ��void
//	// 
//	// ����һ������ int Add(int,int), 
//	// signal ���� �ķ���ֵ����Ϊ����ָ�����ͣ� ������ָ��Ĳ�����int������ֵ��void
//	//
//	// ��������򻯵ĺ�������
//	pf_t signal(int, pf_t);
//	return 0;
//}

// ����ָ����;
// �ص�����

// ʵ��һ�����������Ӽ��˳�
//void menu() {
//
//	printf("***************************\n");
//	printf("*******1.Add   2.Sub*******\n");
//	printf("*******3.Mul   4.Div*******\n");
//	printf("*******    0.exit   *******\n");
//	printf("***************************\n");
//
//}
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//
//int Mul(int x, int y) {
//	return x * y;
//}
//
//int Div(int x, int y) {
//	return x / y;
//}
//
//void calc(int (*pf)(int, int)) {
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������������������>");
//	scanf("%d %d", &x, &y);
//	ret = (*pf)(x, y);
//	printf("%d\n", ret);
//}
//
//
//int main() {
//	
//	int input = 0;
//	do {
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch(input){
//			case 1:
//				calc(Add); // ���ٴ�����
//				break;
//			case 2:
//				calc(Sub);
//				break;
//			case 3:
//				calc(Mul);
//				break;
//			case 4:
//				calc(Div);
//				break;
//			case 0:
//				printf("�˳��������");
//				break;
//			default:
//				printf("�������!\n");
//				break;
//		}
//
//	} while (input);
//	return 0;
//}


// ����ָ������-- ����Ԫ��Ϊ ����ָ��

// ʵ��һ�����������Ӽ��˳�
//void menu() {
//
//	printf("***************************\n");
//	printf("*******1.Add   2.Sub*******\n");
//	printf("*******3.Mul   4.Div*******\n");
//	printf("*******    0.exit   *******\n");
//	printf("***************************\n");
//
//}
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//
//int Mul(int x, int y) {
//	return x * y;
//}
//
//int Div(int x, int y) {
//	return x / y;
//}
//
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	// ����ָ������pfArr[],�����ڲ���5��Ԫ�أ�Ԫ�������Ǻ���ָ�룬0,Add,Sub,Mul,Div...
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div }; // �����������������
//	do 
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (0 == input) 
//		{
//			printf("�˳�������\n");
//		}
//		else if (input > 0 && input <= 4) 
//		{
//			printf("������������������>");
//			scanf("%d %d",&x,&y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else 
//		{
//			printf("�������\n");
//		}
//		
//	} while (input);
//	return 0;
//}


// ָ����ָ�������ָ��

//int main() {
//	// ����ָ������
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//
//	// ָ����ָ�������ָ��
//	int (*(*ppfArr)[5])(int, int) = &pfArr;
//	// ��Ϊ������ (*ppfArr) �� int (* [5])(int, int)
//	// (*ppfArr) ˵������һ��ָ��
//	// int (* [5])(int, int) ˵�� ppfArr ��һ�� ����ָ���������͵�ָ�롣
//	return 0;
//
//}




// �ص�����
// �ص���������һ��ͨ������ָ����õĺ�����
// ����㽫һ��������ָ�룬��Ϊ�������ݸ���һ�����������������ͨ��ָ��������ָ����ָ��ĺ���ʱ����Ϊ�ص�����
// 
//

//// ð�������ʵ��
//void bubbleSort(int arr[], int sz) {
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sz-1; i++) { // ����
//		// һ��ð������
//		int flag = 1; // �����Ѿ������������
//		for (j = 0; j < sz-i-1; j++) {
//			if (arr[j] >= arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0; // �����ˣ�˵�����������
//			}
//		}
//		if (1 == flag) {
//			break;
//		}
//	}
//}
//#include<stdlib.h>
////
//// qsort ��������Ŀ⺯�� -- ���������������͵�����
//// 
//// ͨ���鿴MSDN���ҵ�qsort ������˵��
//// 
//// void qsort( void *base, // ��Ҫ��������ݵ���ʼλ�ã�
////             size_t num, // �������Ԫ�ظ��� 
////             size_t width, // �������ÿ��Ԫ�صĴ�С����λ���ֽڣ�
////             int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
////  __cdecl�Ǻ������ù涨��������
//// 
//// int (* compare )(const void *elem1, const void *elem2 ) );
//// ����һ������ָ�룬compareָ��һ�� ���ڱȽ�����������С�ĺ�����ַ--���������Ҫ���Լ�д
//// �ú����Ĳ����� const void *elem1, const void *elem2
//// ����ֵ����Ϊ int
//// void* ��������޾������͵�ָ�룬���Խ����������͵�ָ��
//// �����ܶ�void*���н����ò�����Ҳ���ܶ�ָ����� +- ����
//// 
//// MSDN  �����Լ�д�ĺ��� �ķ���ֵ��������ȷ�涨��
//// Return        Value Description   
////  <0         elem1 less than elem2
////	0          elem1 equivalent to elem2
////  >0         elem1 greater than elem2
//
////
//
//// �Ƚ�����intԪ��
//int compare(const void* e1, const void* e2) {
//	// ��Ϊ e1 e2 ��void* ���͵�ָ�룬���ܽ��н����ò���ֱ�ӽ����� *e1 // err
//	// ���ǣ�����֪�������ǱȽ� ����int Ԫ�صĴ�С��������ǿ���ֱ�ӽ���ǿ������ת��Ϊ int*��
//	// Ȼ����н����ò�����
//	
//	//// ����MSDN �� compare����ֵ��Ҫ��
//	//if (*(int*)e1 > *(int*)e2) { 
//	//	return 1;  // e1 > e2 ,����һ������0 ����
//	//}
//	//else if (*(int*)e1 < *(int*)e2) {
//	//	return -1;// e1 < e2 ,����һ��С��0 ����
//	//}
//	//else {
//	//	return 0; // e1 = e2 ,����0
//	//}
//
//	// �������ؽ�Ϊ����
//	// ֱ�ӷ������ߵĲ�ֵ���� -- ����
//	return (*(int*)e1 - *(int*)e2);
//
//	// ���� ���� e2 - e1 �Ĳ�ֵ
//	// return (*(int*)e2 - *(int*)e1);
//}
//int main() {
//	// ����
//	int arr[] = { 1,4,5,8,6,7,10,11,14,9,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// ����
//	// bubbleSort(arr, sz);
//	// ����qsortʵ������
//	qsort(arr, sz, sizeof(arr[0]), compare);
//	// ���
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}











