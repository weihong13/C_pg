#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��֧��䡢ѭ�����
// ������䣺�����ж���䡢ѭ����䡢ת�����

//int main() {
//	int a = 0;
//	int b = 2;
//	// ʲô������ӡ
//	// ���û�� {} else ֻ����������� if ƥ��
//	if (1 == a)
//		if (2 == b) //  if(b ==2) ǰ��ķ�ʽ���Ա�����Щ�Ⱥţ�����һֱΪ��
//			printf("hehe/n");
//	else
//		printf("haha\n");
//
//	return 0;
//}

//// 1-100������
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1) {
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}

//// switch  // �ж�Ԫ������
//int main() {
//	char ch;
//	int i = 0;
//	scanf("%c", &ch);
//	switch (ch) 
//	{
//		case 'a':  // ������breakʱ�����������ߣ�����ʵ�ֶ��caseƥ��ͬһ�����Ч��
//		case 'e':
//		case 'i':
//		case 'o':
//		case 'u':
//		case 'A':
//		case 'E':
//		case 'I':
//		case 'O':
//		case 'U':
//			i = 1;
//			printf("%d",i);
//			break;
//		default:  // �����������û��ʱ������default
//			// ͨ��ASCIIֵ���ж������Ƿ�Ϊ����
//			if (ch<'A') {
//				printf("none");
//			}
//			else {
//				printf("%d", i);
//			}	
//	}
//	return 0;
//}

// ѭ����� while��for��do while

// while
// break�� ������ֹѭ��
// continue����������ѭ������Ĵ��룬ֱ��ȥ�ж��Ƿ������һ��ѭ��
//int main() {
//	int i = 1;
//	while (i <= 10) {
//		if (5 == i) {
//			break;  // 1-4, i=5ʱ������ѭ��
//			// continue; 1-4... ��ѭ����iһֱ����5������Ϊ����������Ĵ���
//		}
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

// ���뻺����
// getchar()��ȡ�ַ�  scanf��ȡ�ַ�
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) { // ʹ��ctrl z ���нضϣ�����MSDN��getchar �ڽ��յ����ַ�����ʱ���᷵��EOF��end of file��#define �����-1��
//		// ÿ������֮�󣬶����Զ��س�
//		putchar(ch); // �س�ԭ���ǣ������ַ�֮��ͨ���س�����ȷ�ϣ������뻺�����ʹ��� һ���ַ���һ��\n��
//		             // Ȼ��getchar ��ȡ�ַ��󣬻��������ȡ\n,\n ASCIIֵΪ10�����᷵��EOF.	
//					 // 
//	}
//	return 0;
//}

//// ������뻺��������
//int main() {
//	// ��������Ϊ�ַ���
//	char pwd[18] = { 0 };
//
//	printf("���������룺>");
//	scanf("%s", pwd); // �������������ǵ�ַ�����ü�ȡ��ַ��
//
//	//getchar(); // ����scanf ���µĻس����������������ʱ������ �ո�asda asdas����scanf�ڶ�ȡ���ո�֮��ͽ�����ȡ��
//			   // ��ʱ�����뻺�����У����� asdas�����ݣ� ��getcharֻ��ȡ a��ʣ�µ� sdas�͸���һ��getchar�ˣ�����ֱ�����NO
//
//	// gets() ��ȡһ���ַ������ո�Ҳ��
//	// scanf(" %s"); ��ȡʱ�������ո�
//	
//	// ��ȷ����
//	int ch = 0;
//	while ((ch = getchar()) != '\n') {
//		; // �������س��� һֱ��
//	}
//	//fflush(stdin); // ������뻺����
//	//fflush(stdout); // �����׼���������
//
//	printf("��ȷ�����루Y/N��:>");
//	int ret = getchar();  // ����scanf��������󣬻�����һ���س����� \n �������뻺���������� getchar ֱ�Ӷ�ȡ������س���
//	if ('Y' == ret) {     // ��ʱ��ret = \n������ֱ�ӽ��� else ��ӡ��� NO��
//		printf("YES");
//	}
//	else {
//		printf("NO");
//	}
//	return 0;
//}

//// ֻ��ӡ���֣����������ַ�
//int main() {
//	char ch = '\n';
//	while ((ch = getchar()) != EOF) {
//		// ����0-9��������ݣ�ֱ���ٴ�ѭ��������ӡ
//		if (ch < '0' || ch > '9') {
//			continue;
//		}
//		// ����0-9��ӡ
//		putchar(ch);
//	}
//	return 0;
//}

//// ת������ASCII��ֵ�������ַ����
//int main() {
//	int arr[] = { 73,32,99,101,121,103,98,47,33,25,105,33};
//	int sz = sizeof(arr) / sizeof(arr[0]);// ��������Ԫ�ظ���
//	int i = 0;
//	while (i < sz) {
//		printf("%c\n", arr[i]);
//		i++;
//	}
//
//	return 0;
//}

// �����������
// scanf %m ���Թ涨��������printf %0 ָ�����治ʹ�õ�λ���Զ���0
int main() {
	int year = 0;
	int month = 0;
	int day = 0;
	// ��������  
	scanf("%4d%2d%2d", &year,&month,&day); // ��ȡ4λ 2λ 2λ

	// �������
	printf("year=%d\n", year);
	printf("month=%02d\n", month);  // ��ӡ��λ�����������油0
	printf("date=%02d\n", day);

	return 0;
}