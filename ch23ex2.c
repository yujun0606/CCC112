//구조체 배열 알아보기
#include <stdio.h>
struct st_info {
    char name[30];  //이름
    char subject[30]; // 수강과목
    int age; //나이
};
int main()
{
    struct st_info stArr[3] = { {"심유준","수학",20 },
                                          {"홍길동","영어",22 },
                                          {"이순신","국어",30}
                                         };

    for( int i = 0; i < 3; i++){
        printf("%s \t %s \t %d\n", stArr[i].name, stArr[i].subject, stArr[i].age);
    }

    return 0;
}
