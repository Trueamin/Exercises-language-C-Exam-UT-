#include <stdio.h>

int main(){
    int n;
    unsigned long long factorial = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Factorial is defined only for positive integer.");
    }
    else{
        for(int i = 1; i <= n; i++){
            factorial *= i;
        }
        printf("%d! = %llu", n, factorial);
    }

    return 0;
}