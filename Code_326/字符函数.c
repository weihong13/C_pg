#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
// 字符库函数

//// 求字符串长度 - strlen() 
//#include<assert.h>
//int my_strlen(char* str) {
//	int count = 0;
//	assert(str);
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//int main() {
//
//	char ch[] = "weihong";
//	// 遇到\0 就停止，返回一个无符号整型
//	int len = strlen(ch);
//	int len1 = my_strlen(ch);
//	printf("%d", len1);
//
//	return 0;
//}


// 字符串拷贝 char *strcpy(char *dest, const char *src)
// 把 src 所指向的字符串复制到 dest。

//int main() {
//	char name[20] = { 0 };
//	char name1[20] = { 0 };
//	// name = "weihong" // err
//	// name是数组名是个地址，weihong是个字符串，你没办法将字符串给地址
//
//	strcpy(name, "weihong");// ok
//	printf("%s\n", name);  // weihong
//
//	// strcpy 遇到\0 就停止了
//	strcpy(name1, "wei\0hong");// ok
//	printf("%s\n", name1); // wei
//
//	char name2[3] = { 0 };
//	// 要复制的内容，不能比目标区域大
//	// strcpy(name2, "weihong"); // err
//
//	char a = "abcdef";  // 常量字符串，不能被修改
//	char b = "weihong";
//	// 目标区域必须是可修改的空间
//	// strcpy(a, b); // err
//	return 0;
//}

//#include<assert.h>
//char*  my_strcpy(char* dest,const char* src) {
//	assert(src);
//	assert(dest);
//
//	char* star = dest;
//	while (*src != '\0') {
//		*dest++ = *src++;
//	}
//	*dest = *src; // \0
//	return star;
//}
//int main() {
//	char arr1[] = "weihong";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//// 字符串追加 strcat
//#include<assert.h>
//char* my_strcat(char* dest, const char* src) {
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0') {
//		dest++;
//	}
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//int main() {
//	char ch[20] = "Wei ";
//
//	// ch是必须可修改的
//	// ch空间需要能放下追加的内容
//	// strcat(ch, "Hong");
//
//	my_strcat(ch, "Hong");
//	printf("%s\n", ch);
//	return 0;
//}


// 比较字符串大小 strcmp
//int main() {
//	char name1[20] = "zhangsan";
//	char name2[20] = "lishi";
//
//	// strcmp
//	/* 返回值
//	Return Value
//	Value Relationship of string1 to string2 
//	<0		string1 less than string2 
//	0		string1 identical to string2 
//	>0		string1 greater than string2 
//	*/
//	int ret = strcmp(name1, name2);
//	if (ret) {
//		printf(">");
//	}
//	else if(ret < 0){
//		printf("<");
//	}
//	else {
//		printf("=");
//	}
//	return 0;
//}

//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	while (*str1==*str2) {
//		
//		if (*str1 == '\0') {
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return  (*str1 - *str2);
//}
//
//int main() {
//	char name1[20] = "zhangsan";
//	char name2[20] = "lishi";
//
//	int ret = my_strcmp(name1, name2);
//	printf("%d", ret);
//	return 0;
//}

// !!!!!!!!!!!!!!!!
//	以上库函数，长度都不受到限制，比较危险，使用时要主要不能越界
// !!!!!!!!!!!!!!!!!!





// 长度受限制的 字符串函数
// strncpy
// ctrncat
// ctrncmp
// 相对安全

//int main(){
//
//	char name1[20] = "zhang san ";
//	char name2[20] = "lishi";
//	
//	// 只拷贝 5 个字符
//	// name2 不够5个 剩下的拷贝 \0
//	strncpy(name1, name2, 5);
//
//	printf("%s", name1);
//
//	return 0;
//}



// strstr 查找子串，查找某个字符串中是否包含另一个字符串
#include<assert.h>

// KMP算法
// 也是实现在一堆字符串中查找某个字符串的
// 效率高、但实现难度大
//

 
// 暴力查找 - 效率不高
char* my_strstr(const char* str1, const char* str2) {

	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;

	while (*p) {
		s1 = p;
		s2 = str2;
		while (*s1 !='\0'&& *s2!='\0' && *s1 == *s2) {
			s1++;
			s2++;
		}
		if (*s2 == '\0') {
			return (char*)p;
		}
		p++;
	}
	
	return NULL;
} 

int main() {
	char ch[] = "XXXXweihongXXXX";
	char name[] = "weihong";

	// 查找ch中有没有 weihoong 这个字符串
	// 如果有，返回 ch中 与之相同的第一字符的地址
	// 没有返回空指针 NULL
	// char* ret = strstr(ch, name);

	// 自己实现
	char* ret = my_strstr(ch, name);
	if (ret == NULL) {
		printf("子串不存在！\n");
	}
	else {
		printf("%s\n", ret); // weihongXXXXX
	}
	return 0;
}




