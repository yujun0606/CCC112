#include <stdio.h>
#include <string.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    int i;
    plus_one(arr);

    for(i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}

void plus_one(int arr[])
{
        int i;
        for( i=0; i<5; i++){
        arr[i] = arr[i] + 1;
    }

}
