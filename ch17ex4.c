// ��ǰ�����Ϥ� (��������)
#include <stdio.h>
int main()
{
    int i, j, temp;
    int arr[5] = {93,75,50,16,32};

    //���� ���� ����
    for( i = 0; i < 4; i++){
        //4ȸ �ݺ�
        for(j = 0 ; j < 4 - i ; j ++){// 4 -> 3 ->2 -> 1�� �ݺ��ϱ� ����
            if( arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
        }
    }
    //��� ���
    for( i = 0; i < 5; i++){
        printf("%d ", arr[i]);

    }
    return 0;
}
