#include <stdio.h>
#include <stdlib.h>
//5���� ���������͸� �����ϱ� ���� �޸𸮸� �������� �Ҵ�ޱ�
int main()
{
    int i;
    int *ptr; //�Ҵ�� �޸� �ּҸ� �ޱ� ���� ������ ����

 //   ptr = (int*)malloc(5 * sizeof(int));

  //  if( ptr == NULL){
       // printf("�޸� �Ҵ� ����!");
     //   exit(1); //���α׷� ���� ����
    }
    //�޸𸮰� �Ҵ��ٸ�
    for(i=0;i<5;i++){
        ptr[i] = i *10;// 0~40������ ���� ����
        printf("%d\n",ptr[i]);
// �޸� ����
    }
    //free(ptr);
    return 0;
}
