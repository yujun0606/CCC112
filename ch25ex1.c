//함수의 인수로 값을 전달하는 예제
#include <stdio.h>
void get_twice(int num); //함수의 원형 선언 (proto type 선언)
int main()
{
    int num;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    get_twice(num); // num의 값을 전달하면서 함수 호출

    printf("in main(), num = %d\n", num);

    return 0;
}

void get_twice(int num)
{

    num = num * 2;
    printf("in twice(), num = %d\n", num);
}
