#include <stdio.h>
#include <string.h>

int main(){

    char ch[10] = "abcdef";
    ch[4] = '\0';
    printf("%s", ch);

    return 0;
}