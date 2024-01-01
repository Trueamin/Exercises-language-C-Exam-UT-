#include <stdio.h>

int main(){

    int n = 5, k = 1;
    while (k <= n) {
        for (int i = 0; i < k; i++) {
            printf("%d ", i);
        }
        printf("\n");
        k++;
    }

    return 0;

}