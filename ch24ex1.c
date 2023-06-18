// 전역변수와 지역변수의 차이점 알아보기
#include <stdio.h>
//전역변수 선언
int global_v1;

int main()
{
    int local_v1 = 10;

    printf("local_v1 : %d, global_v1 : %d\n", local_v1, global_v1);

    local_global_fn(); //함수호출

    return 0;
}
//전역변수 선언
int global_v2;
void local_global_fn()
{
    //지역변수 선언
    int x = 15
    int local_v2 = 20;
    global_v1 = 100;
    global_v2 = 200;
    printf("local_v2 : %d, global_v1 : %d, global_v2 : %d\n", local_v2, global_v2);
}
