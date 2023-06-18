#include <stdio.h>
int main()
{
    int score[5]; //5명의 점수를 저장할 배열 선언
    int i, cnt = 0; //80점이 넘는 학생 수 카운팅 변수

    for( i=0; i<5; i++){
        printf("%d번째 학생 점수는? ", i+1);
        scanf("%d", &score[i]);
    }
    for( i = 0; i < 5; i++){
        if( score[i] > 80){
            cnt++;
        }
    }
    printf("80점 이상인 학생 수 : %d ", cnt);
    return 0;
}
