#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// ��������Ϸ
// ���Բ��������(1-100)
// �´���
// ��С��

//void menu() {
//	printf("**************************\n");
//	printf("********  1��play  *******\n");
//	printf("********  2��exit  *******\n");
//	printf("**************************\n");
//}
//
//int main() {
//	int input = 0;
//	int n = 0;
//	int random = 20;
//	do {
//		menu();
//		printf("��ѡ��(1 or 2)>");
//		scanf("%d", &input);
//		if (1 == input) 
//		{
//			printf("������֣�(1-100)>");
//			scanf("%d", &n);
//			if (n > random) {
//				printf("�´��ˣ�\n");
//				continue;
//			}
//			else if (n < random) {
//				printf("��С�ˣ�\n");
//				continue;
//			}
//			else {
//				printf("�¶��ˣ�\n");
//				continue;
//			}
//		}
//		else if (2 == input) {
//			printf("���˳���Ϸ��");
//			break;
//		}
//		else {
//			printf("�������������ѡ��\n");
//			input = 1;
//			continue;
//		}
//	} while (1 == input);
//	return 0;
//}

//#include<stdlib.h>
//#include<time.h>
//// ʹ�ú���
//// �˵�
//void menu() {
//	printf("**************************\n");
//	printf("********  1��play  *******\n");
//	printf("********  0��exit  *******\n");
//	printf("**************************\n");
//}
//
//void game() {
//	int n = 0;
//	// ���������
//	//void srand( unsigned int seed ); 
//	// ����srand ��Ҫ����һ�� �޷���������ֵ
//	// ���ﴫ��һ���������֣������������һ������������Ҳ��Ҫ����һ�������
//	// ʹ��ʱ������������ ʹ��ʱ������� time time_t time( time_t *timer ); ��Ҫ����һ��ָ�룬����һ��ʱ���
//	// ���ﴫ��һ����ָ�룬���ص���һ�� long long ��������srand ��Ҫ����һ�� �޷���������ֵ
//	// ���﷢�֣�����game����ʱ�����ܶ�ʱ�������������һ�£����Էŵ���������
//	// srand((unsigned int)time(NULL)); 
//
//	// rand���� �鿴MSDN�᷵��һ��0-RAND_MAX(0x7fff,32767)������
//	// ���� ���к��֣�ÿ�β����������һ�� ��Ҫ ���� srand�������������������ֳ��
//	int random = rand()%100+1; // ģ100��0~99��+1��1~100
//	while (1) {
//		printf("��������Ҫ�µ����֣�>\n");
//		scanf("%d", &n);
//		if (random > n) {
//			printf("��С�ˣ���\n");
//		}
//		else if (random < n) {
//			printf("�´��ˣ���\n");
//		}
//		else{
//			printf("�¶��ˣ���\n");
//			break;
//		}
//	}
//
//}
//
//int main() {
//	int input = 0;
//	// ���﷢�֣�����game����ʱ�����ܶ�ʱ�������������һ��
//	// ������ ������������ʱ������һ���������ֳ������
//	srand((unsigned int)time(NULL)); 
//	do 
//	{
//		menu();
//		printf("��ѡ��(0 or 1)>");
//		scanf("%d", &input);
//		switch (input) 
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("��Ϸ��������\n");
//				break;
//			default:
//				printf("�������������ѡ��\n");
//				break;
//
//		}
//	} while (input); // 0�˳���1����
//}



// goto ���
// ��ת��䣬���ܿ纯��ʹ��
// goto ����ʺϵĳ������������ѭ��

//for () {
//	for () {
//		for () {
//			if (disaster) {
//				// ���������������Ҫ��������
//				goto error;
//			}
//		}
//	}
//}
//error:
//if (disaster) {
//	// �����������
//	}

//#include<string.h>
//#include<windows.h>
//// �Զ��ػ�
//int main() {
//	char ch[20] = { 0 };
//	system("shutdown -s -t 600");
//again:
//	printf("ע�⣡��õ��Խ���10���Ӻ�ػ��������룺������ȡ���ػ�\n");
//	scanf("%s", ch);
//	if (strcmp(ch, "������") == 0) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}




// �������⺯��/ �Զ��庯��

// �⺯��
// cplusplus.com //c++ �ĵ�

// ���Զ�Ӣ���ĵ�
// strcpy 
/*
Copy string
    Copies the C string pointed by source into the array pointed by destination, including the terminating null character (and stopping at that point).
    To avoid overflows, the size of the array pointed by destination shall be long enough to contain the same C string as source (including the terminating null character), 
and should not overlap in memory with source.
*/
//#include<string.h>
//int main() {
//    //char * strcpy ( char * destination, const char * source );
//    
//    char arr1[20] = "Hello World!";
//    char arr2[20] = { 0 };
//    strcpy(arr2, arr1); // �鿴�ĵ��������ǽ�arr1 ������ ������arr2
//    printf("%s", arr2);
//	return 0;
//}


// �Զ��庯��
// дһ���������Խ�����������������
//// �β�
// // ����汾
//void Swap(int x, int y) {
//    int temp = 0;
//    temp = x;
//    x = y;
//    y = temp;
//}
//// ��ʵ�ʲ�����ֵ����ʽ����ʱ���β�ֻ��ʵ�ε�һ�ݿ����ļ�
//// ���βε��޸ģ�����Ӱ��ʵ��
// ��ȷ�ĺ���
//void Swap(int* pa,int* pb) {
//    int z = *pa;
//    *pa = *pb;
//    *pb = z;
//}
//// ��ͬ�������ַ�ʹ�ֵ������
//// �Ƿ��޸� ����ֵ
//int Add(int x, int y) {
//    int z = 0;
//    z = x + y;
//    return z;
//}
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int z = Add(a, b);
//    printf("%d",z);
//
//    printf("����ǰ��a=%d��b=%d\n", a, b);
//    // ʵ��
//    // Swap(a,b);
//    // ͨ��ָ�뽫�βκ�ʵ����ϵ����
//    Swap(&a, &b);
//    printf("������a=%d��b=%d\n", a, b); // û�н���
//    return 0;
//}

//#include<math.h>
//// дһ���������ж��Ƿ�Ϊ������100-200ֱ�ӵ�����
//int is_prime(int n) {
//    int j = 0;
//    for (j = 2; j <= sqrt(n); j++) // sqrt() ��ƽ������Ҫ����math.hͷ�ļ�
//    {
//        if (n % j == 0) 
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main() {
//    int i = 0;
//    int count = 0;
//    for (i = 101; i <= 200; i+=2) {
//        if (is_prime(i)) {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\ncount = %d\n", count);
//
//    return 0;
//}

// дһ������ �ж� �Ƿ�Ϊ ����
// ��ӡ1000~2000 ��֮�������
//int is_Leapyear(int n) {
//    if (n % 4 == 0) 
//    {
//        if (n % 100 ==0) 
//        {
//            if (n % 400 == 0)
//            {
//                return 1;
//            }
//            else 
//            {
//                return 0;
//            }
//        }
//        else 
//        {
//            return 1;
//        }
//    }
//    return 0;
//}

//int is_Leapyear(int n) {
//    if ((((n % 4) == 0) && ((n % 100) != 0)) || (n % 400 == 0)) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//int main() {
//    int year = 0;
//    int count = 0;
//
//    for (year = 1000; year <= 2000; year ++) {
//        if (is_Leapyear(year)) {
//            printf("%d ", year);
//            count++;
//        }
//    }
//    printf("\ncount = %d", count);
//
//    return 0;
//}

// ���ֲ��� ��������
//            ������β� arr1 ֻ��һ��ָ��������洢����arr1 ��һ��Ԫ�صĵ�ַ
int binary_search(int arr1[],int n,int sz1) {
    int right = sz1-1;
    int left = 0;
    while (left <= right) 
    { 
        int mid = left + ((right-left)/2);
        if (arr1[mid] > n) 
        {
            right = mid - 1;
        }
        else if(arr1[mid] < n)
        {
        left = mid + 1;
        }
        else 
        {
            return mid;
        }
    }
    return -1;
}
int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

    int k = 0;
    // ���ܽ��ⲿ�� ���뺯���ڲ������鴫�� ����� ��һ��ָ����������������Ԫ�ص�ַ
    int sz = sizeof(arr) / sizeof(arr[0]);
    scanf("%d", &k);

    int ret = binary_search(arr, k, sz);

    if (-1 == ret) {
        printf("û�ҵ�\n");
    }
    else {
        printf("�ҵ��ˣ��±��ǣ�%d", ret);
    }

    return 0;
}


//// ÿ����һ�Σ� num+1
//void Add(int *n) {
//    (*n)++;
//}
//int main() {
//    int num = 0;
//
//    Add(&num);
//    printf("%d\n", num);
//    Add(&num);
//    printf("%d\n", num);
//    Add(&num);
//    printf("%d\n", num);
//    return 0;
//}


//// ��ʽ����- ǰ�᣺�з���ֵ
//#include<string.h>
//int main() {
//    int len = strlen("weihong");
//    printf("%d\n", len);
//    
//    // ��ʽ���ʣ�ͨ���鿴 MSDN��strlen ���ص���һ���޷������ͣ���%d ��Ҫ����һ�����ͣ��������ʽ����
//    print("%d\n", strlen("weihong"));
//
//
//    // ���͵���ʽ����
//    printf("%d", printf("%d", printf("%d", 43)));  // ��ӡ��ֵΪ4321
//
//    // �鿴 MSDN�� printf �ķ���ֵ�� ÿ�δ�ӡ���ַ�����
//    // ���ڲ��ӡ43��Ȼ�󷵻�2����ӡ���ٷ���1����ӡ
//
//    return 0;
//}


//// ��ȷ main���� ����Ҫ����

//int main(void) {
//
//    return 0;
//}
//// ʵ���� main������������������
//int main(int argc, char* argv[], char* envp[]) {
//
//    return 0;
//}