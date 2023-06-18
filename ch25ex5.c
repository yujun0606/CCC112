//여러개의 인수들을 값 또는 주소로 전달하기
#include <stdio.h>
void change_data(int num1, int *num2, int arr[]);
int main()
{
    int i;
    int num1 = 10;
    int num2 = 20;
    int arr[5] = {1,2,3,4,5};

    //num1은 값을 전달 , num2와 arr는 주소 전달
    change_data(num1, &num2, arr);

    //함수 호출 뒤의 데이터 값들의 변화
    printf("num1 : %d, num2 : %d\n", num1, num2);
    for(i=0; i<5; i++){
        printf("arr[%d] : %d \n", i, arr[i]);
    }
    return 0;
}
void change_data(int num1, int *num2, int arr[])
{
    int i;
    num1 = 50;
    *num2 = 100; //num2가 가리키는 변수의 값을 100으로.
    for( i=0; i<5; i++){
        arr[i] = arr[i] + 10;
    }
}
