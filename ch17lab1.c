#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int r[10]; //난수를 저장할 배열 선언
    int i, sum = 0;

    srand((unsigned int)time(NULL));// 현재의 시각정보를 seed값으로 설정
    for( i=0; i<10;i++){
            r[i] = rand() %100;
            sum += r[i];
            printf("%d ", r[i]);



    }
    printf("평균 : %d ", sum / 10);
    return 0;
}
