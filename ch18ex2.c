// 문자배열을 선언하고 저장해보기
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "spring"; //선언과 동시에 초기화
    char str2[20]; //문자를 하나씩 대입해서 문자열 저장
    char str3[20]; // strcpy 이용하여 문자열 저장

    str2[0] = 'w';
    str2[1] = 'i';
    str2[2] = 'n';
    str2[3] = 't';
    str2[4] = 'e';
    str2[5] = 'r';
    str2[6] = '\0';

    strcpy(str3, "Summer");

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    return 0;
}
