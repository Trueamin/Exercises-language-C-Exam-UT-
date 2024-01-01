#include <stdio.h>

void normalizeArray(float arr[], int size) {
    if (size <= 0) {
        return;
    }
    
    float max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    for (int i = 0; i < size; i++) {
        arr[i] /= max;
    }
}

int main() {
    float myArray[] = {3.5, 7.2, 1.4, 9.8, 5.6};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    
    normalizeArray(myArray, size);
    
    for (int i = 0; i < size; i++) {
        printf("%f ", myArray[i]);
    }
    
    return 0;
}
