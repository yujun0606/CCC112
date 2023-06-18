#include <stdio.h>
int main()
{
    int i, j, cnt = 1;
    int arr[3][4];

    for(i=0; i<3; i++){
        for(j = 0; j<4; j++){
            arr[i][j] = cnt++;
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
