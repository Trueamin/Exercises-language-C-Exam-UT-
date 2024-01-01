#include <stdio.h>
#include <stdbool.h>

int main(){

    bool b = !((4 > 5) || ((2 > 0) && (2 != 0)));
    if (b){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}