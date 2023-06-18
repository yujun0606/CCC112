//포인터변수 알아보기
#include <stdio.h>
int main()
{
    int age;
    int *pAge; //정수형 포인터 변수 및 초기화

     age = 21;
     pAge = &age;

     printf("age = %d, age의 주소 = %d\n", age, &age);
     printf("age = %d, age의 주소 = %d\n", *pAge, pAge);

     return 0;
}
