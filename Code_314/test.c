#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// for循环 不要轻易在循环体内调整 循环变量
// 最好采用 前闭后开 分情况
// 判断部分 没有内容 就会死循环
//int main() {
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		if (5 == i) {
//			// break; 1-4
//			continue; //1-10,没有5， 不会进入死循环，但是while 会跳过后面的 i++，使i一直等于5
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++) { // 使用 i < 10 而不是 i <= 9，这样比较清楚为 打印素组的1-10个元素
//								// 打印 100-200 为 i = 100； i <=200, 这样更好一些
//		printf("%d ", arr[i]);
//	}
//
//	for (int j = 0; j < 10; j++) {  // C99 之后才支持这种在for内部定义的语法，C++也行
//
//	}
//	return 0;
//}

//// 循环几次？
//int main() {
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) { // 不循环，条件判断中 赋值k = 0； 为假，不进入循环
//		k++;
//	}
//	return 0;
//}

//// do while  至少循环一次
//int main() {
//	int i = 1;
//	do
//	{
//		if (5 == i) {
//			break; // 1-4
//			// coutinue; 1-4 然后死循环
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}



// 计算 N 的阶乘 n! = n*(n-1)*...*2*1
//int main() {
//	int n = 0;
//	int m = 1;
//	int i = 0;
//	// 输入
//	scanf("%d", &n);
//	// 计算
//	for (i = 1; i <= n; i++) {
//		m = m * i;
//	}
//	// 输出
//	printf("%d", m);
//	return 0;
//}

//// 计算 1!+2!+...+n!
//int main() {
//	int n = 0;
//	int i = 0;
//	int m = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		m = m * i;
//		sum += m;
//	}
//
//	printf("%d", sum);
//	return 0;
//}


//// 在一个有序数组中查找 n 
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		if (n == arr[i]) {
//			printf("找到了 %d", n);
//		}
//	}
//	if (i == sz) {
//		printf("找不到 %d", n);
//	}
//
//	return 0;
//}

////// 在一个有序数组中查找 n 
//// 二分法  log 2 n  // 排好序的
//int main(){
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int n = 0;
//	scanf("%d", &n);
//	while (left <= right) 
//	{
//		// mid = (left + right) / 2; // 当 left + right 的值溢出的时候，平均值就错了
//		mid = left + (right - left) / 2;  // 将俩数的差值 除二 ，再给低的加上 ，这样加上的值就少了，能够避免溢出
//		if (arr[mid] < n) {
//			left = mid+1;
//		}
//		else if (arr[mid] > n) {
//			right = mid-1;
//			
//		}
//		else {
//			printf("找到了,下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("没找到%d", n);
//	}
//	return 0;
//}

// 编写代码 演示多个字符从两端移动，向中间汇聚
// Welcome come to NEPU!
// #####################
//#include<windows.h>
//#include<stdlib.h>
//int main() {
//	char arr1[] = "Welcome come to NEPU!";
//	char arr2[] = "#####################";
//	// int sz = sizeof(arr1) / sizeof(arr1[0])-2;  // 元素个数算上了\0
//	int left = 0;
//	int right = strlen(arr2)-1; // strlen 计算\0 之前的元素个数
//	while (left <= right) {
//		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); // 每一秒打印一次,需要导入windows.h
//		// 清空屏幕
//		system("cls"); // system库函数， 可以执行系统命令， cls清空屏幕,导入stdlib.h
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

// 模拟用户登录，输入密码错误3次后 退出程序
// 比较两个字符串是否相等，不能使用 == ，应该使用库函数 strcmp
// 如果 库函数 strcmp 返回值是0，代表两个字符串相等
// 也需要导入头文件 string.h
// #include<string.h>
//// while 循环
//int main() {
//	char pwd[18] = "weihong";
//	char pwd_1[18] = {0};
//	int i = 1;
//	int m = 3;
//	while (i <= m) 
//	{
//		printf("请输入密码：>");
//		scanf("%s", pwd_1);
//		if (strcmp(pwd_1,pwd)==0) 
//		{
//			printf("登录成功！！！");
//			break;
//		}
//		else 
//		{
//			if (3 == i) 
//			{
//				printf("您已经输错%d次，请稍后再试\n", m);
//				break;
//			}
//			printf("密码错误，请重新输入，您还有%d 次输入机会\n", m - i);
//			i++;
//		}
//	}
//	return 0;
//}

//// for 循环
//int main() {
//	char pwd[18] = "weihong";
//	char pwd_1[18] = {0};
//	int i = 0;
//	int m = 3;
//	
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码：>");
//		scanf("%s", pwd_1);
//		if (strcmp(pwd, pwd_1) == 0) {
//			printf("登录成功！！！");
//			break;
//		}
//		else {
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (3 == i) {
//		printf("您已经输错%d次，请稍后再试\n", i);
//	}
//	return 0;
//}

// 数组 传参 的时候，实际上是传的数组首个元素的地址
void fun(int a[]) { // 这儿接收的 其实是 一个指针变量

	printf("%d\n", sizeof(a)); // 所以 该指针变量的大小，看系统环境
}

int main() {
	int a[10] = { 0 };
	printf("%d\n", sizeof(a));  // 40
	printf("%d\n", sizeof(a[0])); // 4
	fun(a); // 数组传参的时候，实际上是传的数组首个元素的地址
	return 0;
}