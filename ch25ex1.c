//�Լ��� �μ��� ���� �����ϴ� ����
#include <stdio.h>
void get_twice(int num); //�Լ��� ���� ���� (proto type ����)
int main()
{
    int num;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num);

    get_twice(num); // num�� ���� �����ϸ鼭 �Լ� ȣ��

    printf("in main(), num = %d\n", num);

    return 0;
}

void get_twice(int num)
{

    num = num * 2;
    printf("in twice(), num = %d\n", num);
}
