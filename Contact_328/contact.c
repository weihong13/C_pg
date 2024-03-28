#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"



// ��ʼ��ͨѶ¼
void InitContact(Contact* pc)
{
    assert(pc);
    pc->count = 0;
    // ����memset ��ָ����Χ���ڴ渴��
    memset(pc->data, 0, sizeof(pc->data));
    

}

// �����ϵ��
void AddContact(Contact* pc)
{
    assert(pc);
    if (pc->count == MAX) {
        printf("ͨѶ¼������\n");
        return;
    }
    printf("������������>");
    scanf("%s", pc->data[pc->count].name);
    printf("���������䣺>");
    scanf("%d", &(pc->data[pc->count].age));
    printf("�������Ա�>");
    scanf("%s", pc->data[pc->count].sex);
    printf("������绰��>");
    scanf("%s", pc->data[pc->count].tel);
    printf("�������ַ��>");
    scanf("%s", pc->data[pc->count].addr);
    pc->count++;
    printf("��ӳɹ�\n");
}

// չʾͨѶ¼
void ShowContact(Contact* pc)
{
    assert(pc);
    if (pc->count == 0) 
    {
        printf("ͨѶ¼Ϊ�գ�\n");
        return;
    }
    //
    printf("%-20s\t%-5s\t%-5s%-12s\t%-30s\n","����","����","�Ա�","�绰","��ַ");
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

// ��������������ϵ��
static int FindByName(Contact* pc) 
{
    // ����
    char name[20] = { 0 };
    printf("��������ϵ��������>");
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

// ��������ɾ����ϵ��
void DelContact(Contact* pc) 
{
    assert(pc);
    if (pc->count == 0) 
    {
        printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
        return;
    }

    // ����
    int ret = FindByName(pc);
    if (-1 == ret) 
    {
        printf("δ�ҵ�����ϵ�ˣ�\n");
        return;
    }
    // ɾ��
    int i = 0;
    for (i = ret; i < pc->count-1; i++) 
    {
        pc->data[i] = pc->data[i + 1];
    }
    pc->count--;
    printf("ɾ���ɹ���\n");
}


// ��������������ϵ��
void SearchContact(Contact* pc)
{
    assert(pc);
    if (0 == pc->count) {
        printf("ͨѶ¼Ϊ��!\n");
        return;
    }
    // ���� ����λ��
    int ret = FindByName(pc);
    if (-1 == ret)
    {
        printf("δ�ҵ�����ϵ�ˣ�\n");
        return;
    }

    printf("���ҳɹ���\n");
    printf("%-20s\t%-5s\t%-5s%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
    printf("%-20s\t%-5d\t%-5s%-12s\t%-30s\n",
        pc->data[ret].name,
        pc->data[ret].age,
        pc->data[ret].sex,
        pc->data[ret].tel,
        pc->data[ret].addr);
}


// �޸���ϵ��
void ModifyContact(Contact* pc)
{
    assert(pc);
    if (pc->count == 0)
    {
        printf("ͨѶ¼Ϊ�գ��޷��޸���ϵ��\n");
        return;
    }
    // ���� ����λ��
    int ret = FindByName(pc);
    if (-1 == ret)
    {
        printf("δ�ҵ�����ϵ�ˣ�\n");
        return;
    }
    // �޸�
    printf("���ҳɹ���\n");
    printf("�������޸ĺ�������>");
    scanf("%s", pc->data[ret].name);
    printf("�������޸ĺ����䣺>");
    scanf("%d", &(pc->data[ret].age));
    printf("�������޸ĺ��Ա�>");
    scanf("%s", pc->data[ret].sex);
    printf("�������޸ĺ�绰��>");
    scanf("%s", pc->data[ret].tel);
    printf("�������޸ĺ��ַ��>");
    scanf("%s", pc->data[ret].addr);
    printf("�޸ĳɹ���\n");
}


// cmp_peo_by_name���Ƚ�������С

static int cmp_peo_by_name(const void* e1, const void* e2) 
{
    return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

// ����������ͨѶ¼����
void SortContact(Contact* pc)
{
    assert(pc);
    if (pc->count == 0)
    {
        printf("ͨѶ¼Ϊ�գ��޷�����\n");
        return;
    }
    qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
    printf("����ɹ���\n");
    ShowContact(pc);

}