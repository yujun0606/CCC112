#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int r[10]; //������ ������ �迭 ����
    int i, sum = 0;

    srand((unsigned int)time(NULL));// ������ �ð������� seed������ ����
    for( i=0; i<10;i++){
            r[i] = rand() %100;
            sum += r[i];
            printf("%d ", r[i]);



    }
    printf("��� : %d ", sum / 10);
    return 0;
}
