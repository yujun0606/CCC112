#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i cnt, stu, sum = 0;
    int *score;
    printf("학생수를 입력하세요 : ");
    scanf("%d", &cnt);

    //메모리 할당받기
    score = (int*)malloc(sizeof(int)) * cnt);
    if(score == NULL){
        printf("메모리 할당 실패");
        exit(1);
    }
    for( i=0; i<cnt; i++){
        printf("%d번째 학생의 점수를 입력하세요 : ", i + 1);
        scanf("%d", &score[i]);
        sum += score[i];

    }
    printf("학생들의 총점은 %d점이고, 평균은 %.1f점입니다\n", sum, (float)sum / cnt);
    free(score);
    return 0;
}
