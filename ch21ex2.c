//ũ�Ⱑ 5�� ���������� �迭�� �����ϰ� ��ȭ�������� �ʱ�ȭ�Ѵ�
//����ڷκ��� ������ ����� �� , ������ ��ȭ������ ����Ѵ�
#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char ans;
    char *movies[5] = {"Mission impossible", "Incredible", "Avergers", "Big Hero", "Crime city 3"};
    int movie_rating[5]; //������ �����ϴ� �迭. movies[] �迭�� ����ȭ
    printf("��ȭ �ĺ��۵��� �����ּ��� =========\n ");

    for( i=0; i<5;i++){
        printf("\n��ȭ %s �� ���̳���?(y/n) : ", movies[i]);
        scanf(" %c", &ans);
        if(toupper(ans)=='Y'){
            printf("\n������ �Ű��ּ���(0 ~10�� ����)");
            scanf("%d", &movie_rating[i]);
            continue;
        }
        movie_rating[i] = -1;
    }
    printf("\n -----------�����е��� ���� ���-----------\n");
    for( i = 0; i<5; i++){
        if(movie_rating[i] >= 0 ){
            printf("��ȭ %s�� ������ %d���Դϴ�\n ", movies[i], movie_rating[i]);
        }
    }
    return 0;
}
