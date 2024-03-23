#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 将两个有序序列合并成一个有序序列

// 输入三行
// 第一行输入 n m
// 第二行 输入 n个整数的升序序列
// 第三行 输入 m个整数的升序序列
// 

//void MergeArr(int arrn[], int arrm[], int arr_merge[], int n, int m) {
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	// 将两个数组中较小的先给合并后的数组
//	while (i < n && j < m) {
//		if (arrn[i] <= arrm[j]) {
//			arr_merge[k] = arrn[i];
//			k++;
//			i++;
//		}
//		else if (arrn[i] > arrm[j]) {
//			arr_merge[k] = arrm[j];
//			k++;
//			j++;
//		}
//	}
//	// 处理剩余的值
//	if (i == n && j < m) {  // 如果  arrn 合并完成，且arrm中还有没合并的值
//		while (j < m) {
//			arr_merge[k] = arrm[j];
//			k++;
//			j++;
//		}
//	}
//	if (j == m && i < n) {// 如果  arrm 合并完成，且arrn中还有没合并的值
//		while (i < n) {
//			arr_merge[k] = arrn[i];
//			k++;
//			i++;
//		}
//	}
//}
//int main() {
//	// 输入
//	int n = 0;
//	int m = 0;
//	int arrn[1000] = { 0 };
//	int arrm[1000] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arrn[i]);
//	}
//	for (i = 0; i < m; i++) {
//		scanf("%d", &arrm[i]);
//	}
//	// 合并
//	int arr_merge[2000] = { 0 };
//	MergeArr(arrn, arrm, arr_merge, n, m);
//	// 打印
//	for (i = 0; i < m+n; i++) {
//		printf("%d ", arr_merge[i]);
//	}
//	return 0;
//}


// 字符指针
//int main() {
//	const char* p = "abcdef"; // 把字符串首字母a的地址，给了p
//	//*p = 'w';
//	printf("%s", p); //引发了异常: 写入访问权限冲突。
//	return 0;
//}

//int main() {
//	// 这里 "abcdef" 存储在常量区，属于常量常量字符串，常量区的内容存在只读性质，不可以修改，
//	// p1 和 p2 指向同一个位置
//	// 既然不能修改，最好用const 修饰
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	
//	// 这里属于局部变量，存储在栈区，俩个数组地址不同  
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2) {
//		printf("p1 = p1\n"); // 输出等于
//	}
//	else {
//		printf("p1 != p1\n");
//	}
//	if (arr1 == arr2) {
//		printf("arr1 = arr2\n");
//	}
//	else {
//		printf("arr1 != arr2\n");// 输出不等于
//	}
//	return 0;
//}


// 指针数组，存放指针的数组

//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 3,4,5,6,7 };
//	int arr3[] = { 5,6,7,8,9 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 5;j++) {
//			printf("%d ", *(parr[i] + j)); // *(parr[i] + j) = parr[i][j]
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 数组指针，指向数组的指针

//int main() {
//	int* p1[10] = { 0 }; // p1 是指针数组，可以存放十个int类型的指针
//	// p2 是 数组指针
//	// p2 可以指向一个数组，该数组有十个元素，每个元素是int类型
//	int(*p)[10] = 0;
//	return 0;
//}

// 数组名 和 &数组名

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	// 两个地址相同
//	printf("%p\n", arr); 
//	printf("%p\n", &arr[0]);
//
//	printf("%d\n", sizeof(arr)); // 40
//	printf("%d\n", sizeof(arr[0])); // 4
//	return 0;
//}

// 数组名 一般认为是 数组首元素的地址，但有两个特殊情况
// 1. sizeof(数组名) 表示的是整个数组，计算的是整个数组的大小
// 2. &数组名，这里数组表示的是整个数组，取地址也是整个数组的地址，&arr+1 跳过的是整个数组

//int main() {
//	int arr[10] = { 0 };
//	int* p = arr; // 存的是数组首元素的地址
//
//	// 数组指针，用来存放 数组的指针；
//	// 指针p2 指向数组arr地址，该数组有十个元素，每个元素是int类型
//	int (*p2)[10] = &arr; // 整个元素的地址，想存入指针，就得用数组指针
//
//	// ch 是一个指针数组，存放5个 char类型的指针变量
//	char* ch[5] = { 0 };
//	// 指针pc 指向指针数组ch的地址，该指针数组有5个元素，每个元素是 char* 类型的指针
//	char* (*pc)[5] = &ch;
//
//	return 0;
//}


// 数组指针的用法

// 不太好的用法
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	// int (*pa)[] = &arr; // err ,“int (*)[0]”和“int (*)[10]”数组的下标不同
//	int(*pa)[10] = &arr;
//
//	int i = 0;
//	for (i = 0; i < 10;i++) {
//		printf("%d ", (*pa)[i]); // *pa[i] = *(*pa + i)
//	}
//	return 0;
//}

// 正确用法，一般用于二维以上的数组
void print1(int arr[3][4], int r, int c) {
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {

			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
// int (*p) [4] = &arr
// p 的类型是 int (*) [4]
// p 是指向一个数组的，数组有4个元素，int [4]
// p+1 ---> 跳过一个5个int元素的数组
// 
// 而 int* p2 = arr;
// p2+1 ---> 跳过一个int元素
//
//void print2(int(*p)[4], int r, int c) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++) { // 遍历每一行
//		for (j = 0; j < c; j++) {
//			// 数组指针p 是指向 arr的首个元素，即二维数组arr的第一行的数组的地址，
//			// *（p+i） 对 二维数组的 某一行地址 解引用，得到某一行的数组名，得到的是某一行的首元素地址
//			// *（p+i）+ j , 每一行的首元素地址加j，得到的是 某一行内的 第j个元素地址
//			// *(*(p + i) + j) , 对某一行内的 第j个元素地址解引用，得到i行j列的元素
//			printf("%d ", *(*(p + i) + j));  // *(*(p + i) + j) = *(p[i] + j) = p[i][j]
//			// printf("%d ", p[i][j]); // ok
//		}
//		printf("\n");
//		
//	}
//}
//int main() {
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	// print1(arr, 3, 4);
//	
//	// 传入的arr 是二维数组的首元素地址，
//	// 二维数组的首元素是 第一行的地址，也就是一个有4个int类型的数组 int arr_1[4];
//	// 因此可以使用一个数组指针来就收arr
//	print2(arr, 3, 4);
//	return 0;
//
//}

//int main() {
//	int arr[5];         // 整型数组---存放5个int类型元素的数组
//	int* parr1[5];      // 指针数组---存放5个int*指针
//	int(*parr2)[5];     // 数组指针---parr2指针 指向一个有5个int元素的数组的地址
//	int(*parr3[10])[5];  // 数组指针数组---parr3是一个有10个元素的数组，元素的类型是数组指针-每个数组指针指向一个有5个int元素的数组的地址
//
//	return 0;
//}


// 一维数组传参
//void test1(int arr1[]) { // 以数组形式传参
//	;
//}
//void test1(int* arr1) { // arr也是数组首元素地址，使用指针传参也可以
//	;
//}
//void test2(int* arr2[]) { // 使用数组名传参
//	;
//}
//void test2(int** arr2) { // arr2 也是数组首元素地址，而数组首元素也是指针，所以可以用二级指针接收
//	;
//}
//int main() {
//	int arr1[10] = { 0 }; // 数组
//	int* arr2[20] = { 0 }; // 指针数组
//
//	test1(arr1);
//	test2(arr2);
//	return 0;
//}



//// 二维数组传参
//// 以数组形式传参
//void test(int arr[3][5]) { 
//	;
//}
//void test(int arr[][5]) { // 行可以省略，列不能省
//	;
//}
//// 以指针形式传参
//void test(int (*parr)[5]) { 
//	// 以指针形式传参，传入的是首元素地址，首元素是第一行数组
//	// 传入的是一个，第一行数组的地址，所以接收时，需要一个数组指针来接收
//	;
//}
//int main() {
//	int arr[3][5] = { 0 };
//	// 以指针形式传参，传入的是首元素地址，首元素是第一行数组
//	// 传入的是一个，数组的地址，所以接收时，需要一个数组指针来接收
//	test(arr); 
//	return 0;
//}




// 一级指针传参
//void test(int* p) { // 形参为整型的一级指针，可以传入的值有，整型的地址、整型的一级指针，整型数组名
//	;
//}
//int main() {
//	int a = 20;
//	int* p = &a;
//	int arr[10] = { 0 };
//	test(&a);
//	test(p);
//	test(arr);
//	return 0;
//}


//// 二级指针传参
//void test(int** pp) { 
//	// 二级指针做形参，可传入的有一级指针地址、二级指针、指针数组的数组名
//	;
//}
//int main() {
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	int* arr[10]; // 指针数组
//
//	test(pp);
//	test(&p);
//	test(arr); // 指针数组的数组名，是指针数组首元素的地址，指针数组首元素也是地址，所以是二级指针 
//	return 0;
//}


// 函数指针--- 指向函数的指针
int Add(int x, int y) {
	return x + y;
}
int main()
{
	// 数组指针--就是取出数组的地址 &arr
	int arr[5];
	int(*parr)[5] = &arr;
	// 函数指针--取出函数的地址   &Add
	printf("%p\n", &Add);
	printf("%p\n", Add); // 输出相同
	// 说明，对于函数来说 &函数名 和 函数名 都是函数的地址

	// 那么，类比数组指针，函数指针表示方法为
	int (*padd)(int, int) = &Add;  // int    (*padd)    (int, int)
								//返回值类型   指针名    函数参数类型
	// 又因为 &函数名 和 函数名 都是 函数地址
	int (*padd1)(int, int) = Add;

	// 对与 int* p = &a;   *p = a
	// 对 padd 解引用，得到的就是Add函数
	int ret1 = (*padd)(2, 3); // 可以通过对函数指针解引用，得到函数名，来调用函数
	// 又因为 &函数名 和 函数名 都是 函数地址，
	int ret2 = Add(2, 3);
	// 那么函数指针 padd 也是函数地址
	int ret3 = padd(2, 3); //都可以调用到函数

	return 0;
}