//����ڰ� ���ϴ�  ������ŭ�� ������ �����ϱ� ���� �޸�  �Ҵ�ޱ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i, cnt;
    int *random_ptr; //�Ҵ���� �޸��� �����ּҸ� �����ϱ� ���� ������

    printf("��� ������ �����ұ��?");
    scanf("%d" , &cnt);
    random_ptr = malloc(sizeof(int) *cnt); //�޸� �����Ҵ�
    if( random_ptr == NULL){
        printf("�޸� �Ҵ� ����!");
        exit(1);
    }
    //�޸� �Ҵ� ����
    srand((unsigned int)time(NULL)); //seed�� ����
    //�Ҵ���� �޸𸮴� �迭ó�� ���
    for( i=0; i<cnt; i++){
        random_ptr[i] = rand() % 50 + 1; // 1~ 50������ ���� �����ؼ� �����ϱ�
        printf("%d ", random_ptr[i]);

    }
    free(random_ptr);
    return 0;

}
