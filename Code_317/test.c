#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 数组，一组相同类型元素的集合

//int main() {
//
//	// int arr[n];
//	// 在 C99 之前，数组的大小，必须是常量或常量表达式
//
//	// 数组在地址中是连续存放的
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// %p 打印地址
//	for (int i = 0; i < sz; i++) {
//		printf("arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

// 二维数组

// 1 2 3 4
// 2 3 4 5
// 3 4 5 6
//int main() {
//	// 
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6}; // 不够放00
//	int arr1[3][4] = { {1,2},{3,4},{5,6} }; // 1 2 0 0；3 4 0 0；5 6 0 0
//
//	// 行数可以不写，但是列数必须给 三维数组只能省略第一个数
//	int arr2[][4] = { {1,2,3,4},{3,5} };
//
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]); //二维数组在内存中也是连续存放的
//		}
//	}
//	
//
//	return 0;
//}


//// 数组越界，是不一定报错的
//
//int main() {
//	int arr[6] = { 1,2,3,4,5,6 };
//	int i = 0;
//	// 越界访问，不报错
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

// 数组做函数参数--冒泡排序
// 数组传参，形参有两种写法：数组、指针

//// 数组
//void bubble_sort(int arr[],int sz) {
//	int i = 0;
//	int temp = 0;
//	// sz-1 需要的趟数
//	for (i = 0; i < sz-1; i++) {
//		int j = 0;
//		// 一趟 
//		for (j = 0; j < sz-1-i; j++) {
//			if (arr[j] > arr[j+1]) {
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = temp;
//			}
//		}
//
//	}
//}
//int main() {
//	int arr[] = { 0,8,7,6,10,4,3,2,1,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 变为升序 0，1，2，3，4，5，6，7，8，9
//	bubble_sort(arr, sz);
//
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// ****数组名是什么****
// 虽然数组名能表示首元素地址，但也有俩个例外
// 1. sizeof（数组名），这里表示的是整个数组，求的是整个数组的大小，单位是字节
// 2. &数组名，这里的数组名表示的是整个数组，取出的是整个数组的地址
//int main() {
//
//	int arr[10];
//	
//	printf("%p\n", arr); // arr 首元素地址
//	printf("%p\n", arr+1); // +4个字节
//	printf("-----------------");
//	printf("%p\n", &arr[0]); // 首元素地址
//	printf("%p\n", &arr[0]+1); // +4字节
//
//	printf("%p\n", &arr); // 数组的地址
//	printf("%p\n", &arr); // +40字节，直接跳过整个数组
//
//	
//	// sizeof(数组名)，打印的是整个数组的大小
//	int n = sizeof(arr); // 40
//	printf("%d\n", n);
//	return 0;
//
//}


// 二维数组名的理解

int main() {
	int arr[3][4];

	arr; // 表示二维数组首元素的地址，这里首元素是第一行，而不是[0][0]

	printf("%p\n", arr); // 第一行地址
	printf("%p\n", arr+1); // +16字节，第二行地址

	sizeof(arr) / sizeof(arr[0]); // 数组大小➗一行大小 = 数组行数
	sizeof(arr[0]) / sizeof(arr[0][0]); // 一行的大小 ➗ 一个元素的大小 = 数组列数



	return 0;
}
