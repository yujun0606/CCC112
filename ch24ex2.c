//������ �Է¹޾� ����� ���ϰ� ����ϴ� ����ȭ ���α׷���

#include <stdio.h>
#define MAX_NO 5

//�������� ����
int scores[MAX_NO];
float avg;

int main()
{
    input_score(); //���� �Է¹޴� �Լ� ȣ��
    compute_avg(); // ��� ����ϴ� �Լ� ȣ��
    print_avg(); // ��� ����ϴ� �Լ� ȣ��
    return 0;
}

void input_score()
{
    int i;
    for( i=0; i<MAX_NO; i++){
        printf("%d��° �л��� ������? ", i+1);
        scanf("%d", &scores[i]);
    }
}

void compute_avg()
{
    int i, sum = 0;
    for(i=0; i<MAX_NO; i++) {
        sum += scores[i];
    }
    avg = (float)sum / MAX_NO; //�Ǽ� ��� ���ϱ�
}
void print_avg()
{
    printf("����� %.1f ���Դϴ�\n", avg);
}
