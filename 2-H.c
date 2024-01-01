#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    scanf("%9[a-zA-Z]",str); // Here, abc A2B is inserted
    printf("You entered: %s", str);

    return 0;
}