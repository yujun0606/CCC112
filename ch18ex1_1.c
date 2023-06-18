// ch18ex1_1.c

#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int i,  length;

    printf("영어이름을 입력하십시오:  ");
    scanf("%s", name );

    printf("이름: %s" , name);

    for(i =  length -1; i >= 0; i--) {
        putchar(name[i]);
    }
    return 0;
}
