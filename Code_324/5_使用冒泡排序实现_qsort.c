#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
	使用冒泡排序自己实现 qsort函数
*/


// 交换两个元素的位置，这里我们传入了一个元素的宽度
// 以每个元素的宽度为限制，可以很好的确定要交换的元素在那个位置停止，避免越界访问
void Swap(char* buf1,char* buf2,int width) {
	int i = 0;
	char temp = 0;
	for (i = 0; i < width; i++) {
		temp = buf1[i];
		buf1[i] = buf2[i];
		buf2[i] = temp;

	}
}
// 实现qsort // 因为不知道传入的是什么类型，void* base 传入一个泛型 
void bubbleSort(void* base, int sz, int width, int(*cmp)(const void* e1,const void* e2)) {
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < sz - 1; i++) { // 趟数
		// 一趟冒泡排序
		int flag = 1; // 假设已经是升序的序列
		for (j = 0; j < sz - i - 1; j++) {
			
			// (char*)base + j * width
			// 这里，我们将base强制转换为char*的数据，使得它每次只能跳转一个字节
			// 然后我们根据传入的每个元素宽度 width ，对每次跳转的大小进行了设置
			// 这样就可以选取到正确的位置
			// 这里我们利用 自己写的cmp进行两个元素的比较，传入的是待比较的两个元素的地址
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				// 交换传入函数的内容
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0; // 交换了，说明不是有序的
			}


		}
		if (1 == flag) {
			break;
		}
	}
}

int cmp_int(const void* e1, const void* e2) {
	// 直接返回两者的差值即可 -- 升序
	return (*(int*)e1 - *(int*)e2);

	// 降序 返回 e2 - e1 的差值
	// return (*(int*)e2 - *(int*)e1);
}

// 测试对int序列进行排序
void test1() {
	int arr[] = { 1,4,5,8,6,7,10,11,14,9,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// 排序
	bubbleSort(arr, sz,sizeof(arr[0]), cmp_int);
	// 输出
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	// 测试 对int排序
}


struct Stu {
	char name[20];
	int age;
};
// strcmp 比较两个字符串大小 返回值是 <0, 0 ,>0
int qsort_stu_by_name(const void* e1,const void* e2) {
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
int qsort_stu_by_age(const void* e1, const void* e2) {
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test2() {
	// 测试使用sqort 排序结构体类型的数据
	struct Stu s[] = { {"zhangsan",15} ,{"lisi",30} ,{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	// 按照姓名排序
	// bubbleSort(s, sz, sizeof(s[0]), qsort_stu_by_name);
	// 按照年龄排序
	bubbleSort(s, sz, sizeof(s[0]), qsort_stu_by_age);


}

int main() {

	// 测试 对int排序
	//test1();
	// 测试对结构体排序
	test2();
	return 0;
}