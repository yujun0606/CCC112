//���ڿ��� Ƚ���� ���޹޾� �ش� Ƚ����ŭ ���ڿ��� ����ϴ� �Լ� ���� & ȣ��
#include <stdio.h>
#include <string.h>
int main()
{
    int cnt;
    char msg[50];

    printf("���ڿ��� �Է��ϼ��� : ");
    gets(msg);
    printf("����� Ƚ���� �Է��ϼ��� : ");
    scanf("%d", &cnt);

    printf_msg(msg, cnt);
    return 0;
}

void printf_msg(char msg[], int cnt)
{
    for(int i=0; i<cnt; i++){
        printf("%s\n", msg);
    }
}
