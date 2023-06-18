//공백이 들어간 영문주소를 입력받아 거꾸로 출력하기
#include <stdio.h>
int main()
{
    int i;
    char addr[50];

    puts("영문 주소를 입력하세요 : ");
    gets(addr);

    for( i = strlen(addr) - 1 ; i >= 0; i--){
        putchar(addr[i]);
    }
    return 0;
}
