#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//	// 指针是内存中最小单元的编号，也叫地址
//	int a = 10;
//
//	// 指针变量是存放地址的变量，可以通过指针变量找到内存中的某一地址
//	int* pa = &a;
//
//	// 对于32位的机器，假设有32根地址线，产生的地址就是 
//	// 0000 0000 0000 0000 0000 0000 0000 0000 ~ 1111 1111 1111 1111 1111 1111 1111 1111
//	// 2^32个地址序列，每个地址对一个字节编号，就是4GB
//	// 64根地址线，17,179,869,184GB
//
//	return 0;
//}

// 指针类型的意义

//int main() {
//
//	int a = 0x11223344;
//	
//	//int* pa = &a; // *pa = a= 0x11223344
//	//*pa = 0;      //内存中为0x44332211 改完之后为 0x00000000 4个字节全部修改
//
//	char* pa = &a;  // 警告：从“int * ”到“char* ”的类型不兼容	*pa = a= 0x11223344
//	*pa = 0;  // 内存中为0x44332211，说明char*可以存放int*的地址，字节相同 改完之后为 0x00332211 只修改一个字节
//
//	// 所以，
//	// 指针类型决定了，该指针被 解引用的时候访问几个字节
//	// 例如，int*的指针解引用，访问了4个字节，char*类型的指针，解引用访问了1个字节
//	// 推广到其他类型，double*类型的指针，被解引用时，访问8个字节
//
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//
//	printf("%p\n", pa);    // 0079F9BC  
//	printf("%p\n", pa+1);  // 0079F9C0  跳过4个字节
//	printf("%p\n", pc);    // 0079F9BC
//	printf("%p\n", pc+1);  // 0079F9BD  跳过一个字节
//
//	// 因此，不同的指针类型决定了 在对指针变量进行操作时，访问地址的方式
//	// 如果想按照 int*类型的方式，他就会跳一个整型的大小 -- 4byte
//	// 如果想按照 char*类型的方式，他就会跳一个char的大小 -- 1byte
//	return 0;
//}

//int main() {
//	int a = 0;
//	int* pi = &a;  // pi 解引用访问4个字节，pi+1也跳过4个字节
//	float* pf = &a; // pf 解引用访问4个字节，pi+1也跳过4个字节
//	// 但不能这样用
//	// *pi = 100; // 此时 a内存的是 0x 64 00 00 00
//	*pf = 100; // 此时 a内存的是 0x 00 00 c8 42
//
//	return 0;
//}


// 野指针，指针运算

// 野指针
// 1.未初始化的指针
// 2.指针越界访问
// 3.指针指向内存空间释放的地址

// 1.未初始化的指针
//int main() {
//	int* p;
//	// 根据函数栈帧的创建与销毁，这里 p未初始化，给的是一个随即值，一般是 0xcccccccc
//	*p = 10; //这里给 0xcccccccc 赋值，就属于野指针了
//	return 0;
//}


// 2.指针越界访问
//int main() {
//	int arr[10] = {0};
//	int* p = &arr;
//	int i = 0;
//	// 这里i=10 就是 越界访问，此时p是野指针
//	for (i = 0; i <= 10; i++) {
//		*p = i;
//		p++;
//	}
//	return 0;
//}

 
// 3.指针指向内存空间释放的地址
//int* test() {
//	int a = 10; // 局部变量，在函数结束调用之后就被销毁了
//	return &a;
//}
//int main() {
//	// 这里 test（）函数在调用完后，a就销毁了，但是 p指针 还拿着a的地址，属于野指针
//	int* p = test();
//	printf("Hello");
//	if(p != NULL){
//		 printf("%d",*p); // 不是10了
// }
//	return 0;
//}

//int main() {
//	int a = 10;
//	int* p = &a; //明确给到某个地址
//
//	int* p1 = NULL; // 不知道给谁，就给一个空指针
//	// *p1 = 100; // err
//	return 0;
//}



// 指针的运算

// 指针 +- 整数
#define arr_value 5
//int main() {
//	int arr[arr_value];
//	int* pa;
//	// 指针初始化、指针关系运算
//	for (pa = &arr[0]; pa < &arr[arr_value];) {
//		// *pa = 1; pa++;
//		*pa++ = 1; // 指针+ -
//
//	}
//
//	return 0;
//}
//int main() {
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++) {
//	//	*p = i;
//	//	p++;
//
//	//}
//	// 效果一样
//	for (i = 0; i < sz; i++) {
//
//		*(p + i) = 1;
//
//	}
//	return 0;
//}

// 指针 - 指针
//int main() {
//	int arr[10] = { 0 };
//	printf("%d ", &arr[9] - &arr[0]); // 9
//	// 指针 - 指针 绝对值 得到的是 指针之间的元素个数
//	// 不是所有的指针都能相减
//	// 指向同一个空间的指针相减才有意义
//
//	return 0;
//}

// 求字符串长度
#include<stdio.h>
// 1
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
// 递归
//int my_strlen(char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	return 1+my_strlen(str+1);
//}
//// 指针-指针
////int my_strlen(char* str) {
////	char* star = str;
////	while (*str != '\0') {
////		str++;
////	}
////	return (str-star);
////}
//int main() {
//	char str[10] = "weihong";
//	// 使用库函数
//	// int len = strlen(str);
//	// 自己写函数
//	int len = my_strlen(str); // 这里字符传入的 也是指针，是首个字符的地址
//
//	printf("%d", len);
//	return 0;
//}

// 指针的关系运算

//int main() {
//	int arr[arr_value];
//	int* p;
//	// 倒序输入
//	// 不一定可行
//	//for (p = &arr[arr_value]; p > &arr[0];) {
//
//	//	*--p = 1;
//	//}
//	for (p = &arr[arr_value-1]; p >= &arr[0];p--) {
//
//		*p = 1;
//	}
//	// 绝大多数编译器可以执行，但标准不保证可以执行
//	// 标准规定，数组内的指针可以和数组最后一个元素后面的指针进行比较，
//	// 但不能和数组第一个元素之前的指针进行比较
//
//	for (int i = 0; i < arr_value; i++) {
//
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



// 数组：一组相同类型的元素
// 指针：地址
// 数组名：首元素地址（两个特殊情况下不是，1.sizeof 2. &数组名）

//int main() {
//	int arr[10] = { 0 };
//	int* p = arr; // 首元素地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%p  -------  %p\n", &arr[i], p+i);
//	}
//	// arr[i] = *(arr+i) = *(p+i)
//	return 0;
//}


// 二级指针
// 存放一级指针地址的指针 

// 指针数组
// 存放指针的数组

int main() {
	int arr[3][4] = { 1,2,3,4,2,3,4,5,6,7,8,9 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------\n");
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 1,2,3,4 };
	int arr3[4] = { 1,2,3,4 };
	int* parr[3] = { arr1,arr2,arr3 };

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
	return 0;
}