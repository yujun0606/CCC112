//����ü �迭 �����ϰ�, ����� �Է����� ä��� ����ϱ�
#include <stdio.h>

struct st_info {
    char name[30];  //�̸�
    char subject[30]; // ��������
    int age; //����
};

int main()
{
    struct st_info *stArr[3];
    int i;

    for( i = 0; i < 3; i++){
        printf("�л� �̸���? ");
        gets(stArr[i].name);

        printf("���� ������? ");
        gets(stArr[i].subject);

        printf("���̴�? ");
        scanf("%d", &stArr[i].age);

    }

    printf("\n=====��ϵ� �л� ����=====\n");
    for(i=0; i<3; i++){
        printf("%s \t %s \t %d\n", stArr[i].name, stArr[i].subject, stArr[i].age);
    }
