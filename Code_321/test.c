#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 结构体
// 结构体类型的声明、结构体初始化、结构体成员访问、结构体传参



//struct Peo {
//	char name[20];
//	char tel[12];
//	char sex[5];
//	int hight;
//}p1,p2;  //两个全局的结构体变量

//struct Peo {
//	char name[20];
//	char tel[12];
//	char sex[5];
//	int hight;
//};
//struct std {
//	struct Peo p;
//	int num;
//	float f;
//};
//// 结构体变量.成员变量
//void print1(struct Peo p) { // p的拷贝，浪费时间空间
//	printf("%s %s %s %d\n", p.name, p.tel, p.sex, p.hight);
//}
//// 结构体指针->成员变量
//void print2(struct Peo* sp) {
//	printf("%s %s %s %d\n", sp->name, sp->tel, sp->sex, sp->hight);
//}
//int main() {
//
//	struct Peo p1 = {"weihong","1008611","男",183}; //结构体变量的创建
//
//	struct std s = { {"weihong","1008611","男",183},100,3.1415};
//
//	printf("%s %s %s %d\n", p1.name, p1.tel, p1.sex, p1.hight);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tel, s.p.sex, s.p.hight, s.num, s.f);
//
//	print1(p1);
//
//	print2(&p1);
//
//
//	return 0;
//}

// 求整数的二进制中有几个1
// 1
//int count_1(unsigned int n) { // 将传入的数转为无符号整数，可以处理负数
//	int count = 0;
//	while (n) {
//		if ((n % 2 == 1)) {
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

// 2
//int count_1(int n) {
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		if ((n >> i & 1) == 1) {
//			count++;
//		}
//	}
//	return count;
//}


// 3
// n = 15;
// n = n & (n - 1);
// 1111
// 1110
// 1110 n
// 1101 n-1
// 1100 n
// 1011 n-1
// 1000 n
// 0111 n-1
// 0000 n
//int count_1(int n) {
//	int count = 0;
//	while (n) {
//		n= n& (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = count_1(num);
//	printf("%d", ret);
//	return 0;
//}


// 两个整数 的二进制中，有几位不同
//// 1 去除每一位
//int count_diff(int n, int m) {
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//
//		if (((n >> i) & 1) != ((m >> i) & 1)) {
//			count++;
//		}
//	}
//	return count;
//}

//// 2 ^ 异或
//int count_diff(int n, int m) {
//	int count = 0;
//	int ret = n^m; // 相同为0，相异为1
//	// 直接统计 ret中有几个1
//	while (ret) {
//		ret= ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int ret = count_diff(n, m);
//	printf("%d", ret);
//	return 0;
//}

// 全局变量，静态变量都是存储在静态区的
// 全局变量，静态变量未初始化的时候，默认会被初始化为 0
// 局部变量，在栈区存储，不初始化的时候，是随机值

//int i; // 默认是0
//int main() {
//	
//	i--; // -1
//	 // sizeof(i) = 4，但输出的是＞，因为sizeof计算返回的结果是size_t类型（无符号整型） 
//	// 这里 -1 和一个无符号整型比较时，会将-1 也转换为一个无符号整型 （算术转换）
//	// 1111 1111 1111 1111 1111 1111 1111 1111，最大的
//	// 所以，这里会输出整型
//	if (i > sizeof(i)) {
//		printf(">\n");//输出大于
//	}
//	else {
//		printf("<\n");
//	}
//	return 0;
//}


// Debug  调试版本  便于程序员调试
// Release 发布版本  对性能进行优化，便于客户使用




//// 调试
//int main() {
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++) { // 添加条件
//		printf("%d  ", i);
//	}
//	for (i = 0; i < 10; i++) { // 禁用断点
//		printf("%d  ", arr[i]);
//	}
//
//	return 0;
//}

// 1! + 2! + 3! +...+ n!

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) {
//		// 每次需要重置 ret
//		ret = 1;
//		for (j = 1; j <= i; j++) {
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d ", sum);
//	return 0;
//}


//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++) {
//		// 不重置 ret
//		// 求3！,ret已经等于2！，直接乘3就行；求n的阶乘，ret已经是n-1的阶乘
//		ret *= i;  
//		sum += ret;
//	}
//
//	printf("%d ", sum);
//	return 0;
//}



// 由于局部变量在栈区里是从高到低存储的
// 而数组在内存中是 由低到高 存储的
// 因此 i 在高位，而 arr从低到高访问到越界元素之后，就很有可能会访问到 高位的 i
// 这里 在 arr[12] 就越界访问到了i，并将 i 的值修改为0；
// 因此 导致了 死循环
//int main() {
//	// 局部变量
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	for (i = 0; i <= 12; i++) { // 越界的访问，可能会进入死循环，这里&i 与 &arr[12] 一样
//		arr[i] = 0;
//		printf("weihong %d\n",i);
//	}
//	return 0;
//}


// strcpy
#include<string.h>
#include<assert.h>
// 1
//void my_strcpy(char* arr1, const char* arr2) {
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//
//}

// 2
// const 在 * 左， *指针 不能被修改
// coust 在 * 右， 指针不能修改
//void my_strcpy(char* arr1, const char* arr2) {
//	// 断言
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++) 
//	{
//		;
//	}
//}

// 3
// 为什么返回char*？
// 可以链式访问
// strcpy返回的是目标空间的起始地址
char* my_strcpy(char* arr1, const char* arr2) {
	char* ret = arr1;
	// 断言
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (*arr1++ = *arr2++) 
	{
		;
	}
	// return arr1; //err,arr1 已经被改变
	return ret; // ok
}
int main() {
	char arr1[20] = "XXXXXXXXXXXXXX";
	char arr2[] = "WeiHong";
	// strcpy 在拷贝字符串时，会把\0也拷贝过去
	// strcpy(arr1, arr2);
	
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}


// const 例子
// const int* p = &m
// const 在 * 左，*p = 0不能修改， p = &n可以修改
// int* const p = &m
// const 在 * 右，p = &n不能修改，*p = 0可以修改
//
//int main() {
//	int m = 10;  // 男生m 有10块
//	int n = 100; // 男生n 有100
//
//	//int* p = &m; // 女生p 和 m 是情侣
//	// *p = 0; // 女孩吃凉皮，男孩m 10块钱变为0；
//
//	//const int* p = &m; // 男孩m 不想花钱，加const在 * 左，
//	// *p = 0; // err  // 此时 无法花钱
//
//	//p = &n; // ok  // 女孩换男朋友 n 可以；
//
//	int* const p = &m; // 男孩m ， 不想让女孩换男朋友，*右，加const
//	// p = &n; // err    // 此时，无法换男朋友
//	return 0;
//}



// 常见的错误
// 1.编译型错误（语法错误）
// 2.链接型错误（出现在链接期间） test.c ---> 编译 ---> 链接 ---> 可执行文件.exe
// 3.运行时错误
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b); //严重性	代码	说明	项目	文件	行	禁止显示状态
//	// 错误	LNK2019	无法解析的外部符号 _Add，函数 _main 中引用了该符号	
//	// LNK 链接错误
//
//	return 0;
//}