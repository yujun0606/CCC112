#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i cnt, stu, sum = 0;
    int *score;
    printf("�л����� �Է��ϼ��� : ");
    scanf("%d", &cnt);

    //�޸� �Ҵ�ޱ�
    score = (int*)malloc(sizeof(int)) * cnt);
    if(score == NULL){
        printf("�޸� �Ҵ� ����");
        exit(1);
    }
    for( i=0; i<cnt; i++){
        printf("%d��° �л��� ������ �Է��ϼ��� : ", i + 1);
        scanf("%d", &score[i]);
        sum += score[i];

    }
    printf("�л����� ������ %d���̰�, ����� %.1f���Դϴ�\n", sum, (float)sum / cnt);
    free(score);
    return 0;
}
