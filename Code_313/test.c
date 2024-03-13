#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//分支语句、循环语句
// 控制语句：条件判断语句、循环语句、转向语句

//int main() {
//	int a = 0;
//	int b = 2;
//	// 什么都不打印
//	// 如果没有 {} else 只和离它最近的 if 匹配
//	if (1 == a)
//		if (2 == b) //  if(b ==2) 前面的方式可以避免少些等号，导致一直为真
//			printf("hehe/n");
//	else
//		printf("haha\n");
//
//	return 0;
//}

//// 1-100的奇数
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1) {
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}

//// switch  // 判断元音辅音
//int main() {
//	char ch;
//	int i = 0;
//	scanf("%c", &ch);
//	switch (ch) 
//	{
//		case 'a':  // 遇不到break时，持续往下走，可以实现多个case匹配同一输出的效果
//		case 'e':
//		case 'i':
//		case 'o':
//		case 'u':
//		case 'A':
//		case 'E':
//		case 'I':
//		case 'O':
//		case 'U':
//			i = 1;
//			printf("%d",i);
//			break;
//		default:  // 上面的条件都没有时，进入default
//			// 通过ASCII值，判断输入是否为数字
//			if (ch<'A') {
//				printf("none");
//			}
//			else {
//				printf("%d", i);
//			}	
//	}
//	return 0;
//}

// 循环语句 while、for、do while

// while
// break； 永久终止循环
// continue；跳过本次循环后面的代码，直接去判断是否进入下一次循环
//int main() {
//	int i = 1;
//	while (i <= 10) {
//		if (5 == i) {
//			break;  // 1-4, i=5时，跳出循环
//			// continue; 1-4... 死循环，i一直等于5，作用为，跳过后面的代码
//		}
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

// 输入缓冲区
// getchar()读取字符  scanf读取字符
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) { // 使用ctrl z 进行截断，根据MSDN，getchar 在接收到非字符类型时，会返回EOF（end of file，#define 定义的-1）
//		// 每次输入之后，都会自动回车
//		putchar(ch); // 回车原因是，输入字符之后，通过回车进行确认，在输入缓冲区就存在 一个字符和一个\n，
//		             // 然后getchar 读取字符后，还会继续读取\n,\n ASCII值为10，不会返回EOF.	
//					 // 
//	}
//	return 0;
//}

//// 清除输入缓存区内容
//int main() {
//	// 假设密码为字符串
//	char pwd[18] = { 0 };
//
//	printf("请输入密码：>");
//	scanf("%s", pwd); // 数组变量本身就是地址，不用加取地址符
//
//	//getchar(); // 消除scanf 留下的回车，但如果输入密码时，存在 空格（asda asdas），scanf在读取到空格之后就结束读取了
//			   // 此时，输入缓冲区中，还有 asdas等内容， 该getchar只读取 a，剩下的 sdas就给下一个getchar了，导致直接输出NO
//
//	// gets() 读取一行字符串，空格也读
//	// scanf(" %s"); 读取时会跳过空格
//	
//	// 正确方法
//	int ch = 0;
//	while ((ch = getchar()) != '\n') {
//		; // 读不到回车就 一直读
//	}
//	//fflush(stdin); // 清除输入缓冲区
//	//fflush(stdout); // 清楚标准输出缓存区
//
//	printf("请确认密码（Y/N）:>");
//	int ret = getchar();  // 这里scanf输入密码后，还带着一个回车，该 \n 还在输入缓冲区，导致 getchar 直接读取了这个回车，
//	if ('Y' == ret) {     // 此时，ret = \n，导致直接进入 else 打印输出 NO。
//		printf("YES");
//	}
//	else {
//		printf("NO");
//	}
//	return 0;
//}

//// 只打印数字，跳过其他字符
//int main() {
//	char ch = '\n';
//	while ((ch = getchar()) != EOF) {
//		// 输入0-9除外的内容，直接再次循环，不打印
//		if (ch < '0' || ch > '9') {
//			continue;
//		}
//		// 数字0-9打印
//		putchar(ch);
//	}
//	return 0;
//}

//// 转换以下ASCII码值，并用字符输出
//int main() {
//	int arr[] = { 73,32,99,101,121,103,98,47,33,25,105,33};
//	int sz = sizeof(arr) / sizeof(arr[0]);// 计算数组元素个数
//	int i = 0;
//	while (i < sz) {
//		printf("%c\n", arr[i]);
//		i++;
//	}
//
//	return 0;
//}

// 输入输出生日
// scanf %m 可以规定输入的域宽；printf %0 指定左面不使用的位置自动填0
int main() {
	int year = 0;
	int month = 0;
	int day = 0;
	// 输入数据  
	scanf("%4d%2d%2d", &year,&month,&day); // 截取4位 2位 2位

	// 输出数据
	printf("year=%d\n", year);
	printf("month=%02d\n", month);  // 打印两位，不够，左面补0
	printf("date=%02d\n", day);

	return 0;
}