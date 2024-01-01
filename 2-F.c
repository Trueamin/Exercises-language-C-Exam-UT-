#include <stdio.h>

int main(){

    int x[5] = {1, 2, 3, 4, 5};
    int* p = x;
    printf("%d, %d, %d", *p, *(p+2), *(p+1)+5);

    return 0;
}