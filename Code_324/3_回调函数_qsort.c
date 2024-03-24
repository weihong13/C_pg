#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
 回调函数示例，使用 qsort 实现对int类型数组进行排序
*/

// qsort 快速排序的库函数 -- 可以排序任意类型的序列
// 
// 通过查看MSDN，找到qsort 函数的说明
// 
// void qsort( void *base, // 你要排序的数据的起始位置，
//             size_t num, // 待排序的元素个数 
//             size_t width, // 待排序的每个元素的大小（单位是字节）
//             int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
//  __cdecl是函数调用规定，无意义
// 
// int (* compare )(const void *elem1, const void *elem2 ) );
// 这是一个函数指针，compare指向一个 用于比较两个参数大小的函数地址--这个函数需要你自己写
// 该函数的参数是 const void *elem1, const void *elem2
// 返回值类型为 int
// void* 代表的是无具体类型的指针，可以接收任意类型的指针
// 但不能对void*进行解引用操作，也不能对指针进行 +- 操作
// 
// MSDN  对你自己写的函数 的返回值进行了明确规定。
// Return        Value Description   
//  <0         elem1 less than elem2
//	0          elem1 equivalent to elem2
//  >0         elem1 greater than elem2

//

//// 比较两个int元素
//int compare(const void* e1, const void* e2) {
//	// 因为 e1 e2 是void* 类型的指针，不能进行解引用操作直接解引用 *e1 // err
//	// 但是，我们知道现在是比较 两个int 元素的大小，因此我们可以直接将其强制类型转换为 int*，
//	// 然后进行解引用操作。
//
//	//// 根据MSDN 对 compare返回值的要求
//	//if (*(int*)e1 > *(int*)e2) { 
//	//	return 1;  // e1 > e2 ,返回一个大于0 的数
//	//}
//	//else if (*(int*)e1 < *(int*)e2) {
//	//	return -1;// e1 < e2 ,返回一个小于0 的数
//	//}
//	//else {
//	//	return 0; // e1 = e2 ,返回0
//	//}
//
//	// 上述返回较为繁琐
//	// 直接返回两者的差值即可 -- 升序
//	return (*(int*)e1 - *(int*)e2);
//
//	// 降序 返回 e2 - e1 的差值
//	// return (*(int*)e2 - *(int*)e1);
//}
//int main() {
//	// 输入
//	int arr[] = { 1,4,5,8,6,7,10,11,14,9,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 排序
//	// bubbleSort(arr, sz);
//	// 利用qsort实现排序
//	qsort(arr, sz, sizeof(arr[0]), compare);
//	// 输出
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}