// ch18ex1.c

#include <stdio.h>
#include <string.h>

int main()
{
    char movie[50];
    int i,  length;

    printf("�ֱٿ� �� ��ȭ������ �Է� �Ͻʽÿ�(�Ѵܾ��):  ");
    scanf("%s", movie );

    printf("�ֱٿ� �� ��ȭ: %s" , movie);

    length = strlen(movie);
    printf("�Էµ� ���ڼ��� %d�� �Դϴ�.\n", length);


    return 0;
}
