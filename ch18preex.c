//문자배열 선언 & 초기화 , 문자열 저장하기
#include <stdio.h>
int main()
{
    char month[10] = "September"; // 선언 및 초기화

    printf("%s", month);
    month[0] = 'A';
    month[1] = 'p';
    month[2] = 'r';
    month[3] = 'i';
    month[4] = 'l';
    month[5] = '\0';// null 문자 필수
    printf("\n%s", month);
    return 0;
}
