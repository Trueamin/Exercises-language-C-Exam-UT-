#include <stdio.h>

float findRange(float arr[], int size) {
    float min = arr[0];
    float max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max - min;
}

int main() {
    float numbers[] = {3.5, 2.1, 8.7, 4.2, 6.9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    float range = findRange(numbers, size);
    printf("Range of the numbers is: %f\n", range);
    return 0;
}