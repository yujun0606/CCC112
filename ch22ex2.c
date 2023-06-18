//사용자가 원하는  개수만큼의 난수를 저장하기 위해 메모리  할당받기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i, cnt;
    int *random_ptr; //할당받은 메모리의 시작주소를 저장하기 위한 포인터

    printf("몇개의 난수를 생성할까요?");
    scanf("%d" , &cnt);
    random_ptr = malloc(sizeof(int) *cnt); //메모리 동적할당
    if( random_ptr == NULL){
        printf("메모리 할당 실패!");
        exit(1);
    }
    //메모리 할당 성공
    srand((unsigned int)time(NULL)); //seed값 설정
    //할당받은 메모리는 배열처럼 사용
    for( i=0; i<cnt; i++){
        random_ptr[i] = rand() % 50 + 1; // 1~ 50사이의 난수 생성해서 저장하기
        printf("%d ", random_ptr[i]);

    }
    free(random_ptr);
    return 0;

}
