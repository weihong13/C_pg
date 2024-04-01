#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//
// 程序的翻译环境和执行环境
// 翻译环境：源代码被转换为可执行的机器指令
// 执行环境：实际执行代码
// 
// 每个源文件都会单独经过编译器处理，得到对应的目标文件
// test.c 源文件 ----->编译器cl.exe----->目标文件 test.obj
// 然后 
// 链接库+目标文件---->链接器link.exe----> 可执行程序 .exe
// 
// Linux
// gcc xxx.c ----> xxx .o
// 
// 
// 源文件.c ----> 编译 ----> 链接-----> 可执行文件
// 
// 编译：1.预编译（预处理）、2.编译、3.汇编
//		  编译原理
// 
//  1.预编译（预处理）---文本操作
//  gcc test.c -E -o test.i
//  (1) 头文件的包含
//  (2) #define 定义的替换
//  (3) 注释的删除
//	... 
// 
//  2.编译
//  gcc test.i -S  ----->test.s
//  把C语言代码转换为汇编代码
//  语法分析、词法分析、符号分析、语义分析
//  
//	符号汇总--全局符号进行汇总：全局变量、全局函数
// 
//  3.汇编
//  gcc test.s -c  -----> test.o 目标文件（二进制文件）
//  (1) 把汇编代码转换为二进制指令（机器指令）
//  (2) 形成符号表
// 
//	链接 
//  (1) 合并段表
//  (2) 符号表的合并和重新定位 
// 
//

