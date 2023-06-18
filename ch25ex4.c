//함수의 인수로 문자배열의 주소를 전달하여 문자열을 변경하기
#include <stdio.h>
#include <string.h>
void change_string(char *msg); //함수의 원형 선언
int main()
{
    char string[10] = "Avengers";

    change_string(string);

    printf("change string = %s", string);
    return 0;

}

void change_string(char *msg)
{
    strcpy(msg, "hello");
}
