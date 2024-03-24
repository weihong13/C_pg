#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
	函数指针、函数指针数组、指向函数指针数组的指针、回调函数
	利用函数指针实现计算器 加减乘除
	利用函数指针数组实现计算器 加减乘除
*/

//// 函数指针
//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	// 数组指针-- &arr
//	int arr[5];
//	int(*parr)[5] = &arr;
//	
//	// 函数指针-- &函数名
//	Add(3, 5);
//	printf("%p", &Add);
//	printf("%p", Add); // 地址相同
//	// &函数名 和函数名 都是函数的地址
//
//	// 函数指针
//	int (*padd)(int, int) = &Add; //  int    (*padd)    (int, int)
//							  //  返回值类型  说明是指针   参数类型
//	// &函数名 和函数名 都是函数的地址
//	int (*padd1)(int, int) = Add; // 也行
//
//	// 对于
//	int a = 10;
//	int* p = &a; 
//	*p = a;
//	// 那么
//	padd = &Add;
//	padd1 = Add; 
//
//	(*padd)(10, 20); 
//	padd(20, 20); // 都可以调用 函数
//	return 0;
//}

//int main() {
//
//	( * (void(*)()) 0 )();
//	// void(*p)()   p是函数指针
//	// void(*)()    是函数指针类型
//	// 类比 (char) 0 将0 强制类型转换为 char类型
//	// (void(*)()) 0  将0 强制类型转换为函数指针类型：无参数、返回值类型是void类型的函数的地址
//	// *(void(*)()) 0 对 地址进行解引用，得到以0为地址的函数
//	// (*(void(*)()) 0)()  调用以0为地址的函数
//
//	// 因此，上述代码 本质上是一次函数调用
//	// 1. 将0进行强制类型转换，转为：无参数、返回值类型是void类型的函数的地址
//	// 2. 调用0处地址 的函数
//	// 
//
//	return 0;
//}

//// 利用tpyedef 对类型进行重命名
//typedef void (*pf_t)(int); // 将void (*)(int)函数指针类型 重命名为 pf_t
//int main() {
//	void (*signal(int, void(*)(int)))(int);
//	void (*    signal(int, void(*)(int))   )(int);
//	// signal 是函数名，以上代码是一次函数声明
//	// signal(int, void(*)(int)) 和 void (* s..)(int);
//	// 声明的signal函数有两个参数，第一个参数类型是int， 第二个参数类型是 函数指针类型： 函数中指针的参数是int，返回值是void
//	// 
//	// 声明一个函数 int Add(int,int), 
//	// signal 函数 的返回值类型为函数指针类型： 函数中指针的参数是int，返回值是void
//	//
//	// 重命名后简化的函数声明
//	pf_t signal(int, pf_t);
//	return 0;
//}

// 函数指针用途
// 回调函数

// 实现一个计算器，加减乘除
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
//	printf("请输入两个操作数：>");
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
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch(input){
//			case 1:
//				calc(Add); // 减少代码量
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
//				printf("退出计算机！");
//				break;
//			default:
//				printf("输入错误!\n");
//				break;
//		}
//
//	} while (input);
//	return 0;
//}


// 函数指针数组-- 数组元素为 函数指针

// 实现一个计算器，加减乘除
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
//	// 函数指针数组pfArr[],函数内部有5个元素，元素类型是函数指针，0,Add,Sub,Mul,Div...
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div }; // 后续可添加其他函数
//	do 
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (0 == input) 
//		{
//			printf("退出计算器\n");
//		}
//		else if (input > 0 && input <= 4) 
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d %d",&x,&y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else 
//		{
//			printf("输入错误\n");
//		}
//		
//	} while (input);
//	return 0;
//}


// 指向函数指针数组的指针

//int main() {
//	// 函数指针数组
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//
//	// 指向函数指针数组的指针
//	int (*(*ppfArr)[5])(int, int) = &pfArr;
//	// 分为两部分 (*ppfArr) 和 int (* [5])(int, int)
//	// (*ppfArr) 说明他是一个指针
//	// int (* [5])(int, int) 说明 ppfArr 是一个 函数指针数组类型的指针。
//	return 0;
//
//}




// 回调函数
// 回调函数就是一个通过函数指针调用的函数，
// 如果你将一个函数的指针，作为参数传递给另一个函数，当这个函数通过指针来调用指针所指向的函数时，成为回调函数
// 
//

//// 冒泡排序简单实现
//void bubbleSort(int arr[], int sz) {
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sz-1; i++) { // 趟数
//		// 一趟冒泡排序
//		int flag = 1; // 假设已经是升序的序列
//		for (j = 0; j < sz-i-1; j++) {
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
//#include<stdlib.h>
////
//// qsort 快速排序的库函数 -- 可以排序任意类型的序列
//// 
//// 通过查看MSDN，找到qsort 函数的说明
//// 
//// void qsort( void *base, // 你要排序的数据的起始位置，
////             size_t num, // 待排序的元素个数 
////             size_t width, // 待排序的每个元素的大小（单位是字节）
////             int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
////  __cdecl是函数调用规定，无意义
//// 
//// int (* compare )(const void *elem1, const void *elem2 ) );
//// 这是一个函数指针，compare指向一个 用于比较两个参数大小的函数地址--这个函数需要你自己写
//// 该函数的参数是 const void *elem1, const void *elem2
//// 返回值类型为 int
//// void* 代表的是无具体类型的指针，可以接收任意类型的指针
//// 但不能对void*进行解引用操作，也不能对指针进行 +- 操作
//// 
//// MSDN  对你自己写的函数 的返回值进行了明确规定。
//// Return        Value Description   
////  <0         elem1 less than elem2
////	0          elem1 equivalent to elem2
////  >0         elem1 greater than elem2
//
////
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











