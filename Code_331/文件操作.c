#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
// �ļ�����

// ���ݳ־û�����

// �ļ��������ļ��������ļ�

// �ļ���Ϣ��-FILE�Ľṹ��
// ÿ����һ���ļ�ʱ��ϵͳ������ļ����������һ��File�Ľṹ�����
// һ����ͨ��file��ָ����ά�����������

//// �ļ�ָ��--�ļ�����ָ��
//FILE* pf;


// ���ļ� fopen
// FILE * fopen ( const char * filename, const char * mode );
// 
// const char * mode �ļ��Ĵ�ģʽ��
// ��"r"��д"w"����д"r+"����д"w+"��׷��"a"��
// 
// �ر��ļ� fclose
//

//int main() {
//	FILE* pf = fopen("C:\\Users\\Administrator\\Desktop\\test.txt", "r");
//	if (NULL == pf) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// ���ļ�
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//// �ļ�д��
//int main() {
//
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// д�ļ�
//	// д���ַ� fputc
//	// int fputc ( int character, FILE * stream );
//	// Write character to stream
//	fputc('c', pf);
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++) {
//		fputc(i, pf);
//	}
//	// �ر�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//// ���ַ�
//int main() {
//
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// ���ַ� fgetc
//	// int fgetc(FILE * stream);
//	// Get character from stream
//	//int c= getc( pf);
//	//printf("%c\n", c);
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) {
//		printf("%c ", ch);
//	}
//
//	// �ر�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//// ��ддһ��
//int main() {
//
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) {
//		// printf("%s\n", strerror(errno));
//		// �� 
//		perror("fopen");
//		return 1;
//	}
//	// д�ļ�
//	// д��һ�� fputs
//	// int fputs ( const char * str, FILE * stream );
//	// Write string to stream
//	fputs("weihong\n", pf); // �ļ���������ʱ���Ὣ֮ǰ�����ݸ��ǣ�����д��	
//	fputs("weihong\n", pf);
//
//	// ��һ������
//	// fgets
//	char arr[20];
//	fgets(arr, 5, pf); // ĩβ���\0��Ҳ��һ���ַ�
//	printf("%s\n", arr);
//	// �ر�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


// ��д��ʽ������
// 
// fscanf
// fprintf
// 
//struct S {
//	char name[20];
//	int age;
//	double score;
//};
//int main() {
//	struct S s = { "weihong",24,99.99 };
//	struct S s1 = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	// д��txt�ļ�
//	//fprintf(pf, "%s %d %lf", s.name, s.age, s.score);
//	
//	// ��ȡ�ļ��е�����
//	fscanf(pf,"%s %d %lf", s1.name, &(s1.age), &(s1.score));
//	// printf("%s %d %lf", s1.name, s1.age, s1.score);
//	// ֱ�Ӵ�ӡ����Ļ
//	fprintf(stdout, "%s %d %lf", s.name, s.age, s.score);
//
//	// �ر�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// �ڴ� ------ ��д  -----�ⲿ�豸
// �ڴ� ------- �� ------- �ⲿ�豸

//
// ��
// FILE* �ļ���
// 
// �κ�һ��C����ֻҪ���������ͻ�Ĭ�ϴ�3����
// FILE* stdin   --��׼�����������̣�
// FILE* stdout  --��׼���������Ļ��
// FILE* stderr  --��׼����������Ļ��
//


//
// fread ����������
// fwrite  ���������
//


struct S {
	char name[20];
	int age;
	double score;
};
int main() {
	struct S s = { "weihong",24,99.99 };
	struct S s1 = { 0 };
	// �Զ�������ʽд���ļ���
	FILE* pf = fopen("test.txt", "rb");
	if (NULL == pf) {
		perror("fopen");
	}
	// �����Ʒ�ʽд��
	fwrite(&s, sizeof(struct S), 1, pf);
	//     д������ݡ�д��Ԫ�ش�С��д��Ԫ�ظ�����д���Ķ�

	// �����Ʒ�ʽ����
	fread(&s1, sizeof(struct S), 1, pf);
	printf("%s %d %lf", s1.name, s1.age, s1.score);
	fclose(pf);
	pf = NULL;
	return 0;
}