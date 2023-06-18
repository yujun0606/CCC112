#include <stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    int *arr_ptr = arr;

   // *arr_ptr = *arr_ptr +1;
  //  arr_ptr ++;

   // *arr_ptr = *arr_ptr + 1
  //  arrr_ptr ++;

    for(int i=0; i<5; i++){

        *arr_ptr += 1;
        printf("%d ", *arr_ptr);
        arr_ptr++;
    }

}
