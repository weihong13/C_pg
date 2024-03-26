#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
// �ַ��⺯��

//// ���ַ������� - strlen() 
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
//	// ����\0 ��ֹͣ������һ���޷�������
//	int len = strlen(ch);
//	int len1 = my_strlen(ch);
//	printf("%d", len1);
//
//	return 0;
//}


// �ַ������� char *strcpy(char *dest, const char *src)
// �� src ��ָ����ַ������Ƶ� dest��

//int main() {
//	char name[20] = { 0 };
//	char name1[20] = { 0 };
//	// name = "weihong" // err
//	// name���������Ǹ���ַ��weihong�Ǹ��ַ�������û�취���ַ�������ַ
//
//	strcpy(name, "weihong");// ok
//	printf("%s\n", name);  // weihong
//
//	// strcpy ����\0 ��ֹͣ��
//	strcpy(name1, "wei\0hong");// ok
//	printf("%s\n", name1); // wei
//
//	char name2[3] = { 0 };
//	// Ҫ���Ƶ����ݣ����ܱ�Ŀ�������
//	// strcpy(name2, "weihong"); // err
//
//	char a = "abcdef";  // �����ַ��������ܱ��޸�
//	char b = "weihong";
//	// Ŀ����������ǿ��޸ĵĿռ�
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


//// �ַ���׷�� strcat
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
//	// ch�Ǳ�����޸ĵ�
//	// ch�ռ���Ҫ�ܷ���׷�ӵ�����
//	// strcat(ch, "Hong");
//
//	my_strcat(ch, "Hong");
//	printf("%s\n", ch);
//	return 0;
//}


// �Ƚ��ַ�����С strcmp
//int main() {
//	char name1[20] = "zhangsan";
//	char name2[20] = "lishi";
//
//	// strcmp
//	/* ����ֵ
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
//	���Ͽ⺯�������ȶ����ܵ����ƣ��Ƚ�Σ�գ�ʹ��ʱҪ��Ҫ����Խ��
// !!!!!!!!!!!!!!!!!!





// ���������Ƶ� �ַ�������
// strncpy
// ctrncat
// ctrncmp
// ��԰�ȫ

//int main(){
//
//	char name1[20] = "zhang san ";
//	char name2[20] = "lishi";
//	
//	// ֻ���� 5 ���ַ�
//	// name2 ����5�� ʣ�µĿ��� \0
//	strncpy(name1, name2, 5);
//
//	printf("%s", name1);
//
//	return 0;
//}



// strstr �����Ӵ�������ĳ���ַ������Ƿ������һ���ַ���
#include<assert.h>

// KMP�㷨
// Ҳ��ʵ����һ���ַ����в���ĳ���ַ�����
// Ч�ʸߡ���ʵ���Ѷȴ�
//

 
// �������� - Ч�ʲ���
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

	// ����ch����û�� weihoong ����ַ���
	// ����У����� ch�� ��֮��ͬ�ĵ�һ�ַ��ĵ�ַ
	// û�з��ؿ�ָ�� NULL
	// char* ret = strstr(ch, name);

	// �Լ�ʵ��
	char* ret = my_strstr(ch, name);
	if (ret == NULL) {
		printf("�Ӵ������ڣ�\n");
	}
	else {
		printf("%s\n", ret); // weihongXXXXX
	}
	return 0;
}




