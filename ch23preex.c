//구조체 정의 연습하기
#include <stdio.h>
int main()
//2차원 좌표상의 점을 위한 구조체 정의
struct point_info {
    int x;
    int y;
};

//학생정보를 저장하기 위한 구조체 정의
    struct student_info{
    int ban;
    int no;
    char name[50];
} ;
  struct student_type{
  int num;
  char name[30];
  char obj[30];
  };
int main()

{
    struct point_info p;
    struct student_info students;
    struct student_type student;
}
