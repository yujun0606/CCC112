//strcat�Լ� �̿��غ���
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[15] = "�ȳ��ϼ���! ";
    char str2[20] = "�ݰ�����~";

    strcat(str1, str2);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
}
