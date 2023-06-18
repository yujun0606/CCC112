//농구선수의 성적이 저장된 득점배열과 어시스트 배열이 존재한다
//최다 득점 경기를 찾아 해당 경기의 어시스트 회수를 출력하기
#include <stdio.h>
#define MAX_GAME 5 //게임 회수를 상수로 정의

int main()
{

    int score[MAX_GAME] = {10, 5, 8, 20, 16}; //득점 배열 선언 및 초기화
    int assist[MAX_GAME] = {7, 2, 1, 12, 9};
    int i, max, max_index; // max index : 최다 득점 위치

    max = 0;
    max_index = 0;
    //최다 득점과 해당 위치(index) 찾기
    for(i = 0; i < MAX_GAME; i++){
        if(score[i] >max ){
            max = score[i]; //최다 득점 갱신
            max_index = i;
        }
    }
    printf("최다 득점 경기 : %d번쨰. 최다 득점 : %d점. 어시스트 : %d회 ", max_index +1, max, assist[max_index]);
    return 0;
}
