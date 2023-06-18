#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int r[10];
    int i, max, min;

    srand((unsigned int)time(NULL));
    for(i = 0; i <10; i++){
            r[i] = rand() %100;
            printf("%d ", r[i]);
    }
    max = min = r[0]; //배열의 첫번째 값으로 초기화

    for( i=1; i < 10; i++){
        if( r[i] > max ) max = r[i];
        if( r[i] < min ) min = r[i];
    }
    printf("\n최대값 : %d, 최소값 : %d\n", max, min);
}
