//����ü ������ �� �����ϱ�
#include <stdio.h>
#include <string.h>
//����ü ����
struct st_info {
    char name[30];  //�̸�
    char subject[30]; // ��������
    int age; //����

};

int main()
{
    struct st_info st = {"������", "����", 20}; // �л� �Ѹ��� ���� ����ü ���� ���� & �ʱ�ȭ
    struct st_info st2, st3;

    //�������� ����
    strcpy(st.subject, "C ���");
    st.age += 1; //���� ����


    printf("�̸� : %s, ���� : %d, �������� : %s \n ", st.name, st.age, st.subject);

    struct st_info *st_ptr;
    st_ptr = &st;

    st_ptr -> age = 30;
    strcpy(st_ptr -> name, "ȫ�浿");
    strcpy(st_ptr -> subject, "���ǽ�");
    printf("�̸� : %s, ���� : %d, �������� : %s\n", st_ptr->name, st_ptr->age, st_ptr -> subject);
    return 0;
}
