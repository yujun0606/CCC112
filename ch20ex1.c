//������ ���� ������ ����غ���
#include <stdio.h>
int main()
{
    int num1, num2;
    int *num_ptr;
    int i = 10;
    float f = 3.14;
    char ch = 'a';
    //�� �������� �ּҸ� ������ ������ �������� ���� & �� �������� �ּҸ� �����ϱ�
    int *i_ptr;
    i_ptr = &i;
    printf("i = %d ", *i_ptr);
    float *f_ptr;
    f_ptr = &f;
    printf("f = %f ", *f_ptr);
    char *ch_ptr;
    ch_ptr = &ch;
    printf("ch = %c ", *ch_ptr);
    num_ptr = &num1;

    num1 = 25;
    *num_ptr = 10;
    printf("num1:%d, *num_ptr:%d\n", num1, *num_ptr);
    num2 = *num_ptr;
    num_ptr = &num2;
    printf("num:%d, *num_ptr:%d\n", num2, *num_ptr);

    return 0;
}
