// ���ڹ迭�� �����ϰ� �����غ���
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "spring"; //����� ���ÿ� �ʱ�ȭ
    char str2[20]; //���ڸ� �ϳ��� �����ؼ� ���ڿ� ����
    char str3[20]; // strcpy �̿��Ͽ� ���ڿ� ����

    str2[0] = 'w';
    str2[1] = 'i';
    str2[2] = 'n';
    str2[3] = 't';
    str2[4] = 'e';
    str2[5] = 'r';
    str2[6] = '\0';

    strcpy(str3, "Summer");

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    return 0;
}
