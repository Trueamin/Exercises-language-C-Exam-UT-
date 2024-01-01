#include <stdio.h>

int checkDuplicate(int arr[], int size) {
    int numDict[1000] = {0};
    for (int i = 0; i < size; i++) {
        numDict[arr[i]]++;
    }
    for (int i = 0; i < 1000; i++) {
        if (numDict[i] > 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (checkDuplicate(arr, size)) {
        printf("No duplicate numbers found\n");
    } else {
        printf("Duplicate numbers found\n");
    }
    return 0;
}
