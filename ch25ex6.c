//문자열과 횟수를 전달받아 해당 횟수만큼 문자열을 출력하는 함수 정의 & 호출
#include <stdio.h>
#include <string.h>
int main()
{
    int cnt;
    char msg[50];

    printf("문자열을 입력하세요 : ");
    gets(msg);
    printf("출력할 횟수를 입력하세요 : ");
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
