#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
  �򵥵�ð�������������� qsort����
*/

//// ð�������ʵ��
//void bubbleSort(int arr[], int sz) {
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++) { // ����
//		// һ��ð������
//		int flag = 1; // �����Ѿ������������
//		for (j = 0; j < sz - i - 1; j++) {
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
//
//int main() {
//	// ����
//	int arr[] = { 1,4,5,8,6,7,10,11,14,9,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// ����
//	bubbleSort(arr, sz);
//	// ���
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}