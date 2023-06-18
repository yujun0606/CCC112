//구조체 배열 선언하고, 사용자 입력으로 채운뒤 출력하기
#include <stdio.h>

struct st_info {
    char name[30];  //이름
    char subject[30]; // 수강과목
    int age; //나이
};

int main()
{
    struct st_info stArr[3]; //구조체 배열 선언
    int i;

    // 학생정보 입력받아 배열에 저장하기
    for(i=0; i<3; i++){
        printf("학생 이름은? : ");
        scanf("%s", stArr[i].name);

        printf("수강과목은? : ");
        scanf("%s", stArr[i].subject);

        printf("나이는? : ");
        scanf("%d", &stArr[i].age);

        getchar(); //다음 반복을 위해 버퍼에 남아있는 enter키 삭제
    }
    printf("\n 등록된 학생 정보 ======\n");
    for(i=0; i<3; i++){
        printf("%s \t %s \t %d\n", stArr[i].name, stArr[i].subject, stArr[i].age);
    }
    return 0;
}
