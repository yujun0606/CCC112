#include <stdio.h>
int main()
{
    char str1[20];
    int i, len;
    int has_upper, has_lower, has_digit;

    puts("��ȣ�� �Է��ϼ��� : ");
    gets(str1);
    len = strlen(str1);

    has_upper = has_lower = has_digit = 0;

    for( i=0; i < len; i++){
        if(isupper(str1[i])){
            has_upper = 1;
        }else if(islower(str1[i])){
            has_lower = 1;
        }else if( isdigit(str1[i])){
            has_digit = 1;
        }
    }
    if( has_upper && has_lower && has_digit){
        printf("��ȣ�� �����մϴ�");
    }else {
    printf("��ȣ�� �ٽ� ������ּ���!");
           }

    return 0;
}
