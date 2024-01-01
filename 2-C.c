#include <stdio.h>

int main(){

    float scores[] = {17.5, 18, 19.25, 16.75, 17};
    printf("%d,%d", sizeof(scores), sizeof(scores[0]));

    return 0;
}