#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//
// strtok
// 切割字符串
// 
//

//int main() {
//	const char* sep = "@."; // 分隔符
//	
//	char  name[] = "weihong.shisan@weihong";
//	char cp[30] = { 0 };
//	
//	strcpy(cp, name); // weihong.shisan@weihong
//
//	//// strtok 会改变原本的字符串，因此需要先复制一份
//	//// strtok 会将遇到的第一个分隔符改为 \0,然后从开头返回
//	//char* ret = strtok(cp, sep);// weihong\0shisan@weihong
//	//printf("%s\n", ret);
//	//// 第二次分割，只需要传入NULL即可，他会从第一个分割符的下一个位置继续
//	//ret = strtok(NULL, sep); // shisan\0weihong
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep); // weihong 到字符串末尾结束
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
// 返回错误码信息
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
//	// 打开某个文件夹，有这个文件夹 返回路径，没有返回NULL
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		// errno -- C语言设置的一个全局的存放错误码的变量
//		// 读取文件失败后，就会把错误码传给errno
//		printf("%s", strerror(errno)); // No such file or directory
//		return 1;
//	}
//	return 0;
//}


// 字符分类函数
#include<ctype.h>

//int main() {
//	// 是否是数字
//	int ret = isdigit('w');
//	printf("%d\n", ret);
//	// 是否是字母
//	ret = isalpha('w');
//	printf("%d\n", ret);
//}

// // 字符转换函数  tolower  toupper
//int main() {
//	// 大写转小写
//	printf("%c\n", tolower('W'));
//	// 小写转大写
//	printf("%c\n", toupper('w'));
//	return 0;
//}



//// memcpy  memory copy  内存拷贝 --可以拷贝任意类型的数据
//// void *memcpy( void *dest, const void *src, size_t count ); // count 要拷贝多少字节
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
//  // 使用自己的memcpy将arr3 1 2 3 4 5 拷贝到 arr3 的 3 4 5 6 7 的位置
//	// my_memcpy(arr3+2, arr3, 20); //err 无法拷贝自己，只能对两个独立的空间进行操作
//	for (int i = 0; i < 8; i++) {
//		printf("%d ", arr4[i]);
//	}
//	return 0;
//}



//
// memmove
// 拷贝内存重叠的数据
//
//#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t num) {
//	assert(dest && src);
//	void* ret = dest;
//	if (dest >= src) {
//		// 后向前
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
// memcmp 比较函数
// 比较任意内容的大小 
//

//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,3,2 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}

//
// memset 内存设置
// void *memset( void *dest, int c, size_t count );

//int main() {
//	char name[] = "Wei Hong";
//	// 将name的 前3个!字节！修改为 X
//	memset(name,'X', 3);
//	printf("%s\n", name);
//	return 0;
//}

