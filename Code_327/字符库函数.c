#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//
// strtok
// �и��ַ���
// 
//

//int main() {
//	const char* sep = "@."; // �ָ���
//	
//	char  name[] = "weihong.shisan@weihong";
//	char cp[30] = { 0 };
//	
//	strcpy(cp, name); // weihong.shisan@weihong
//
//	//// strtok ��ı�ԭ�����ַ����������Ҫ�ȸ���һ��
//	//// strtok �Ὣ�����ĵ�һ���ָ�����Ϊ \0,Ȼ��ӿ�ͷ����
//	//char* ret = strtok(cp, sep);// weihong\0shisan@weihong
//	//printf("%s\n", ret);
//	//// �ڶ��ηָֻ��Ҫ����NULL���ɣ�����ӵ�һ���ָ������һ��λ�ü���
//	//ret = strtok(NULL, sep); // shisan\0weihong
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep); // weihong ���ַ���ĩβ����
//	//printf("%s\n", ret);
//
//
//	char* ret = NULL;
//	for (ret = strtok(cp,sep);
//		 ret != NULL;
//		 ret = strtok(NULL,sep)) 
//	{
//
//		printf("%s\n", ret);
//	}
//	
//	return 0;
//}


// strerror
// ���ش�������Ϣ
//
//int main() {
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//	//printf("%s\n", strerror(6));
//	
//	// ��ĳ���ļ��У�������ļ��� ����·����û�з���NULL
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		// errno -- C�������õ�һ��ȫ�ֵĴ�Ŵ�����ı���
//		// ��ȡ�ļ�ʧ�ܺ󣬾ͻ�Ѵ����봫��errno
//		printf("%s", strerror(errno)); // No such file or directory
//		return 1;
//	}
//	return 0;
//}


// �ַ����ຯ��
#include<ctype.h>

//int main() {
//	// �Ƿ�������
//	int ret = isdigit('w');
//	printf("%d\n", ret);
//	// �Ƿ�����ĸ
//	ret = isalpha('w');
//	printf("%d\n", ret);
//}

// // �ַ�ת������  tolower  toupper
//int main() {
//	// ��дתСд
//	printf("%c\n", tolower('W'));
//	// Сдת��д
//	printf("%c\n", toupper('w'));
//	return 0;
//}



//// memcpy  memory copy  �ڴ濽�� --���Կ����������͵�����
//// void *memcpy( void *dest, const void *src, size_t count ); // count Ҫ���������ֽ�
//#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num) {
//	assert(dest && src);
//	void* ret = dest;
//	unsigned int i = 0;
//	for (i = 0; i < num; i++) {
//		((char*)dest)[i] = ((char*)src)[i];
//	}
//	return ret;
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 32);
//
//	float f1[] = { 1.0, 2.0, 3.3, 4.2, 5.9 };
//	float f2[10] = { 0.0 };
//	memcpy(f2, f1, 20);
//	
//	int arr3[] = { 1,2,3,4,5,6,7,8 };
//	int arr4[10] = { 0 };
//	my_memcpy(arr4, arr3, 32);
//  
//  // ʹ���Լ���memcpy��arr3 1 2 3 4 5 ������ arr3 �� 3 4 5 6 7 ��λ��
//	// my_memcpy(arr3+2, arr3, 20); //err �޷������Լ���ֻ�ܶ����������Ŀռ���в���
//	for (int i = 0; i < 8; i++) {
//		printf("%d ", arr4[i]);
//	}
//	return 0;
//}



//
// memmove
// �����ڴ��ص�������
//
//#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t num) {
//	assert(dest && src);
//	void* ret = dest;
//	if (dest >= src) {
//		// ����ǰ
//		while (num--) {
//
//			((char*)dest)[num] = ((char*)src)[num];
//		}
//	}
//	else {
//		unsigned int i = 0;
//		for (i = 0; i < num ; i++) {
//			((char*)dest)[i] = ((char*)src)[i];
//		} 
//	}
//
//	return ret;
//}
//int main(){
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
//
//	// memmove(arr1 + 2, arr1, 20);
//
//	my_memmove(arr1 , arr1 + 2, 20);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//
// memcmp �ȽϺ���
// �Ƚ��������ݵĴ�С 
//

//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,3,2 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}

//
// memset �ڴ�����
// void *memset( void *dest, int c, size_t count );

//int main() {
//	char name[] = "Wei Hong";
//	// ��name�� ǰ3��!�ֽڣ��޸�Ϊ X
//	memset(name,'X', 3);
//	printf("%s\n", name);
//	return 0;
//}

