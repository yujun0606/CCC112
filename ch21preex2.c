#include <stdio.h>
int main()
{
    int i;
    char *subject[] = {"english", "math", "history", "science"};
    for( i=0; i<4; i++){
        printf("subject: %s\n", subject[i]);
    }
    return 0;
}
