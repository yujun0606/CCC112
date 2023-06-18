#include <stdio.h>

struct book_info {
    char title[30];  //책 이름
    char writer[30]; // 작가
    int price; //가격
};

int main()
{
    struct book_info books[3]; //구조체 배열 선언
    int i;

    for( i = 0; i < 3; i++){
        printf("%d번째 책의 제목은? : ", i + 1);
        gets(books[i].title);

        printf("책의 작가는? : ");
        gets(books[i].writer);

        printf("책의 가격은? : ");
        scanf("%d", &books[i].price);

        getchar();
    }
    printf("\n====== 책의정보 ======\n");
    for(i=0; i<3; i++){
        printf("#%d : \"%s\" by %s %d원\n", i + 1, books[i].title, books[i].writer, books[i].price);
    }
    return 0;
}
