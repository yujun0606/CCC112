//입력된 단을 전달받아 구구단을 출력하는 함수 정의 & 호출
#include <stdio.h>
void print_gugudan(int dan);
int main()
{
    int n;

    printf("몇 단을 출력할까요? ");
    scanf("%d", &n);

    print_gugudan(n);
    return 0;
}

void print_gugudan(int dan)
{
    for(int i=1; i<9; i++){
        printf("%d * %d = %d\n ", dan, i, dan  *  i);
    }
}
