#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
Description
�����Լ��ĳ������ڣ��Լ���������ڣ������Լ����˶�����
Input
����������ڣ�    �� �� �գ�2015 12 10��
�����������ڣ��� �� �գ�2019 12 10��
Output
�������������һ��Ĳ�����һ��
*/
//// �ж��Ƿ�Ϊ����
//int is_leapyear(int year) {
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//// ����ĳ������һ��ĵڼ���
//int first_days(int arr[]) {
//	int ret = is_leapyear(arr[0]);
//	int arr_month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < arr[1]; i++) {
//		sum += arr_month[i];
//	}
//	 sum = sum + arr[2] + ret;
//	 return sum;
//}
//int lived_days(int bir_arr[], int arr[]) {
//	int sum = 0;
//	// ���Լ��������굽�����ǰһ��һ���м���
//	int i = 0;
//	int ret = 0;
//	for (i = bir_arr[0]; i < arr[0]; i++) {
//		int ret = is_leapyear(i);
//		sum = sum + 365 + ret;
//	}
//	// ���Լ����������Ѿ����˼���
//	int bir_sum = first_days(bir_arr);
//	// �������˶�����
//	int this_sum = first_days(arr);
//
//	return sum - bir_sum + this_sum;
//}
//int main() {
//	// ����
//	int bir_year = 0;
//	int bir_month = 0;
//	int bir_day = 0;
//	scanf("%d%d%d", &bir_year, &bir_month, &bir_day);
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%d%d", &year, &month, &day);
//
//	int arr_bir[] = { bir_year ,bir_month ,bir_day };
//	int arr[] = { year ,month ,day };
//	// ����
//	int ret = lived_days(arr_bir, arr);
//	// ���
//	printf("%d", ret);
//	return 0;
//}

// 
// �����������
// ָ�����㡢ָ�����͵�����
//

//int main() {
//	int a[] = { 1,2,3,4 };
//
//	printf("%d\n", sizeof(a)); // 16 ������������������Ĵ�С
//	printf("%d\n", sizeof(a+0)); // 4����8�� ָ�� ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a)); //  4 ���� ��Ԫ��
//	printf("%d\n", sizeof(a+1)); //  4����8�� �±�Ϊ1 ��Ԫ�ص�ַ��ָ��
//	printf("%d\n", sizeof(a[1])); // 4 �������� 2
//	printf("%d\n", sizeof(&a)); // 4����8�� ����Ԫ�ص�ַ��ʵ���ϻ���ָ��
//	printf("%d\n", sizeof(*&a)); //  16 ����������Ĵ�С
//	printf("%d\n", sizeof(&a+1)); //  4����8�� ��������������Ǹ���ַ�����ʻ��ǵ�ַ
//	printf("%d\n", sizeof(&a[0])); //  4����8�� ��һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0]+1)); // 4����8����һ��Ԫ�صĵ�ַ��1 ���ڶ���Ԫ�صĵ�ַ�����ǵ�ַ
//
//	return 0;
//}

//int main() {
//	char arr[] = { 'w','e','i','h','o','n','g' };
//
//	printf("%d\n", sizeof(arr));     //  7   ��������Ĵ�С 
//	printf("%d\n", sizeof(arr+0));   // 4��8 ��Ԫ�ص�ַ�� 
//	printf("%d\n", sizeof(*arr));    //  1   ��Ԫ�أ�char����
//	printf("%d\n", sizeof(arr[1]));  //  1   �ڶ���Ԫ�أ�char����
//	printf("%d\n", sizeof(&arr));    //  4   ��������ĵ�ַ�����ǵ�ַ
//	printf("%d\n", sizeof(&arr+1));  // 4��8 ��������ĵ�ַ��һ�������������������ǵ�ַ
//	printf("%d\n", sizeof(&arr[0]+1));//4��8 ��Ԫ�ص�ַ��һ���ڶ���Ԫ�صĵ�ַ�����ǵ�ַ
//	return 0;
//}

//#include<string.h>
//int main() {
//	char arr[] = { 'w','e','i','h','o','n','g' };
//	// ���ֵ������ \0 �Ż�ֹͣ
//	printf("%d\n", strlen(arr));
//
//	// ���ֵ������ \0 �Ż�ֹͣ
//	printf("%d\n", strlen(arr + 0));	
//	
//	// �� ����strlen ���յ���һ�� char*���͵�ָ�룬
//	// *arr �����õ�һ��Ԫ�� ��w��������һ��char
//	// strlen('w') -----> strlen(119) 
//	// w ASCII��ֵΪ119�����ڴ�����һ��119�ĵ�ַ��119�ĵ�ַ����Ȩ���ʵ�,Ұָ��
//	printf("%d\n", strlen(*arr));   
//
//
//	// �� ����strlen ���յ���һ�� char*���͵�ָ�룬
//	// arr[1]�ڶ���Ԫ�� ��e��������һ��char	
//	printf("%d\n", strlen(arr[1]));
//	
//	// ���ֵ������ \0 �Ż�ֹͣ
//	printf("%d\n", strlen(&arr));     //
//	// ���ֵ-6������ \0 �Ż�ֹͣ
//	printf("%d\n", strlen(&arr+1));    //
//	// ���ֵ-1������ \0 �Ż�ֹͣ
//	printf("%d\n", strlen(&arr[0] + 1));// 
//	return 0;
//}

//int main() {
//	char arr[] = "weihong";
//	// [w e i h o n g \0]
//
//	printf("%d\n", sizeof(arr));     //  8   ��������Ĵ�С ���� \0    
//	printf("%d\n", sizeof(arr+0));   // 4��8 ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*arr));    //  1   ��Ԫ��
//	printf("%d\n", sizeof(arr[1]));  //  1   �ڶ���Ԫ�� 
//	printf("%d\n", sizeof(&arr));    // 4��8 ��������ĵ�ַ�����ǵ�ַ  
//	printf("%d\n", sizeof(&arr+1));  // 4��8 ������������ĵ�ַ�����ǵ�ַ
//	printf("%d\n", sizeof(&arr[0]+1));//4��8 �ڶ���Ԫ�صĵ�ַ
//
//	// 7 ����\0 
//	printf("%d\n", strlen(arr));
//
//	// 7 ����\0 
//	printf("%d\n", strlen(arr + 0));	
//	
//	// ����
//	//printf("%d\n", strlen(*arr));   
//
//
//	// ����
//	//printf("%d\n", strlen(arr[1]));
//	
//	// 7 ����\0 
//	printf("%d\n", strlen(&arr));    
//	// ���ֵ
//	printf("%d\n", strlen(&arr+1));    //
//	// 6 ����\0 
//	printf("%d\n", strlen(&arr[0] + 1));//
//	return 0;
//}

//int main() {
//	char* p = "weihong"; // �ַ������������ڳ�����
//
//	printf("%d\n", sizeof(p));     //  4��8   char*ָ��  
//	printf("%d\n", sizeof(p +0));   // 4��8	  char*ָ��
//	printf("%d\n", sizeof(*p));    //  1      p ����Ԫ�ص�ַ��*p����Ԫ�� ��w��
//	printf("%d\n", sizeof(p[1]));  //  1      ��Ԫ�� 'w'
//	printf("%d\n", sizeof(&p));    // 4��8    ָ�� p �ĵ�ַ������ָ�룬���ǵ�ַ
//	printf("%d\n", sizeof(&p +1));  // 4��8  ��ַ
//	printf("%d\n", sizeof(&p[0]+1));//4��8   ��ַ
//
//	// 7 ����\0 
//	printf("%d\n", strlen(p));
//
//	// 7 ����\0 
//	printf("%d\n", strlen(p + 0));
//	
//	// ����
//	//printf("%d\n", strlen(*p));
//
//
//	// ����
//	//printf("%d\n", strlen(p[1]));
//	
//	// ���ֵ����p�ĵ�ַ��ʼ ����\0
//	printf("%d\n", strlen(&p));
//	// ���ֵ
//	printf("%d\n", strlen(&p+1));    //
//	// 6 ����\0 
//	printf("%d\n", strlen(&p[0] + 1));//
//
//	return 0;
//}
