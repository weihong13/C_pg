#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
Description
输入自己的出生日期，以及今天的日期，计算自己活了多少天
Input
输入出生日期：    年 月 日（2015 12 10）
输入今天的日期：年 月 日（2019 12 10）
Output
输出天数，不满一天的不计算一天
*/
//// 判断是否为闰年
//int is_leapyear(int year) {
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//// 计算某天是这一年的第几天
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
//	// 算自己出生那年到今年的前一年一共有几天
//	int i = 0;
//	int ret = 0;
//	for (i = bir_arr[0]; i < arr[0]; i++) {
//		int ret = is_leapyear(i);
//		sum = sum + 365 + ret;
//	}
//	// 算自己出生那天已经过了几天
//	int bir_sum = first_days(bir_arr);
//	// 算今年过了多少天
//	int this_sum = first_days(arr);
//
//	return sum - bir_sum + this_sum;
//}
//int main() {
//	// 输入
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
//	// 计算
//	int ret = lived_days(arr_bir, arr);
//	// 输出
//	printf("%d", ret);
//	return 0;
//}

// 
// 数组名的理解
// 指针运算、指针类型的意义
//

//int main() {
//	int a[] = { 1,2,3,4 };
//
//	printf("%d\n", sizeof(a)); // 16 数组名，求整个数组的大小
//	printf("%d\n", sizeof(a+0)); // 4或者8， 指针 首元素地址
//	printf("%d\n", sizeof(*a)); //  4 整数 首元素
//	printf("%d\n", sizeof(a+1)); //  4或者8， 下标为1 的元素地址，指针
//	printf("%d\n", sizeof(a[1])); // 4 整型数据 2
//	printf("%d\n", sizeof(&a)); // 4或者8， 整个元素地址，实际上还是指针
//	printf("%d\n", sizeof(*&a)); //  16 求整个数组的大小
//	printf("%d\n", sizeof(&a+1)); //  4或者8， 跳过整个数组的那个地址，本质还是地址
//	printf("%d\n", sizeof(&a[0])); //  4或者8， 第一个元素的地址
//	printf("%d\n", sizeof(&a[0]+1)); // 4或者8，第一个元素的地址加1 ，第二个元素的地址，还是地址
//
//	return 0;
//}

//int main() {
//	char arr[] = { 'w','e','i','h','o','n','g' };
//
//	printf("%d\n", sizeof(arr));     //  7   整个数组的大小 
//	printf("%d\n", sizeof(arr+0));   // 4或8 首元素地址， 
//	printf("%d\n", sizeof(*arr));    //  1   首元素，char类型
//	printf("%d\n", sizeof(arr[1]));  //  1   第二个元素，char类型
//	printf("%d\n", sizeof(&arr));    //  4   整个数组的地址，还是地址
//	printf("%d\n", sizeof(&arr+1));  // 4或8 整个数组的地址加一，跳过了整个数，还是地址
//	printf("%d\n", sizeof(&arr[0]+1));//4或8 首元素地址加一，第二个元素的地址，还是地址
//	return 0;
//}

//#include<string.h>
//int main() {
//	char arr[] = { 'w','e','i','h','o','n','g' };
//	// 随机值，遇到 \0 才会停止
//	printf("%d\n", strlen(arr));
//
//	// 随机值，遇到 \0 才会停止
//	printf("%d\n", strlen(arr + 0));	
//	
//	// ？ 报错，strlen 接收的是一个 char*类型的指针，
//	// *arr 解引用第一个元素 ‘w’，传入一个char
//	// strlen('w') -----> strlen(119) 
//	// w ASCII码值为119，等于传入了一个119的地址，119的地址是无权访问的,野指针
//	printf("%d\n", strlen(*arr));   
//
//
//	// ？ 报错，strlen 接收的是一个 char*类型的指针，
//	// arr[1]第二个元素 ‘e’，传入一个char	
//	printf("%d\n", strlen(arr[1]));
//	
//	// 随机值，遇到 \0 才会停止
//	printf("%d\n", strlen(&arr));     //
//	// 随机值-6，遇到 \0 才会停止
//	printf("%d\n", strlen(&arr+1));    //
//	// 随机值-1，遇到 \0 才会停止
//	printf("%d\n", strlen(&arr[0] + 1));// 
//	return 0;
//}

//int main() {
//	char arr[] = "weihong";
//	// [w e i h o n g \0]
//
//	printf("%d\n", sizeof(arr));     //  8   整个数组的大小 包括 \0    
//	printf("%d\n", sizeof(arr+0));   // 4或8 首元素地址
//	printf("%d\n", sizeof(*arr));    //  1   首元素
//	printf("%d\n", sizeof(arr[1]));  //  1   第二个元素 
//	printf("%d\n", sizeof(&arr));    // 4或8 整个数组的地址，还是地址  
//	printf("%d\n", sizeof(&arr+1));  // 4或8 跳过整个数组的地址，还是地址
//	printf("%d\n", sizeof(&arr[0]+1));//4或8 第二个元素的地址
//
//	// 7 遇到\0 
//	printf("%d\n", strlen(arr));
//
//	// 7 遇到\0 
//	printf("%d\n", strlen(arr + 0));	
//	
//	// 报错，
//	//printf("%d\n", strlen(*arr));   
//
//
//	// 报错
//	//printf("%d\n", strlen(arr[1]));
//	
//	// 7 遇到\0 
//	printf("%d\n", strlen(&arr));    
//	// 随机值
//	printf("%d\n", strlen(&arr+1));    //
//	// 6 遇到\0 
//	printf("%d\n", strlen(&arr[0] + 1));//
//	return 0;
//}

//int main() {
//	char* p = "weihong"; // 字符串常量，放在常量区
//
//	printf("%d\n", sizeof(p));     //  4或8   char*指针  
//	printf("%d\n", sizeof(p +0));   // 4或8	  char*指针
//	printf("%d\n", sizeof(*p));    //  1      p 是首元素地址，*p是首元素 ‘w’
//	printf("%d\n", sizeof(p[1]));  //  1      首元素 'w'
//	printf("%d\n", sizeof(&p));    // 4或8    指针 p 的地址，二级指针，还是地址
//	printf("%d\n", sizeof(&p +1));  // 4或8  地址
//	printf("%d\n", sizeof(&p[0]+1));//4或8   地址
//
//	// 7 遇到\0 
//	printf("%d\n", strlen(p));
//
//	// 7 遇到\0 
//	printf("%d\n", strlen(p + 0));
//	
//	// 报错，
//	//printf("%d\n", strlen(*p));
//
//
//	// 报错
//	//printf("%d\n", strlen(p[1]));
//	
//	// 随机值，从p的地址开始 遇到\0
//	printf("%d\n", strlen(&p));
//	// 随机值
//	printf("%d\n", strlen(&p+1));    //
//	// 6 遇到\0 
//	printf("%d\n", strlen(&p[0] + 1));//
//
//	return 0;
//}
