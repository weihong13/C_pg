#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//// �����#define����ı�ʶ�� ö�����������ͼ�� 
//enum Day {
//	// Ĭ�ϴ�0��ʼ�������Դ�����
//	Mon = 1, 
//	Tues,
//	Wed, 
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
//int main() {
//	
//	enum Day d = Fri;
//	printf("%d\n", d);
//
//	return 0;
//}


//
// ���ϣ������壩
//
// ������Ա��ͬʱ�ã���ʡ�ռ�  
// ������Ҳ���ڶ���
//

//union Un {
//	int a;// 4�ֽ�
//	char c;// 1�ֽ�
//};
//
//int main() {
//	union Un u;
//
//	printf("%d\n", sizeof(u)); // 4�ֽ�
//
//	// ������ַ��ͬ��ֻռ4���ֽڣ�����һ��ռ�
//	
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//	return 0;
//}



//// �жϵ�ǰ������Ǵ�˴洢����С�˴洢
//int check_sys() {
//	union Un {
//		int a;// 4�ֽ�
//		char c;// 1�ֽ�
//	}u;
//	u.a = 1;
//	return u.c;
//}
//int check_sys1() {
//	int a = 1;
//	return *(char*)&a;
//}
//int main() {
//	// int a = 1; // 0x 00 00 00 01
//	// �� ------------> ��
//	//   01 00 00 00  С��
//	//   00 00 00 01  ���
//	//
//	int ret = check_sys1();
//	if (1 == ret) {
//		printf("С��");
//	}
//	else {
//		printf("���");
//	}
//	return 0;
//}



// Լɪ��
/*
Description
N����Χ��һȦ���ӵ�һ���˿�ʼ����������M���˳�Ȧ��
������һ���˿�ʼ����������M���˳�Ȧ����������γ�Ȧ���˵ı�š�
Input
����N��M��
*/
//void DelNum(int* arr, int n,int sz) {
//	int i = n;
//	for (i = n; i < sz-1; i++) {
//		arr[i] = arr[i + 1];
//	}
//}
//int main() {
//	int arr[100] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		arr[i] = i + 1;
//	}
//
//	int j = 1;
//	i = 0;
//	while (n) {
//		
//		if (j % m == 0) {
//			// ��ӡ
//			printf("%d ",arr[i % n]);
//			// ɾ���ƶ�
//			DelNum(arr, i % n,n);
//			// ��һλ
//			j = 0;
//			i = i % n;
//			i--;
//			n--;
//		}
//		i++;
//		j++;
//
//	}
//}
