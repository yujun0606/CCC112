#include <stdio.h>
#include <string.h>
int main()
{
    char str1[21], str2[21];

    puts("첫번째 문자열 입력 : ");
    gets(str1); // 공백이 들어간 문자열을 입력받기 위해

    puts("두번째 문자열 입력 : ");
    gets(str2); // 공백이 들어간 문자열을 입력받기 위해

    if( strcmp(str1, str2 ) == 0){
        printf("두 문자열은 똑같습니다");
    }
    else if( strcmp(str1, str2 )  < 0){
        printf("첫번째 문자열이 사전 검색순으로 앞이네요 ");
    }
    else {
        printf("두번째 문자열이 사전 검색순으로 앞이네요 ");
    }
}
