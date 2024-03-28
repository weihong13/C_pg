#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"



// 初始化通讯录
void InitContact(Contact* pc)
{
    assert(pc);
    pc->count = 0;
    // 利用memset 给指定范围的内存复制
    memset(pc->data, 0, sizeof(pc->data));
    

}

// 添加联系人
void AddContact(Contact* pc)
{
    assert(pc);
    if (pc->count == MAX) {
        printf("通讯录已满！\n");
        return;
    }
    printf("请输入姓名：>");
    scanf("%s", pc->data[pc->count].name);
    printf("请输入年龄：>");
    scanf("%d", &(pc->data[pc->count].age));
    printf("请输入性别：>");
    scanf("%s", pc->data[pc->count].sex);
    printf("请输入电话：>");
    scanf("%s", pc->data[pc->count].tel);
    printf("请输入地址：>");
    scanf("%s", pc->data[pc->count].addr);
    pc->count++;
    printf("添加成功\n");
}

// 展示通讯录
void ShowContact(Contact* pc)
{
    assert(pc);
    if (pc->count == 0) 
    {
        printf("通讯录为空！\n");
        return;
    }
    //
    printf("%-20s\t%-5s\t%-5s%-12s\t%-30s\n","姓名","年龄","性别","电话","地址");
    int i = 0;
    for (i = 0; i < pc->count; i++) 
    {
        printf("%-20s\t%-5d\t%-5s%-12s\t%-30s\n",
            pc->data[i].name,
            pc->data[i].age,
            pc->data[i].sex,
            pc->data[i].tel,
            pc->data[i].addr);
    }
}

// 按照姓名查找联系人
static int FindByName(Contact* pc) 
{
    // 输入
    char name[20] = { 0 };
    printf("请输入联系人姓名：>");
    scanf("%s", &name);

    int i = 0;
    for (i = 0; i < pc->count; i++) 
    {
        if (0 == strcmp(pc->data[i].name, name))
        {
            return i;
        }
    }
    return -1;
}

// 按照姓名删除联系人
void DelContact(Contact* pc) 
{
    assert(pc);
    if (pc->count == 0) 
    {
        printf("通讯录为空，无法删除\n");
        return;
    }

    // 查找
    int ret = FindByName(pc);
    if (-1 == ret) 
    {
        printf("未找到该联系人！\n");
        return;
    }
    // 删除
    int i = 0;
    for (i = ret; i < pc->count-1; i++) 
    {
        pc->data[i] = pc->data[i + 1];
    }
    pc->count--;
    printf("删除成功！\n");
}


// 按照姓名查找联系人
void SearchContact(Contact* pc)
{
    assert(pc);
    if (0 == pc->count) {
        printf("通讯录为空!\n");
        return;
    }
    // 查找 返回位置
    int ret = FindByName(pc);
    if (-1 == ret)
    {
        printf("未找到该联系人！\n");
        return;
    }

    printf("查找成功！\n");
    printf("%-20s\t%-5s\t%-5s%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
    printf("%-20s\t%-5d\t%-5s%-12s\t%-30s\n",
        pc->data[ret].name,
        pc->data[ret].age,
        pc->data[ret].sex,
        pc->data[ret].tel,
        pc->data[ret].addr);
}


// 修改联系人
void ModifyContact(Contact* pc)
{
    assert(pc);
    if (pc->count == 0)
    {
        printf("通讯录为空，无法修改联系人\n");
        return;
    }
    // 查找 返回位置
    int ret = FindByName(pc);
    if (-1 == ret)
    {
        printf("未找到该联系人！\n");
        return;
    }
    // 修改
    printf("查找成功！\n");
    printf("请输入修改后姓名：>");
    scanf("%s", pc->data[ret].name);
    printf("请输入修改后年龄：>");
    scanf("%d", &(pc->data[ret].age));
    printf("请输入修改后性别：>");
    scanf("%s", pc->data[ret].sex);
    printf("请输入修改后电话：>");
    scanf("%s", pc->data[ret].tel);
    printf("请输入修改后地址：>");
    scanf("%s", pc->data[ret].addr);
    printf("修改成功！\n");
}


// cmp_peo_by_name，比较姓名大小

static int cmp_peo_by_name(const void* e1, const void* e2) 
{
    return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

// 按照姓名对通讯录排序
void SortContact(Contact* pc)
{
    assert(pc);
    if (pc->count == 0)
    {
        printf("通讯录为空，无法排序\n");
        return;
    }
    qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
    printf("排序成功！\n");
    ShowContact(pc);

}