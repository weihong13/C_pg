#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 猜数字游戏
// 电脑产生随机数(1-100)
// 猜大了
// 猜小了

//void menu() {
//	printf("**************************\n");
//	printf("********  1、play  *******\n");
//	printf("********  2、exit  *******\n");
//	printf("**************************\n");
//}
//
//int main() {
//	int input = 0;
//	int n = 0;
//	int random = 20;
//	do {
//		menu();
//		printf("请选择：(1 or 2)>");
//		scanf("%d", &input);
//		if (1 == input) 
//		{
//			printf("请猜数字：(1-100)>");
//			scanf("%d", &n);
//			if (n > random) {
//				printf("猜大了！\n");
//				continue;
//			}
//			else if (n < random) {
//				printf("猜小了！\n");
//				continue;
//			}
//			else {
//				printf("猜对了！\n");
//				continue;
//			}
//		}
//		else if (2 == input) {
//			printf("已退出游戏！");
//			break;
//		}
//		else {
//			printf("输入错误！请重新选择！\n");
//			input = 1;
//			continue;
//		}
//	} while (1 == input);
//	return 0;
//}

//#include<stdlib.h>
//#include<time.h>
//// 使用函数
//// 菜单
//void menu() {
//	printf("**************************\n");
//	printf("********  1、play  *******\n");
//	printf("********  0、exit  *******\n");
//	printf("**************************\n");
//}
//
//void game() {
//	int n = 0;
//	// 产生随机数
//	//void srand( unsigned int seed ); 
//	// 调用srand 需要传入一个 无符号整型数值
//	// 这里传入一个常数发现，产生的随机数一样，所以这里也需要传入一个随机数
//	// 使用时间戳传入随机数 使用时间戳函数 time time_t time( time_t *timer ); 需要传入一个指针，返回一个时间戳
//	// 这里传入一个空指针，返回的是一个 long long 整数，而srand 需要传入一个 无符号整型数值
//	// 这里发现，调用game函数时间间隔很短时，产生的随机数一致，所以放到主函数中
//	// srand((unsigned int)time(NULL)); 
//
//	// rand函数 查看MSDN会返回一个0-RAND_MAX(0x7fff,32767)的数字
//	// 但是 运行后发现，每次产生的随机数一样 需要 调用 srand（）来产生随机数的生殖器
//	int random = rand()%100+1; // 模100，0~99；+1，1~100
//	while (1) {
//		printf("请输入你要猜的数字：>\n");
//		scanf("%d", &n);
//		if (random > n) {
//			printf("猜小了！！\n");
//		}
//		else if (random < n) {
//			printf("猜大了！！\n");
//		}
//		else{
//			printf("猜对了！！\n");
//			break;
//		}
//	}
//
//}
//
//int main() {
//	int input = 0;
//	// 这里发现，调用game函数时间间隔很短时，产生的随机数一致
//	// 所以在 整个工程运行时，产生一个随机数生殖器就行
//	srand((unsigned int)time(NULL)); 
//	do 
//	{
//		menu();
//		printf("请选择：(0 or 1)>");
//		scanf("%d", &input);
//		switch (input) 
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("游戏结束！！\n");
//				break;
//			default:
//				printf("输入错误，请重新选择！\n");
//				break;
//
//		}
//	} while (input); // 0退出，1继续
//}



// goto 语句
// 跳转语句，不能跨函数使用
// goto 语句适合的场景，跳出多层循环

//for () {
//	for () {
//		for () {
//			if (disaster) {
//				// 发生灾难情况，需要立刻跳出
//				goto error;
//			}
//		}
//	}
//}
//error:
//if (disaster) {
//	// 处理灾难情况
//	}

//#include<string.h>
//#include<windows.h>
//// 自动关机
//int main() {
//	char ch[20] = { 0 };
//	system("shutdown -s -t 600");
//again:
//	printf("注意！你得电脑将在10分钟后关机，请输入：我是猪。取消关机\n");
//	scanf("%s", ch);
//	if (strcmp(ch, "我是猪") == 0) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}




// 函数：库函数/ 自定义函数

// 库函数
// cplusplus.com //c++ 文档

// 尝试读英文文档
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
//    strcpy(arr2, arr1); // 查看文档，发现是将arr1 的内容 拷贝到arr2
//    printf("%s", arr2);
//	return 0;
//}


// 自定义函数
// 写一个函数可以交换两个变量的内容
//// 形参
// // 错误版本
//void Swap(int x, int y) {
//    int temp = 0;
//    temp = x;
//    x = y;
//    y = temp;
//}
//// 当实际参数传值给形式参数时，形参只是实参的一份拷贝文件
//// 对形参的修改，不会影响实参
// 正确的函数
//void Swap(int* pa,int* pb) {
//    int z = *pa;
//    *pa = *pb;
//    *pb = z;
//}
//// 不同情况传地址和传值的区别
//// 是否修改 传入值
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
//    printf("交换前：a=%d，b=%d\n", a, b);
//    // 实参
//    // Swap(a,b);
//    // 通过指针将形参和实参联系起来
//    Swap(&a, &b);
//    printf("交换后：a=%d，b=%d\n", a, b); // 没有交换
//    return 0;
//}

//#include<math.h>
//// 写一个函数，判断是否为素数，100-200直接的素数
//int is_prime(int n) {
//    int j = 0;
//    for (j = 2; j <= sqrt(n); j++) // sqrt() 求开平方，需要调用math.h头文件
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

// 写一个函数 判断 是否为 闰年
// 打印1000~2000 年之间的闰年
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

// 二分查找 有序数组
//            这里的形参 arr1 只是一个指针变量，存储数组arr1 第一个元素的地址
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
    // 不能将这部分 放入函数内部，数组传参 传入的 是一个指针变量，是数组的首元素地址
    int sz = sizeof(arr) / sizeof(arr[0]);
    scanf("%d", &k);

    int ret = binary_search(arr, k, sz);

    if (-1 == ret) {
        printf("没找到\n");
    }
    else {
        printf("找到了，下标是：%d", ret);
    }

    return 0;
}


//// 每调用一次， num+1
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


//// 链式访问- 前提：有返回值
//#include<string.h>
//int main() {
//    int len = strlen("weihong");
//    printf("%d\n", len);
//    
//    // 链式访问，通过查看 MSDN，strlen 返回的是一个无符号整型，而%d 需要传入一个整型，这就是链式访问
//    print("%d\n", strlen("weihong"));
//
//
//    // 典型的链式访问
//    printf("%d", printf("%d", printf("%d", 43)));  // 打印的值为4321
//
//    // 查看 MSDN， printf 的返回值是 每次打印的字符个数
//    // 最内层打印43；然后返回2，打印；再返回1，打印
//
//    return 0;
//}


//// 明确 main函数 不需要参数

//int main(void) {
//
//    return 0;
//}
//// 实际上 main函数是有三个参数的
//int main(int argc, char* argv[], char* envp[]) {
//
//    return 0;
//}