// ch18ex1.c

#include <stdio.h>
#include <string.h>

int main()
{
    char movie[50];
    int i,  length;

    printf("최근에 본 영화제목을 입력 하십시오(한단어로):  ");
    scanf("%s", movie );

    printf("최근에 본 영화: %s" , movie);

    length = strlen(movie);
    printf("입력된 글자수는 %d자 입니다.\n", length);


    return 0;
}
