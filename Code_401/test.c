#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

/*
    ʵ��һ��ͨѶ¼

    �˵���Ϣ��1������
             2������
             3���Ա�
             4���绰
             5����ַ

    ��  �ܣ� 1�����100���˵���Ϣ
            2��������ϵ��
            3��ɾ��ָ����ϵ��
            4��������ϵ��
            5���޸���ϵ����Ϣ
            6������
            7����ʾ��ϵ����Ϣ


*/

// 1����̬�汾
// 2����̬�汾
// 3���ļ��汾
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
//    // ��ʼ������
//    InitContact(&con);
//    int input = 0;
//    do
//    {
//        menu();
//        printf("��ѡ��>");
//        scanf("%d", &input);
//        if (0 == input)
//        {
//            SaveContact(&con);
//            DestoryContact(&con);
//            printf("���˳�ͨѶ¼\n");
//        }
//        else if (input > 0 && input < FUNC_NUM)
//        {
//            pfArr[input](&con);
//        }
//        else
//        {
//            printf("ѡ��������������룡\n");
//        }
//
//    } while (input);
//    return 0;
//}

