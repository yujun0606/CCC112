//strcat함수 이용해보기
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[15] = "안녕하세요! ";
    char str2[20] = "반가워요~";

    strcat(str1, str2);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
}
