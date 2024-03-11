#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 数组的定义
int main() {

	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
	printf("%d\n", arr[8]);
	
	int i = 0;
	while (i<10) {
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}