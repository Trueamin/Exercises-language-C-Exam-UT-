#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool hasConsecutiveChars(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++) {
        if (str[i] == str[i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    char str1[] = "design";
    char str2[] = "hello";
    printf("%d\n", hasConsecutiveChars(str1));
    printf("%d\n", hasConsecutiveChars(str2));
    
    return 0;
}
