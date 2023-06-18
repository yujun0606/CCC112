//3명의 학생에 대한 국영수 점수를 입력받아 2차원 배열에 저장한뒤
// ㅘ목별 총점과 학생별 총점을 출력하기
#include <stdio.h>
int main()
{
    int i, j;
    int arr[4][4] = {0};

    //학생별 점수를 입력받기
    for( i=0; i<3; i++){
        printf("%d번째 학생의 국영수 점수를 차례로 입력하세요 .", i+1);
        for( j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //학생별 총점을  arr[i][3]에 저장하기
    for( i=0; i<3; i++){
        for(j=0; j<3; j++){
            arr[i][3] += arr[i][j];
        }
    }
    //과목별 총점을 구해서 arr[3][j]에 저장하기
    for( i=0; i<3; i++){
        for( j=0; j<4; j++){
            arr[3][j] += arr[i][j];
        }
    }
    //결과 출력하기
    printf("======================================\n");
    printf("\t국어\t영어\t수학\t총점\n");
    for( i = 0; i <4; i++){
        if(i < 3) printf("학생 : %d :", i+1);
        else printf("총점 : ");
        for(j=0;j<4;j++){
            printf("\t%4d", arr[i][j]);
            }
            printf("\n");
        }
    return 0;
}
