//�󱸼����� ������ ����� �����迭�� ��ý�Ʈ �迭�� �����Ѵ�
//�ִ� ���� ��⸦ ã�� �ش� ����� ��ý�Ʈ ȸ���� ����ϱ�
#include <stdio.h>
#define MAX_GAME 5 //���� ȸ���� ����� ����

int main()
{

    int score[MAX_GAME] = {10, 5, 8, 20, 16}; //���� �迭 ���� �� �ʱ�ȭ
    int assist[MAX_GAME] = {7, 2, 1, 12, 9};
    int i, max, max_index; // max index : �ִ� ���� ��ġ

    max = 0;
    max_index = 0;
    //�ִ� ������ �ش� ��ġ(index) ã��
    for(i = 0; i < MAX_GAME; i++){
        if(score[i] >max ){
            max = score[i]; //�ִ� ���� ����
            max_index = i;
        }
    }
    printf("�ִ� ���� ��� : %d����. �ִ� ���� : %d��. ��ý�Ʈ : %dȸ ", max_index +1, max, assist[max_index]);
    return 0;
}
