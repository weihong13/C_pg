#define _CRT_SECURE_NO_WARNINGS

int g_val = 20; // 全局变量，具有外部链接属性，外部源文件也可以使用

// static int g_val = 20; 
// static 修饰的全局变量，该变量的外部链接属性就变为了内部链接属性，外部源文件就无法使用该全局变量了。

//// 函数也具有外部链接属性 
//int Add(int x, int y) {
//	return x + y;
//}
// 使用static 修饰函数后，函数的外部链接属性也变为内部链接属性，外部源文件无法使用该函数
static int Add(int x, int y) {
	return x + y;
}
