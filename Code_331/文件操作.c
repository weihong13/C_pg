#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
// 文件操作

// 数据持久化保存

// 文件：程序文件、数据文件

// 文件信息区-FILE的结构体
// 每当打开一个文件时，系统会根据文件的情况创建一个File的结构体变量
// 一般是通过file的指针来维护这个变量的

//// 文件指针--文件类型指针
//FILE* pf;


// 打开文件 fopen
// FILE * fopen ( const char * filename, const char * mode );
// 
// const char * mode 文件的打开模式：
// 读"r"、写"w"、读写"r+"、读写"w+"、追加"a"、
// 
// 关闭文件 fclose
//

//int main() {
//	FILE* pf = fopen("C:\\Users\\Administrator\\Desktop\\test.txt", "r");
//	if (NULL == pf) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// 读文件
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//// 文件写入
//int main() {
//
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// 写文件
//	// 写入字符 fputc
//	// int fputc ( int character, FILE * stream );
//	// Write character to stream
//	fputc('c', pf);
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++) {
//		fputc(i, pf);
//	}
//	// 关闭
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//// 读字符
//int main() {
//
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// 读字符 fgetc
//	// int fgetc(FILE * stream);
//	// Get character from stream
//	//int c= getc( pf);
//	//printf("%c\n", c);
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) {
//		printf("%c ", ch);
//	}
//
//	// 关闭
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//// 读写写一行
//int main() {
//
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) {
//		// printf("%s\n", strerror(errno));
//		// 简化 
//		perror("fopen");
//		return 1;
//	}
//	// 写文件
//	// 写入一行 fputs
//	// int fputs ( const char * str, FILE * stream );
//	// Write string to stream
//	fputs("weihong\n", pf); // 文件中有内容时，会将之前的内容覆盖，重新写入	
//	fputs("weihong\n", pf);
//
//	// 读一行数据
//	// fgets
//	char arr[20];
//	fgets(arr, 5, pf); // 末尾会加\0，也算一个字符
//	printf("%s\n", arr);
//	// 关闭
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


// 读写格式化数据
// 
// fscanf
// fprintf
// 
//struct S {
//	char name[20];
//	int age;
//	double score;
//};
//int main() {
//	struct S s = { "weihong",24,99.99 };
//	struct S s1 = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	// 写入txt文件
//	//fprintf(pf, "%s %d %lf", s.name, s.age, s.score);
//	
//	// 读取文件中的内容
//	fscanf(pf,"%s %d %lf", s1.name, &(s1.age), &(s1.score));
//	// printf("%s %d %lf", s1.name, s1.age, s1.score);
//	// 直接打印到屏幕
//	fprintf(stdout, "%s %d %lf", s.name, s.age, s.score);
//
//	// 关闭
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 内存 ------ 读写  -----外部设备
// 内存 ------- 流 ------- 外部设备

//
// 流
// FILE* 文件流
// 
// 任何一个C程序，只要运行起来就会默认打开3个流
// FILE* stdin   --标准输入流（键盘）
// FILE* stdout  --标准输出流（屏幕）
// FILE* stderr  --标准错误流（屏幕）
//


//
// fread 二进制输入
// fwrite  二进制输出
//


struct S {
	char name[20];
	int age;
	double score;
};
int main() {
	struct S s = { "weihong",24,99.99 };
	struct S s1 = { 0 };
	// 以二进制形式写入文件中
	FILE* pf = fopen("test.txt", "rb");
	if (NULL == pf) {
		perror("fopen");
	}
	// 二进制方式写入
	fwrite(&s, sizeof(struct S), 1, pf);
	//     写入的内容、写入元素大小、写入元素个数、写到哪儿

	// 二进制方式读出
	fread(&s1, sizeof(struct S), 1, pf);
	printf("%s %d %lf", s1.name, s1.age, s1.score);
	fclose(pf);
	pf = NULL;
	return 0;
}