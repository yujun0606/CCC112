// 거품정렬하ㅣ (오름차순)
#include <stdio.h>
int main()
{
    int i, j, temp;
    int arr[5] = {93,75,50,16,32};

    //오름 차순 정렬
    for( i = 0; i < 4; i++){
        //4회 반복
        for(j = 0 ; j < 4 - i ; j ++){// 4 -> 3 ->2 -> 1번 반복하기 위해
            if( arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
        }
    }
    //결과 출력
    for( i = 0; i < 5; i++){
        printf("%d ", arr[i]);

    }
    return 0;
}
