//성적을 입력받아 평균을 구하고 출력하는 구조화 프로그래밍

#include <stdio.h>
#define MAX_NO 5

//전역변수 선언
int scores[MAX_NO];
float avg;

int main()
{
    input_score(); //성적 입력받는 함수 호출
    compute_avg(); // 평균 계산하는 함수 호출
    print_avg(); // 평균 출력하는 함수 호출
    return 0;
}

void input_score()
{
    int i;
    for( i=0; i<MAX_NO; i++){
        printf("%d번째 학생의 성적은? ", i+1);
        scanf("%d", &scores[i]);
    }
}

void compute_avg()
{
    int i, sum = 0;
    for(i=0; i<MAX_NO; i++) {
        sum += scores[i];
    }
    avg = (float)sum / MAX_NO; //실수 평균 구하기
}
void print_avg()
{
    printf("평균은 %.1f 점입니다\n", avg);
}
