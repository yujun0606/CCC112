//�Էµ� ���� ���޹޾� �������� ����ϴ� �Լ� ���� & ȣ��
#include <stdio.h>
void print_gugudan(int dan);
int main()
{
    int n;

    printf("�� ���� ����ұ��? ");
    scanf("%d", &n);

    print_gugudan(n);
    return 0;
}

void print_gugudan(int dan)
{
    for(int i=1; i<9; i++){
        printf("%d * %d = %d\n ", dan, i, dan  *  i);
    }
}
