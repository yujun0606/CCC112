//�Լ��� �μ��� ���ڹ迭�� �ּҸ� �����Ͽ� ���ڿ��� �����ϱ�
#include <stdio.h>
#include <string.h>
void change_string(char *msg); //�Լ��� ���� ����
int main()
{
    char string[10] = "Avengers";

    change_string(string);

    printf("change string = %s", string);
    return 0;

}

void change_string(char *msg)
{
    strcpy(msg, "hello");
}
