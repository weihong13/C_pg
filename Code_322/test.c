#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// �����ַ����� Hello Wei Hong! --> Hong! Wei Hello
//
//// 1. Hello Wei Hong!
//// 2. !gnoH ieW olleH ���������ַ���
//// 3. Hong! Wei Hello ����ÿ������
////// ���������ַ���
////void Reverse_str(char* str ,int left,int right) {
////	char temp = 0;
////	while (left < right) {
////		temp = str[left];
////		str[left] = str[right];
////		str[right] = temp;
////		left++;
////		right--;
////	}
////}
////// ����ÿ������
////void Reverse_word(char* str) {
////	int left = 0;
////	int right = 0;
////
////	while (str[left]) {
////		while (str[right] != ' ' && str[right] != '\0') {
////			right++;
////		}
////
////		Reverse_str(str, left,right-1);
////		if (str[right] != '\0') {
////			right++;
////		}
////		
////		left = right;
////	}
////		
////	printf("%s",str);
////
////
////}
////int main() {
////	char arr[20] = { 0 };
////	gets(arr);
////	// �����ַ���
////	int len = strlen(arr);
////	Reverse_str(arr,0,len-1);
////	// ����ÿ������
////	Reverse_word(arr);
////	return 0;
////}


//// �������ڴ��еĴ洢
//
//// �������ڴ��еĴ洢��ԭ�롢���롢����
//// ��С���ֽ���
//// ���������ڴ��еĴ洢
//	
//// �ַ��ı����� ���ͣ����ڴ�����ASCII��ֵ���д洢
//
//// ��������
//// 1. ��������  int [5],int [8],char [20]
//// 2. �ṹ������ struct
//// 3. ö������  enum
//// 4. ��������  union
//
//// ָ������  void* q 
//
//// ������ void 
////void test(void) { // ��һ��void���� �޷���ֵ���ڶ���void�����ú������贫��
////	printf("hehe");
////}
////int main() {
////	test(1);
////	return 0;
////}



//// �������ڴ��еĴ洢
//// ����2���� �����ֱ�ʾ��ʽ--ԭ�롢���롢����
//// �������ڴ��д油��
//// ���������ŵ� 1-1 = 1+��-1��
//// 0000 0000 0000 0000 0000 0000 0000 0001
//// 1111 1111 1111 1111 1111 1111 1111 1111 +
////10000 0000 0000 0000 0000 0000 0000 0000
//// 0000 0000 0000 0000 0000 0000 0000 0000 = 0
//int main() {
//	int a = 20;
//	// 0000 0000 0000 0000 0000 0000 0001 0100 ���� ԭ�롢���롢������ͬ
//	// 0x 00 00 00 14
//	// �ڴ��� 0x 14 00 00 00 
//	int b = -10;
//	// 1000 0000 0000 0000 0000 0000 0000 1010 ԭ��
//	// 1111 1111 1111 1111 1111 1111 1111 0101 ����
//	// 1111 1111 1111 1111 1111 1111 1111 0110 ���루ԭ��ȡ��+1��
//	// 0x ff ff ff f6
//	// �ڴ��� 0x f6 ff ff ff
//	// ԭ��ȡ+1�õ�����
//	// ����ȡ��+1 Ҳ�ܵõ�ԭ��
//	// 1000 0000 0000 0000 0000 0000 0000 1010 ԭ��
//	// 1111 1111 1111 1111 1111 1111 1111 0110 ���루ԭ��ȡ��+1��
//	// 1000 0000 0000 0000 0000 0000 0000 1001 ����ȡ��
//	// 1000 0000 0000 0000 0000 0000 0000 1010 ����ȡ��+1 �õ�ԭ��
//	return 0;
//}
//


// ��С�˽���-- ȡ��Ӳ��
//								0x(��λ) 11 22 33 44  ����λ��
// ����ֽ���洢  ��λ�ڵ͵�ַ �͵�ַ---> 0x 11 22 33 44 ---->�ߵ�ַ 
// С���ֽ���洢  ��λ�ڸߵ�ַ �͵�ַ---> 0x 44 33 22 11 ---->�ߵ�ַ  ���Ŵ�

// char ��һ���ֽڣ������ڴ�С������

// �жϴ��С��

//int main() {
//	int a = 1;
//	// ��� 0x 00 00 00 01
//	// С�� 0X 01 00 00 00
//	// ��char* ����ȡ int a���ַ�����ָ�룬ÿ��ֻȡһ���ֽ�
//	// ���ȡ������ 00��˵���Ǵ�ˣ����ȡ������ 01 ˵����С��
//	char* pa = &a;
//	if (*pa) {
//		printf("С��");
//	}
//	else {
//		printf("���");
//	}
//	return 0;
//}

//// �ж����
//int main() {
//	// char һ���ֽڣ���λ
//	char a = 1;
//	// 00000000 00000000 00000000 00000001
//	// 00000001 a �ض�
//	signed char b = -1; // ��Χ -128~127 -128 1000000
//	// 10000000 00000000 00000000 00000001
//	// 11111111 11111111 11111111 11111110
//	// 11111111 11111111 11111111 11111111 ����
//	// 11111111 b = �ض�
//	// %d ��ӡ������ 32λ����Ҫ��������
//	// 11111111 11111111 11111111 11111111 ����
//	// 10000000 00000000 00000000 00000001 ԭ�� ��ӡ-1
//	unsigned char c = -1; // ��Χ 0~255
//	// -1 ����
//	// 11111111111111111111111111111111
//	// 11111111  c �ض�
//	//  %d ��ӡ������ 32λ����Ҫ��������
//	// ���޷����� ��λֱ�Ӳ� 0
//	// 00000000 00000000 00000000 11111111 // 255 ��ӡ
//	printf("a=%d b=%d c=%d\n", a, b, c);
//
//	char d = -128;
//	// 1000 0000 0000 0000 0000 0000 1000 0000
//	// 1111 1111 1111 1111 1111 1111 0111 1111
//	// 1111 1111 1111 1111 1111 1111 1000 0000 ��������
//	// 1000 0000  a -�ض�
//	// %u �޷������� ���� a����������
//	// 1111 1111 1111 1111 1111 1111 1000 0000
//	//
//	printf("%u", d); //4294967168
//	return 0;
//}


// �������Ĵ洢
// ������ V = (-1)^S * M * 2^E

// ����: V = 5.0f 
//         = 101.0    ��5�Ķ�����101��
//         = 1.01 * 2^2 (�����ƿ�ѧ������)  ʮ���ƿ�ѧ������ 123.45  = 1.2345 *10^2
//         = (-1)^0 * 1.01 * 2^2
//            S=0;  M=1.01; E=2;

// ����: V = 9.5f 
//         = 1001.1     С��������1 ���� 2^(-1) =0.5
//         = 1.0011 * 2^3 (�����ƿ�ѧ������)  
//         = (-1)^0 * 1.0011 * 2^3
//            S=0;  M=1.0011; E=3;

// ����: V = 9.6f 
//         = 1001.1001...10011000....     
//          С��������1001 ���� 2^(-1) =0.5 + 2^(-4)= 0.05625 ,ֻ��ȡ������ֵ��

// ����32λ��float ���λ��S, ������8λ��E��ʣ�µ�23λ����Ч����M
// ����64λ��double ���λ��S, ������11λ��E��ʣ�µ�52λ����Ч����M

// ����M�Ĵ洢
// IEEE 754 �涨����ΪĬ��M�� 1 �� M �� 2������Mһ����1.xxxxxx������
// ��1.01Ϊ���ڴ洢ʱ����ʡ��С����ǰ��1��ֻ����01�������Ӿ��ȣ�
// ��ˣ�����32λ��������23λ��Ч���ֿ��Ա���24λ��Ч����

// ����E�Ĵ洢
// IEEE 754 �涨��E��һ���޷�����
// ��ˣ�����32λfloat��8λ��E�ķ�Χ��0~255������64λdouble��11λ��E�ķ�Χ��0~2047��
// ���ǣ���ѧ�������Ǵ��ڸ����ģ�
// ���� V = 0.5, �����Ʊ�ʾ 0.1 
//        = 1 * 2^(-1)
//        = (-1)^0 * 1 * 2^(-1)
//		   S=0;   M=1;   E=(-1)  
// ���Ѿ��涨�ڴ洢ʱ�����޷��Ŵ洢��Ϊ�˽��EΪ���������⣬�ڴ洢ʱ����Ҫ��E ��һ���м�ֵ
// 32λfloat��E���м�ֵ��127������64λdouble��E���м�ֵ��1023
// ���ԣ����� 0.5 �� S=0;   M=1;   E=(-1) ����ʵֵ��
// �洢��E = (-1) ����ʵֵ��+ 127(�м�ֵ) = 126

// ����E��ȡ������Ϊ3�����
// E����1��0����E ��ȥ127��Ȼ��M ��1ȡ��
// EȫΪ0��ֱ���� 1-127��Ȼ��ֱ�ӽ�Mȡ�������ò�1����Ϊ�Ѿ��Ƿǳ��ӽ�0�ˣ�������1������ν
// EȫΪ1��ֱ�ӱ�ʾ-+ �����
//

//int main() {
//	float f = 5.5;
//	// 101.1
//	// 1.011 * 2^2
//	// (-1)^0 * 1.011 * 2^2
//	// S=0, E=2+127, M=1.011
//	// 0          S
//	// 10000001   E 129
//	// 011        M ǰ���1���ţ�ֻ��С����ĺ��011
//	// 0 10000001 011  00000000000000000000
//	// 0100 0000 1011 0000 0000 0000 0000 0000
//	// 0x 40 b0 00 00
//	return 0;
//}

//int main() {
//	int n = 9;
//	// [0000 0000 0000 0000 0000 0000 0000 1001] ����
//	float* pf = (float*) & n;
//	// �� 9 �����ʹ洢��ʽ�����˸�����
//	// 0 00000000 00000000000000000001001
//	// S    E        M
//	// E ȫΪ0 ֱ��Ϊ -126; Mֱ��ȡ����������1.
//	// (-1)^0 * 0.00000000000000000001001 * 2^(-126)
//	// 0.000000 ������Ĭ�����С����6λ
//	printf("n��ֵΪ��%d\n", n); // 9
//	printf("*pf��ֵΪ��%f\n", *pf);// 0.000000
//
//	*pf = 9.0; // ���ո������洢
//	// 1001.0
//	// 1.001 * 2^3
//	// S=0  E=3  M=1.001,  E��130��M��001
//	// 0 10000010 001 00000000000000000000
//	// [01000001000100000000000000000000]
//	// ������������Ǹ��ܴ������
//	printf("n��ֵΪ��%d\n", n); // 1091567616
//	printf("*pf��ֵΪ��%f\n", *pf); // 9.000000
//	return 0;
//}

// ����һ���������飬
// ʵ��һ������
// ��������������������ǰ�벿�֣�ż���ŵ�����
//void Fun(int* arr1, int sz) {
//	int left = 0;
//	int right = sz - 1;
//	int  temp = 0;
//	while (left < right) {
//		// ����������һ��ż��
//		while ((left < right) && arr1[left]%2==1) { // ��ֹȫΪ������ʱ�����Խ��
//			left++;
//		}
//		// ����������һ������
//		while ((left < right) && arr1[right]%2 == 0) {// ��ֹȫΪż����ʱ�����Խ��
//			right--;
//		}
//		// ����
//		if (left < right) {
//			temp = arr1[left];
//			arr1[left] = arr1[right];
//			arr1[right] = temp;
//			left++;
//			right--;
//		}
//
//	}
//}
//int main() {
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// ����
//	int  i = 0;
//	for (i = 0; i < sz; i++) {
//		scanf("%d", &arr[i]);
//	}
//	// ����
//	Fun(arr, sz);
//	// ���
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//


// �����������кϲ�-��������������кϲ�Ϊһ�����������
// ����3��
// ��һ������n m
// �ڶ������� n�����ֵ� ��������
// ���������� m�����ֵ� ��������
void merge_arr(int arrn[], int arrm[], int arr_merge[], int n, int m) {
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < n && j < m) {
		// ��Сֵ���� �ϲ�����
		if ( arrn[i] <= arrm[j]) {  // ��ֹԽ�����
			arr_merge[k] = arrn[i];
			k++;
			i++;
		}
		else if( arrn[i] > arrm[j])// ��ֹԽ�����
		{
			arr_merge[k] = arrm[j];
			k++;
			j++;
		}
	}
	// ��ʣ�µ�ֵ���� �ϲ��������
	if (n <= m) { 
		while (j < m) {
			arr_merge[k] = arrm[j];
			k++;
			j++;
		}

	}
	if (n >= m) {
		while (i < n) {
			arr_merge[k] = arrm[i];
			k++;
			i++;
		}

	}
}
int main() {
	//����
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arrn[1000] = {0};
	int arrm[1000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &arrn[i]);
	}
	for (i = 0; i < m; i++) {
		scanf("%d", &arrm[i]);
	}
	// �ϲ�
	int arr_merge[2000] = { 0 };
	merge_arr(arrn, arrm, arr_merge,n, m);
	// ���
	for (i = 0; i < m+n; i++) {
		printf("%d ", arr_merge[i]);
	}
	return 0;
}