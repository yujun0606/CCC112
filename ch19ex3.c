#include <stdio.h>
#include <string.h>
int main()
{
    char str1[21], str2[21];

    puts("ù��° ���ڿ� �Է� : ");
    gets(str1); // ������ �� ���ڿ��� �Է¹ޱ� ����

    puts("�ι�° ���ڿ� �Է� : ");
    gets(str2); // ������ �� ���ڿ��� �Է¹ޱ� ����

    if( strcmp(str1, str2 ) == 0){
        printf("�� ���ڿ��� �Ȱ����ϴ�");
    }
    else if( strcmp(str1, str2 )  < 0){
        printf("ù��° ���ڿ��� ���� �˻������� ���̳׿� ");
    }
    else {
        printf("�ι�° ���ڿ��� ���� �˻������� ���̳׿� ");
    }
}
