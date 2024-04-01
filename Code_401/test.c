#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

/*
    实现一个通讯录

    人的信息：1、姓名
             2、年龄
             3、性别
             4、电话
             5、地址

    功  能： 1、存放100个人的信息
            2、增加联系人
            3、删除指定联系人
            4、查找联系人
            5、修改联系人信息
            6、排序
            7、显示联系人信息


*/

// 1、静态版本
// 2、动态版本
// 3、文件版本
//
//void menu() {
//    printf("*************************************\n");
//    printf("*******  1. Add       2. Del    *****\n");
//    printf("*******  3. Search    4. Modify *****\n");
//    printf("*******  5. Show      6. Sort   *****\n");
//    printf("*******  0. Exit                *****\n");
//    printf("*************************************\n");
//}
//
//int main() {
//    void(*pfArr[FUNC_NUM])(Contact*) = { 0 ,AddContact,DelContact,SearchContact,ModifyContact,ShowContact,SortContact};
//    Contact con;
//    // 初始化数组
//    InitContact(&con);
//    int input = 0;
//    do
//    {
//        menu();
//        printf("请选择：>");
//        scanf("%d", &input);
//        if (0 == input)
//        {
//            SaveContact(&con);
//            DestoryContact(&con);
//            printf("已退出通讯录\n");
//        }
//        else if (input > 0 && input < FUNC_NUM)
//        {
//            pfArr[input](&con);
//        }
//        else
//        {
//            printf("选择错误，请重新输入！\n");
//        }
//
//    } while (input);
//    return 0;
//}

