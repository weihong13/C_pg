#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//
// scanf /fscanf /sscanf
// printf/fprintf/sprintf
// 
// scanf  是针对标准输入（键盘）的格式化输入语句
// printf 是针对标准输出（屏幕）的格式化输出语句
// fscanf 是针对所有输入流的格式化输入语句
// fprintf是针对所有输出流的格式化输出语句
// 
// 
// sscanf
// 从字符串中转化出格式化数据
// 
// sprintf
// int sprintf ( char * str, const char * format, ... );
// Write formatted data to string
// 把格式化的数据写到字符串中，本质上是把格式化数据转换为字符串
//

//struct S {
//	char name[20];
//	int age;
//	double score;
//};
//int main() {
//	struct S s = { "weihong",23,99.99 };
//	char ch[50] = { 0 };
//	// 将结构体中的格式化数据转换到字符串格式,放入ch
//	sprintf(ch, "%s %d %.2lf", s.name, s.age, s.score);
//	// 现在 "weihong 23 99.99"是字符串
//	printf("字符串：%s\n", ch);
//
//	// 将字符串ch中获取数据，并以结构化的数据存入结构体 temp
//	struct S temp = { 0 };
//	sscanf(ch, "%s %d %lf", temp.name, &(temp.age), &(temp.score));
//	printf("格式化：%s %d %.2lf\n", temp.name, temp.age, temp.score);
//
//	return 0;
//}


//
// 文件的随机读写
// 
// fseek
// int fseek ( FILE * stream, long int offset, int origin );
//            文件指针          偏移量          位置
// origin
// SEEK_SET	Beginning of file 从文件开头偏移
// SEEK_CUR	Current position of the file pointer 从当前指针偏移
// SEEK_END	End of file* 从文件末尾偏移
// 
// 
// ftell 返回当前文件指针相对起始位置的偏移量
// 
// rewind 让文件指针位置 回到起始位置
//

// // 读字符
//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	// 读字符
//	//int ch = fgetc(pf); // weihong
//	//printf("%c\n", ch); //一次读一个字符 w
//	//ch = fgetc(pf); // weihong
//	//printf("%c\n", ch); //一次读一个字符 e
//	//ch = fgetc(pf); // weihong
//	//printf("%c\n", ch); //一次读一个字符 i
//
//	// 从文件开头偏移两个位置读 i 
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	printf("%d\n", ftell(pf)); // 3
//
//	// 从当前指针 h 偏移3个字符到 g
//	fseek(pf, 3, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	printf("%d\n", ftell(pf)); // 7
//
//	// 从文件末尾向前偏移2个到 n
//	fseek(pf, -2, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// 文件指针回到起始位置
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch); // w
//
//	// 关闭
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 文件读取结束的判定--feof
// 当文件读取结束是，我们需要判断是读取错误而结束，还是文件末尾而结束
// 文本文件读取结束：EOF(fgetc)、NULL(fgets)
// 二进制文件读取结束：fread、fwrite，需要输出读取元素个数，
// 返回值是成功读到的元素个数
// 判断返回值与需要读取个数的大小关系
//



// 
// 因为缓冲区存在, C语言在操作文件时，需要做刷新缓冲区或者在文件操作结束时关闭文件（关闭时也会刷新缓冲区）
// 不然，可能 导致 文件读写出现问题
// 如果没有关闭文件，没有刷新缓冲区，在下一次读写文件时，
// 缓冲区中还有之前的内容待写入，此时打开文件就会写入之前缓冲区的内容，导致错误
//
//
