#include <stdio.h>
#include <stdlib.h>
//5개의 정수데이터를 저장하기 위한 메모리를 동적으로 할당받기
int main()
{
    int i;
    int *ptr; //할당된 메모리 주소를 받기 위한 포인터 변수

 //   ptr = (int*)malloc(5 * sizeof(int));

  //  if( ptr == NULL){
       // printf("메모리 할당 실패!");
     //   exit(1); //프로그램 강제 종료
    }
    //메모리가 할당댔다면
    for(i=0;i<5;i++){
        ptr[i] = i *10;// 0~40까지의 정수 저장
        printf("%d\n",ptr[i]);
// 메모리 해제
    }
    //free(ptr);
    return 0;
}
