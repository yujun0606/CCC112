#include <stdio.h>

struct book_info {
    char title[30];  //å �̸�
    char writer[30]; // �۰�
    int price; //����
};

int main()
{
    struct book_info books[3]; //����ü �迭 ����
    int i;

    for( i = 0; i < 3; i++){
        printf("%d��° å�� ������? : ", i + 1);
        gets(books[i].title);

        printf("å�� �۰���? : ");
        gets(books[i].writer);

        printf("å�� ������? : ");
        scanf("%d", &books[i].price);

        getchar();
    }
    printf("\n====== å������ ======\n");
    for(i=0; i<3; i++){
        printf("#%d : \"%s\" by %s %d��\n", i + 1, books[i].title, books[i].writer, books[i].price);
    }
    return 0;
}
