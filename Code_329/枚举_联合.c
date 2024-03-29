#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//// 相比于#define定义的标识符 枚举增加了类型检查 
//enum Day {
//	// 默认从0开始，下面以此增加
//	Mon = 1, 
//	Tues,
//	Wed, 
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
//int main() {
//	
//	enum Day d = Fri;
//	printf("%d\n", d);
//
//	return 0;
//}


//
// 联合（共用体）
//
// 几个成员不同时用，节省空间  
// 联合体也存在对齐
//

//union Un {
//	int a;// 4字节
//	char c;// 1字节
//};
//
//int main() {
//	union Un u;
//
//	printf("%d\n", sizeof(u)); // 4字节
//
//	// 三个地址相同，只占4个字节，共用一块空间
//	
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//	return 0;
//}



//// 判断当前计算机是大端存储还是小端存储
//int check_sys() {
//	union Un {
//		int a;// 4字节
//		char c;// 1字节
//	}u;
//	u.a = 1;
//	return u.c;
//}
//int check_sys1() {
//	int a = 1;
//	return *(char*)&a;
//}
//int main() {
//	// int a = 1; // 0x 00 00 00 01
//	// 低 ------------> 高
//	//   01 00 00 00  小端
//	//   00 00 00 01  大端
//	//
//	int ret = check_sys1();
//	if (1 == ret) {
//		printf("小端");
//	}
//	else {
//		printf("大端");
//	}
//	return 0;
//}



// 约瑟夫环
/*
Description
N个人围成一圈，从第一个人开始报数，数到M的人出圈；
再由下一个人开始报数，数到M的人出圈；…输出依次出圈的人的编号。
Input
输入N和M。
*/
//void DelNum(int* arr, int n,int sz) {
//	int i = n;
//	for (i = n; i < sz-1; i++) {
//		arr[i] = arr[i + 1];
//	}
//}
//int main() {
//	int arr[100] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		arr[i] = i + 1;
//	}
//
//	int j = 1;
//	i = 0;
//	while (n) {
//		
//		if (j % m == 0) {
//			// 打印
//			printf("%d ",arr[i % n]);
//			// 删除移动
//			DelNum(arr, i % n,n);
//			// 下一位
//			j = 0;
//			i = i % n;
//			i--;
//			n--;
//		}
//		i++;
//		j++;
//
//	}
//}
