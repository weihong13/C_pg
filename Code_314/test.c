#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// forѭ�� ��Ҫ������ѭ�����ڵ��� ѭ������
// ��ò��� ǰ�պ� �����
// �жϲ��� û������ �ͻ���ѭ��
//int main() {
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//		if (5 == i) {
//			// break; 1-4
//			continue; //1-10,û��5�� ���������ѭ��������while ����������� i++��ʹiһֱ����5
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++) { // ʹ�� i < 10 ������ i <= 9�������Ƚ����Ϊ ��ӡ�����1-10��Ԫ��
//								// ��ӡ 100-200 Ϊ i = 100�� i <=200, ��������һЩ
//		printf("%d ", arr[i]);
//	}
//
//	for (int j = 0; j < 10; j++) {  // C99 ֮���֧��������for�ڲ�������﷨��C++Ҳ��
//
//	}
//	return 0;
//}

//// ѭ�����Σ�
//int main() {
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) { // ��ѭ���������ж��� ��ֵk = 0�� Ϊ�٣�������ѭ��
//		k++;
//	}
//	return 0;
//}

//// do while  ����ѭ��һ��
//int main() {
//	int i = 1;
//	do
//	{
//		if (5 == i) {
//			break; // 1-4
//			// coutinue; 1-4 Ȼ����ѭ��
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}



// ���� N �Ľ׳� n! = n*(n-1)*...*2*1
//int main() {
//	int n = 0;
//	int m = 1;
//	int i = 0;
//	// ����
//	scanf("%d", &n);
//	// ����
//	for (i = 1; i <= n; i++) {
//		m = m * i;
//	}
//	// ���
//	printf("%d", m);
//	return 0;
//}

//// ���� 1!+2!+...+n!
//int main() {
//	int n = 0;
//	int i = 0;
//	int m = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		m = m * i;
//		sum += m;
//	}
//
//	printf("%d", sum);
//	return 0;
//}


//// ��һ�����������в��� n 
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		if (n == arr[i]) {
//			printf("�ҵ��� %d", n);
//		}
//	}
//	if (i == sz) {
//		printf("�Ҳ��� %d", n);
//	}
//
//	return 0;
//}

////// ��һ�����������в��� n 
//// ���ַ�  log 2 n  // �ź����
//int main(){
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int n = 0;
//	scanf("%d", &n);
//	while (left <= right) 
//	{
//		// mid = (left + right) / 2; // �� left + right ��ֵ�����ʱ��ƽ��ֵ�ʹ���
//		mid = left + (right - left) / 2;  // �������Ĳ�ֵ ���� ���ٸ��͵ļ��� ���������ϵ�ֵ�����ˣ��ܹ��������
//		if (arr[mid] < n) {
//			left = mid+1;
//		}
//		else if (arr[mid] > n) {
//			right = mid-1;
//			
//		}
//		else {
//			printf("�ҵ���,�±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("û�ҵ�%d", n);
//	}
//	return 0;
//}

// ��д���� ��ʾ����ַ��������ƶ������м���
// Welcome come to NEPU!
// #####################
//#include<windows.h>
//#include<stdlib.h>
//int main() {
//	char arr1[] = "Welcome come to NEPU!";
//	char arr2[] = "#####################";
//	// int sz = sizeof(arr1) / sizeof(arr1[0])-2;  // Ԫ�ظ���������\0
//	int left = 0;
//	int right = strlen(arr2)-1; // strlen ����\0 ֮ǰ��Ԫ�ظ���
//	while (left <= right) {
//		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); // ÿһ���ӡһ��,��Ҫ����windows.h
//		// �����Ļ
//		system("cls"); // system�⺯���� ����ִ��ϵͳ��� cls�����Ļ,����stdlib.h
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

// ģ���û���¼�������������3�κ� �˳�����
// �Ƚ������ַ����Ƿ���ȣ�����ʹ�� == ��Ӧ��ʹ�ÿ⺯�� strcmp
// ��� �⺯�� strcmp ����ֵ��0�����������ַ������
// Ҳ��Ҫ����ͷ�ļ� string.h
// #include<string.h>
//// while ѭ��
//int main() {
//	char pwd[18] = "weihong";
//	char pwd_1[18] = {0};
//	int i = 1;
//	int m = 3;
//	while (i <= m) 
//	{
//		printf("���������룺>");
//		scanf("%s", pwd_1);
//		if (strcmp(pwd_1,pwd)==0) 
//		{
//			printf("��¼�ɹ�������");
//			break;
//		}
//		else 
//		{
//			if (3 == i) 
//			{
//				printf("���Ѿ����%d�Σ����Ժ�����\n", m);
//				break;
//			}
//			printf("����������������룬������%d ���������\n", m - i);
//			i++;
//		}
//	}
//	return 0;
//}

//// for ѭ��
//int main() {
//	char pwd[18] = "weihong";
//	char pwd_1[18] = {0};
//	int i = 0;
//	int m = 3;
//	
//	for (i = 0; i < 3; i++) {
//		printf("���������룺>");
//		scanf("%s", pwd_1);
//		if (strcmp(pwd, pwd_1) == 0) {
//			printf("��¼�ɹ�������");
//			break;
//		}
//		else {
//			printf("�����������������\n");
//		}
//	}
//	if (3 == i) {
//		printf("���Ѿ����%d�Σ����Ժ�����\n", i);
//	}
//	return 0;
//}

// ���� ���� ��ʱ��ʵ�����Ǵ��������׸�Ԫ�صĵ�ַ
void fun(int a[]) { // ������յ� ��ʵ�� һ��ָ�����

	printf("%d\n", sizeof(a)); // ���� ��ָ������Ĵ�С����ϵͳ����
}

int main() {
	int a[10] = { 0 };
	printf("%d\n", sizeof(a));  // 40
	printf("%d\n", sizeof(a[0])); // 4
	fun(a); // ���鴫�ε�ʱ��ʵ�����Ǵ��������׸�Ԫ�صĵ�ַ
	return 0;
}