#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// 
// �������ڴ�������
//
// ��NULL�Ľ�����
// �Զ�̬���ٿռ��Խ�����
// �ԷǶ�̬���ٵ��ڴ�����ͷ�
// ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
// ��ͬһ�鶯̬�ڴ�ռ����ͷ�
// ��̬�ڴ�ռ������ͷţ��ڴ�й¶��
// 


//// ��NULL�Ľ�����
//int main() {
//	int* p = (int*)malloc(40);
//	// �������пգ�ֱ�ӽ����ã�����Ϊ��ָ�룬
//	// 
//	*p = 20;
//	return 0;
//}
//
//// �ԷǶ�̬���ٵ��ڴ�����ͷ�
//int main() {
//	int a = 10;
//	int* p = &a;
//
//	// err
//	//free(p);
//	//p = NULL;
//	return 0;
//}


//// ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main() {
//	int* p = (int*)malloc(40);
//	int i = 0;
//
//	for (i = 0; i < 10; i++) {
//		*p = i;
//		p++;
//	}
//	// err��p�Ѿ�������ʼλ����
//	free(p);
//	p = NULL;
//
//	return 0;
//}


// // 1��ָ���������Ĵ���
#include<string.h>
//void GetMemory(char* p) {
//	// �β�ÿ�ε��ú�����������100���ֽ��ڴ�ռ�
//	// �����ý�����p�ͱ������ˣ��ڴ�й¶
//	p = (char*)malloc(100);
//}
//void test(void) {
//	char* str = NULL;
//
//	GetMemory(str);
//	// str û���ı䣬�����ǿ�ָ�룬ʹ��strcpy�Կ�ָ�����copy���ǳ�Σ��
//	strcpy(str, "Hello World");
//	printf(str);
//}
//int main() {
//	test();
//	return 0;
//}
//// ��ȷ�汾
//void GetMemory(char** p) {
//	// �������ָ��str�ĵ�ַ�������ö���ָ�����
//	// �Զ���ָ������ã��õ�str����ʱstr�ŻῪ�ٿռ�
//	*p = (char*)malloc(100);
//}
//void test(void) {
//	char* str = NULL;
//	// ����str��ָ���ȥ���Ż��str�е����ݽ����޸�
//	GetMemory(&str);
//	// strָ������¿��ٵ�100���ֽڿռ�
//	strcpy(str, "Hello World");
//	printf(str);
//	// �ͷſռ�
//	free(str);
//	str = NULL;
//}
//int main() {
//	test();
//	return 0;
//}




// // 2��ָ���������Ĵ���
//char* GetMemory(void){
//	char p[] = "Hello World";
//	return p;
//}
//
//void test(void) {
//	char* str = NULL;
//	// p��ַ���������ˣ���p�е����� ��������
//	str = GetMemory();
//	printf(str);
//}
//int main() {
//	test();
//	return 0;
//}


//// // 3��ָ���������Ĵ���
//void GetMemory(char** p,int num) {
//	*p = (char*)malloc(100);
//}
//void test(void) {
//	char* str = NULL;
//	// ����str��ָ���ȥ���Ż��str�е����ݽ����޸�
//	GetMemory(&str,100);
//	// strָ������¿��ٵ�100���ֽڿռ�
//	strcpy(str, "Hello World");
//	printf(str);
//	// ûѽ�ͷ��ڴ�ռ䣬������ڴ�й¶
//
//}
//int main() {
//	test();
//	return 0;
//}

//void test() {
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	// ����str��ָ���100�ֽڴ�С�Ŀռ���Ȼ���ͷ���
//	// ��str ��Ȼָ��֮ǰ�Ŀռ�
//	// ����Ұָ��
//	
//	str = NULL; // ��ȷ����
//	if (str != NULL) {
//		strcpy(str, "world");
//		printf(str);
//	}
//
//}



// 
// �ڴ濪��
// 
// �ڴ�ռ�ֲ�
// 
// �ں������û����벻�ܶ�д��
// ջ��������������
// �ڴ�ӳ��Σ��ļ�ӳ�䡢��̬�⡢����ӳ�䣩
// ����������������
// ���ݶ�---��̬����ȫ�ֱ�������̬������
// ����Σ���ִ�д��롢ֻ��������
//








