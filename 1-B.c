#include <stdio.h>
#include <stdbool.h>

int main(){

    bool b = false;
    int x = b ? 10 : -10;
    printf("x is %d", x);

    return 0;

}