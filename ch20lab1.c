#include <stdio.h>
int main()
{
    int num = 30;
    int *pX, *pY;

    pX = pY = &num;

    *pY += 5;
    printf("*pX:%d, *pY:%d, num:%d", *pX, *pY, num);
    return 0;
}
