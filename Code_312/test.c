#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 关键字 typedef  static  define
//// typedef 类型定义，即类型的重命名
//typedef unsigned int uint;
//
////结构体 struct 的重新命名
//typedef struct Node {
//	int data;
//	struct Node* next;
//
//}Node;
//
//int main() {
//
//	unsigned int a = 10; // 在初始化该类型时，太过繁琐，即可使用typedef进行重命名
//	uint b = 20;
//
//	Node n;
//	return 0;
//}

// static 静态 用来修饰变量或者函数
// 局部变量、全局变量、函数
//void test() {
//	
//	// int a = 1; 输出为 2 2 2 2 2 2 2 2 2 2
//	// static 修饰局部变量
//	static int a = 1; // 输出为  2 3 4 5 6 7 8 9 10 11
//	
//	// 当 static 修饰局部变量时，出作用域后，局部变量不会销毁
//	// 实际上，是static 修饰局部变量时，改变了局部变量的位置
//	// 本质上，是将 栈 中的 局部变量，存储到了 静态区 成为静态变量
//	// 影响了 变量的生命周期，生命周期和程序的生命周期一样长，程序结束时，静态变量才会被销毁
//	a++;
//	printf("%d ", a);
//}
//
//int main() {
//	int i = 0;
//	while (i<10) {
//		test();
//		i++;
//	}
//	return 0;
//}


//static 修饰全局变量 
//// static 修饰的全局变量，该变量的外部链接属性就变为了内部链接属性，外部源文件就无法使用该变量了。
// // 栈区（局部变量）、堆区（动态内存管理malloc等函数）、静态区（全局变量、静态变量）
// 
//extern int g_val; // 声明外部全局变量
//
//int main() {
//
//	printf("%d", g_val);
//	return 0;
//}


//static 修饰函数
//// 使用static 修饰函数后，函数的外部链接属性也变为内部链接属性，外部源文件无法使用该函数
//extern int Add(int x, int y); // 声明外部函数
//int main() {
//	int a = 20;
//	int b = 50;
//	int add = Add(a, b);
//	printf("%d\n", add);
//	return 0;
//
//}

// register 寄存器关键字
//// 计算机金字塔结构  寄存器、高速缓存（cache）、内存、硬盘；
//// 寄存器集成在CPU上，CPU在运算时，会从寄存器上读取数据
//int main() {
//
//	register int a = 5; // 建议：将 5 放到寄存器中进行存储，只是建议，最终还是由编译器决定的
//
//	return 0;
//}


// #define 定义 标识符常量 和 宏
// define 不是关键字，是一个预处理指令	

//#define MAX 100  // 定义标识符常量
//
//#define ADD(x,y) ((x)+(y)) // 宏
////     宏名 参数    宏体
//
//int main() {
//
//	printf("%d\n", MAX);
//
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	return 0;
//
//}


// 指针

// 内存：内存会被划分为一个一个的内存单元（一个内存单元的大小为一个字节：1byte）
//       每个内存单元都会有一个编号，称为地址。
//int main() {
//
//	int a = 10; // 申请4个字节的内存，存放10
//	&a; // 取地址符号 
//	// 2进制：0000 0000 0000 0000 0000 0000 0000 1010
//	// 16进制： 0   0     0   0    0     0   0     a
//	// 16进制：00 00 00 0a 在内存中存储为 0x 0a 00 00 00
//	printf("%p", &a); // 以地址格式打印
//
//	int* p = &a; // 存储地址时，使用指针变量
//	// int 说明 p指针指向的是 int类型的数据
//
//	char ch = "G";
//	char* q = &ch; // char 说明是指向char类型的数据， *说明q是指针变量
//
//	*p = 50; // 解引用操作符，通过p中存放的地址，找到p所指向的对象。
//	printf("%d", a);
//	return 0;
//}

// 指针变量的大小，只取决于地址存放时所需的空间，32位机器为4字节，64位机器为8字节。
//int main() {
//	printf("%zu\n", sizeof(int*)); // sizeof()类型的内容，最好使用%zu打印
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//
//}


// 结构体
// C语言 给了 自定义类型的方法
// 自定义类型的一种叫做：struct 结构体
// 结构体是把一些单一类型组合在一起的做法

// 人
struct Per {
	// 成员变量
	char name[20];
	int age;
	int hight;
	char sex[10];
	char tel[20];

};

// Print函数，传入的数据是 struct Per 的结构体对象p的地址，用pp表示
void Print(struct Per* pp) {

	// 由于pp是struct Per的结构体对象的地址，*pp 解引用后，即为传入的结构体对象p，因此可以使用结构体对象.成员名来引用
	printf("%s %d %d %s %s\n",(*pp).name, (*pp).age, (*pp).hight, (*pp).sex, (*pp).tel); //这样很繁琐
	// ->
	// 结构体指针变量->成员名
	// 也可使用结构体对象p的地址pp 加 ->来找到成员名
	printf("%s %d %d %s %s\n", pp->name, pp->age, pp->hight, pp->sex, pp->tel);  // 可以使用 ->来
}

int main() {
	// 结构体是抽象的，没有具体到内存中，只有初始化 p 之后，才会在内存中具象化一个 p={ "WeiHong",20,180,"nan","1008611" }
	struct Per p = { "WeiHong",20,180,"nan","1008611" };
	// 结构体对象.成员变量名
	printf("%s %d %d %s %s\n", p.name, p.age, p.hight, p.sex, p.tel);

	Print(&p); // 使用Print函数打印，将结构体对象p所在的地址信息，传入Print函数

	return 0;
}
