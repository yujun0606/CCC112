#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, cnt = 2;
    int arr[3][4];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            arr[i][j] = cnt;
            cnt+= 2;
            printf("%4d", arr[i][j]);

        }
        printf("\n");
    }
    return 0;
}
