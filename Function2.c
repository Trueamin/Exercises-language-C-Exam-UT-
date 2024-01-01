#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool checkVowel(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'A' || string[i] == 'a' ||
            string[i] == 'E' || string[i] == 'e' ||
            string[i] == 'I' || string[i] == 'i' ||
            string[i] == 'O' || string[i] == 'o' ||
            string[i] == 'U' || string[i] == 'u') {
            return true;
        }
    }
    return false; 
}

int main() {
    char string[10000];
    
    printf("\nEnter character string: ");
    fgets(string, sizeof(string), stdin);
    
    bool containsVowel = checkVowel(string);
    
    if (containsVowel) {
        printf("\nThe string contains at least one vowel.\n");
    } else {
        printf("\nThe string does not contain any vowels.\n");
    }
    
    return 0;
}
