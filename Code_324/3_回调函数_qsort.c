#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
 �ص�����ʾ����ʹ�� qsort ʵ�ֶ�int���������������
*/

// qsort ��������Ŀ⺯�� -- ���������������͵�����
// 
// ͨ���鿴MSDN���ҵ�qsort ������˵��
// 
// void qsort( void *base, // ��Ҫ��������ݵ���ʼλ�ã�
//             size_t num, // �������Ԫ�ظ��� 
//             size_t width, // �������ÿ��Ԫ�صĴ�С����λ���ֽڣ�
//             int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
//  __cdecl�Ǻ������ù涨��������
// 
// int (* compare )(const void *elem1, const void *elem2 ) );
// ����һ������ָ�룬compareָ��һ�� ���ڱȽ�����������С�ĺ�����ַ--���������Ҫ���Լ�д
// �ú����Ĳ����� const void *elem1, const void *elem2
// ����ֵ����Ϊ int
// void* ��������޾������͵�ָ�룬���Խ����������͵�ָ��
// �����ܶ�void*���н����ò�����Ҳ���ܶ�ָ����� +- ����
// 
// MSDN  �����Լ�д�ĺ��� �ķ���ֵ��������ȷ�涨��
// Return        Value Description   
//  <0         elem1 less than elem2
//	0          elem1 equivalent to elem2
//  >0         elem1 greater than elem2

//

//// �Ƚ�����intԪ��
//int compare(const void* e1, const void* e2) {
//	// ��Ϊ e1 e2 ��void* ���͵�ָ�룬���ܽ��н����ò���ֱ�ӽ����� *e1 // err
//	// ���ǣ�����֪�������ǱȽ� ����int Ԫ�صĴ�С��������ǿ���ֱ�ӽ���ǿ������ת��Ϊ int*��
//	// Ȼ����н����ò�����
//
//	//// ����MSDN �� compare����ֵ��Ҫ��
//	//if (*(int*)e1 > *(int*)e2) { 
//	//	return 1;  // e1 > e2 ,����һ������0 ����
//	//}
//	//else if (*(int*)e1 < *(int*)e2) {
//	//	return -1;// e1 < e2 ,����һ��С��0 ����
//	//}
//	//else {
//	//	return 0; // e1 = e2 ,����0
//	//}
//
//	// �������ؽ�Ϊ����
//	// ֱ�ӷ������ߵĲ�ֵ���� -- ����
//	return (*(int*)e1 - *(int*)e2);
//
//	// ���� ���� e2 - e1 �Ĳ�ֵ
//	// return (*(int*)e2 - *(int*)e1);
//}
//int main() {
//	// ����
//	int arr[] = { 1,4,5,8,6,7,10,11,14,9,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// ����
//	// bubbleSort(arr, sz);
//	// ����qsortʵ������
//	qsort(arr, sz, sizeof(arr[0]), compare);
//	// ���
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}