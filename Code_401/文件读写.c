#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//
// scanf /fscanf /sscanf
// printf/fprintf/sprintf
// 
// scanf  ����Ա�׼���루���̣��ĸ�ʽ���������
// printf ����Ա�׼�������Ļ���ĸ�ʽ��������
// fscanf ����������������ĸ�ʽ���������
// fprintf���������������ĸ�ʽ��������
// 
// 
// sscanf
// ���ַ�����ת������ʽ������
// 
// sprintf
// int sprintf ( char * str, const char * format, ... );
// Write formatted data to string
// �Ѹ�ʽ��������д���ַ����У��������ǰѸ�ʽ������ת��Ϊ�ַ���
//

//struct S {
//	char name[20];
//	int age;
//	double score;
//};
//int main() {
//	struct S s = { "weihong",23,99.99 };
//	char ch[50] = { 0 };
//	// ���ṹ���еĸ�ʽ������ת�����ַ�����ʽ,����ch
//	sprintf(ch, "%s %d %.2lf", s.name, s.age, s.score);
//	// ���� "weihong 23 99.99"���ַ���
//	printf("�ַ�����%s\n", ch);
//
//	// ���ַ���ch�л�ȡ���ݣ����Խṹ�������ݴ���ṹ�� temp
//	struct S temp = { 0 };
//	sscanf(ch, "%s %d %lf", temp.name, &(temp.age), &(temp.score));
//	printf("��ʽ����%s %d %.2lf\n", temp.name, temp.age, temp.score);
//
//	return 0;
//}


//
// �ļ��������д
// 
// fseek
// int fseek ( FILE * stream, long int offset, int origin );
//            �ļ�ָ��          ƫ����          λ��
// origin
// SEEK_SET	Beginning of file ���ļ���ͷƫ��
// SEEK_CUR	Current position of the file pointer �ӵ�ǰָ��ƫ��
// SEEK_END	End of file* ���ļ�ĩβƫ��
// 
// 
// ftell ���ص�ǰ�ļ�ָ�������ʼλ�õ�ƫ����
// 
// rewind ���ļ�ָ��λ�� �ص���ʼλ��
//

// // ���ַ�
//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	// ���ַ�
//	//int ch = fgetc(pf); // weihong
//	//printf("%c\n", ch); //һ�ζ�һ���ַ� w
//	//ch = fgetc(pf); // weihong
//	//printf("%c\n", ch); //һ�ζ�һ���ַ� e
//	//ch = fgetc(pf); // weihong
//	//printf("%c\n", ch); //һ�ζ�һ���ַ� i
//
//	// ���ļ���ͷƫ������λ�ö� i 
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	printf("%d\n", ftell(pf)); // 3
//
//	// �ӵ�ǰָ�� h ƫ��3���ַ��� g
//	fseek(pf, 3, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	printf("%d\n", ftell(pf)); // 7
//
//	// ���ļ�ĩβ��ǰƫ��2���� n
//	fseek(pf, -2, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// �ļ�ָ��ص���ʼλ��
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch); // w
//
//	// �ر�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// �ļ���ȡ�������ж�--feof
// ���ļ���ȡ�����ǣ�������Ҫ�ж��Ƕ�ȡ����������������ļ�ĩβ������
// �ı��ļ���ȡ������EOF(fgetc)��NULL(fgets)
// �������ļ���ȡ������fread��fwrite����Ҫ�����ȡԪ�ظ�����
// ����ֵ�ǳɹ�������Ԫ�ظ���
// �жϷ���ֵ����Ҫ��ȡ�����Ĵ�С��ϵ
//



// 
// ��Ϊ����������, C�����ڲ����ļ�ʱ����Ҫ��ˢ�»������������ļ���������ʱ�ر��ļ����ر�ʱҲ��ˢ�»�������
// ��Ȼ������ ���� �ļ���д��������
// ���û�йر��ļ���û��ˢ�»�����������һ�ζ�д�ļ�ʱ��
// �������л���֮ǰ�����ݴ�д�룬��ʱ���ļ��ͻ�д��֮ǰ�����������ݣ����´���
//
//
