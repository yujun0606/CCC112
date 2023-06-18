//구조체 변수에 값 저장하기
#include <stdio.h>
#include <string.h>
//구조체 정의
struct st_info {
    char name[30];  //이름
    char subject[30]; // 수강과목
    int age; //나이

};

int main()
{
    struct st_info st = {"심유준", "수학", 20}; // 학생 한명을 위한 구조체 변수 선언 & 초기화
    struct st_info st2, st3;

    //수강과목 변경
    strcpy(st.subject, "C 언어");
    st.age += 1; //나이 증가


    printf("이름 : %s, 나이 : %d, 수강과목 : %s \n ", st.name, st.age, st.subject);

    struct st_info *st_ptr;
    st_ptr = &st;

    st_ptr -> age = 30;
    strcpy(st_ptr -> name, "홍길동");
    strcpy(st_ptr -> subject, "오피스");
    printf("이름 : %s, 나이 : %d, 수강과목 : %s\n", st_ptr->name, st_ptr->age, st_ptr -> subject);
    return 0;
}
