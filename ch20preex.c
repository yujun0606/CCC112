//�����ͺ��� �˾ƺ���
#include <stdio.h>
int main()
{
    int age;
    int *pAge; //������ ������ ���� �� �ʱ�ȭ

     age = 21;
     pAge = &age;

     printf("age = %d, age�� �ּ� = %d\n", age, &age);
     printf("age = %d, age�� �ּ� = %d\n", *pAge, pAge);

     return 0;
}
