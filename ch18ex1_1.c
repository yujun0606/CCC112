// ch18ex1_1.c

#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int i,  length;

    printf("�����̸��� �Է��Ͻʽÿ�:  ");
    scanf("%s", name );

    printf("�̸�: %s" , name);

    for(i =  length -1; i >= 0; i--) {
        putchar(name[i]);
    }
    return 0;
}
