#include <stdio.h>

int Fibonacci(int n){
    if (n > 0){
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d", Fibonacci(n) * (-1));

    return 0;
}