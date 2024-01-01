#include <stdio.h>
#include <stdbool.h>

bool isPowerOfAnother(int num) {
    for (int i = 2; i * i <= num; i++) {
        int temp = num;
        while (temp % i == 0) {
            temp /= i;
            if (temp == 1) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int number = 9;
    if (isPowerOfAnother(number)) {
        printf("%d is a power of another integer\n", number);
    } else {
        printf("%d is not a power of another integer\n", number);
    }
    return 0;
}
