//����ü �迭 �˾ƺ���
#include <stdio.h>
struct st_info {
    char name[30];  //�̸�
    char subject[30]; // ��������
    int age; //����
};
int main()
{
    struct st_info stArr[3] = { {"������","����",20 },
                                          {"ȫ�浿","����",22 },
                                          {"�̼���","����",30}
                                         };

    for( int i = 0; i < 3; i++){
        printf("%s \t %s \t %d\n", stArr[i].name, stArr[i].subject, stArr[i].age);
    }

    return 0;
}
