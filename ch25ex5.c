//�������� �μ����� �� �Ǵ� �ּҷ� �����ϱ�
#include <stdio.h>
void change_data(int num1, int *num2, int arr[]);
int main()
{
    int i;
    int num1 = 10;
    int num2 = 20;
    int arr[5] = {1,2,3,4,5};

    //num1�� ���� ���� , num2�� arr�� �ּ� ����
    change_data(num1, &num2, arr);

    //�Լ� ȣ�� ���� ������ ������ ��ȭ
    printf("num1 : %d, num2 : %d\n", num1, num2);
    for(i=0; i<5; i++){
        printf("arr[%d] : %d \n", i, arr[i]);
    }
    return 0;
}
void change_data(int num1, int *num2, int arr[])
{
    int i;
    num1 = 50;
    *num2 = 100; //num2�� ����Ű�� ������ ���� 100����.
    for( i=0; i<5; i++){
        arr[i] = arr[i] + 10;
    }
}
