#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int isPrime(int a);

int main(){
    int a;
    do{
        printf("\nEnter an integer number: ");
        scanf("%d", &a);
        printf("\n");

        if(a > 0){
            if(isPrime(a)){
                printf("%d is a PRIME number.", a);
            }
            else{
                printf("%d is a NOT PRIME number.", a);
            }
        }
    } while(a > 0);

    return 0;
}

int isPrime(int a){
    if (a <= 1){
        return FALSE;
    }

    int i;
    for (i = 2; i <= sqrt(a); i++){
        if (a % i == 0){
            return FALSE;
        }
    }
    return TRUE;
}



