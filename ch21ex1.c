//문자포인터 배열 간단한 예제
#include <stdio.h>
int main()
{
    int i;
    char m1[50], m2[50], m3[50], m4[50], m5[50]; //영화 제목을 저장할 5개의 문자배열 선언
    char *movies[5] = {m1, m2, m3, m4, m5};

    for( i=0; i<5; i++){
        printf("#%d.영화 제목은? ", i+1);
        gets(movies[i]); // 주소 전달
    }
    for(i = 0; i<5; i++)
    {
        puts(movies[i]);
    }
    return 0;
}
