#include <stdio.h>
int main()
{
    int score[5]; //5���� ������ ������ �迭 ����
    int i, cnt = 0; //80���� �Ѵ� �л� �� ī���� ����

    for( i=0; i<5; i++){
        printf("%d��° �л� ������? ", i+1);
        scanf("%d", &score[i]);
    }
    for( i = 0; i < 5; i++){
        if( score[i] > 80){
            cnt++;
        }
    }
    printf("80�� �̻��� �л� �� : %d ", cnt);
    return 0;
}
