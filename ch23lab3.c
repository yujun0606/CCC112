#include <stdio.h>
struct time_info {
    int h;
    int m;
    int s;
};

int main()
{
    struct time_info start, end, diff;

    printf("���۽ð�(�� �� ��) : ");
    scanf("%d %d %d", &start.h, &start.m, &start.s);

    printf("����ð�(�� �� ��) : ");
    scanf("%d %d %d", &end.h, &end.m, &end.s);

    //�ð� ���� ���ϱ�
    if( end.s < start.s){
        end.m --;
        end.s += 60;
    }
    diff.s = end.s - start.s;
 if( end.m < start.m){
    end.h--;
    end.m += 60;
 }
 diff.m = end.m - start.m;
 diff.h = end.h - start.h;

 printf("�ð� ���� : %02d:%02d:%02d", diff.h, diff.m, diff.s);
    return 0;
}
