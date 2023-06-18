//일반 변수의 주소 전달하기

#include <stdio.h>
void get_twice(int *n);
int main()
{
    int n;
    printf("정수를 입력하세요 : ");
    scanf("%d", &n);

    get_twice(&n); // n의 주소를 전달하면서 함수 호출
    printf("In main n = %d\n", n);

    return 0;
}

void get_twice(int *n)
{
    *n = *n * 2;
    printf("In get twice(), *n = %d\n", *n);
}
