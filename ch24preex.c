//함수를 사용한 구조화 프로그래밍 알아보기

#include <stdio.h>
int main()
{
    input_score();
    compute_avg();
    printf("프로그램 종료");
    return 0;
}

void input_score()
{
    printf("성적 입력받기 \n");
    return;
}

void compute_avg()
{
    printf("평균 계산하기\n");
    print_avg();
}

void print_avg()
{
    printf("평균 출력하기\n");
    return;
}
