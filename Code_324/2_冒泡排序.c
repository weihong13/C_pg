#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
  简单的冒泡排序，用来引出 qsort函数
*/

//// 冒泡排序简单实现
//void bubbleSort(int arr[], int sz) {
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++) { // 趟数
//		// 一趟冒泡排序
//		int flag = 1; // 假设已经是升序的序列
//		for (j = 0; j < sz - i - 1; j++) {
//			if (arr[j] >= arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0; // 交换了，说明不是有序的
//			}
//		}
//		if (1 == flag) {
//			break;
//		}
//	}
//}
//
//int main() {
//	// 输入
//	int arr[] = { 1,4,5,8,6,7,10,11,14,9,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 排序
//	bubbleSort(arr, sz);
//	// 输出
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}