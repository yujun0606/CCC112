//�Ϲ� ������ �ּ� �����ϱ�

#include <stdio.h>
void get_twice(int *n);
int main()
{
    int n;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &n);

    get_twice(&n); // n�� �ּҸ� �����ϸ鼭 �Լ� ȣ��
    printf("In main n = %d\n", n);

    return 0;
}

void get_twice(int *n)
{
    *n = *n * 2;
    printf("In get twice(), *n = %d\n", *n);
}
