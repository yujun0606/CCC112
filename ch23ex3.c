//����ü �迭 �����ϰ�, ����� �Է����� ä��� ����ϱ�
#include <stdio.h>

struct st_info {
    char name[30];  //�̸�
    char subject[30]; // ��������
    int age; //����
};

int main()
{
    struct st_info stArr[3]; //����ü �迭 ����
    int i;

    // �л����� �Է¹޾� �迭�� �����ϱ�
    for(i=0; i<3; i++){
        printf("�л� �̸���? : ");
        scanf("%s", stArr[i].name);

        printf("����������? : ");
        scanf("%s", stArr[i].subject);

        printf("���̴�? : ");
        scanf("%d", &stArr[i].age);

        getchar(); //���� �ݺ��� ���� ���ۿ� �����ִ� enterŰ ����
    }
    printf("\n ��ϵ� �л� ���� ======\n");
    for(i=0; i<3; i++){
        printf("%s \t %s \t %d\n", stArr[i].name, stArr[i].subject, stArr[i].age);
    }
    return 0;
}
