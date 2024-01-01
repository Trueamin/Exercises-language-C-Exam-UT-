#include <stdio.h>
#include <string.h>

int main(){

    char str[10] = "Amir Ali";
    char str2[10];
    int k = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            str2[k] = str[i];
            k++;
            }
        }

printf("%s", str2);

    return 0;
}