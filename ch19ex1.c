//������ �� �����ּҸ� �Է¹޾� �Ųٷ� ����ϱ�
#include <stdio.h>
int main()
{
    int i;
    char addr[50];

    puts("���� �ּҸ� �Է��ϼ��� : ");
    gets(addr);

    for( i = strlen(addr) - 1 ; i >= 0; i--){
        putchar(addr[i]);
    }
    return 0;
}
