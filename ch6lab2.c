#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int i, arr[10];

    srand((unsigned int )time(NULL));
    for(i = 0; i <10; i++){

        arr[i] = rand()%100 +1;
        printf("%d ", arr[i]);

    }
}
