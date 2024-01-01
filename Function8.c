#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void simulateDiceRoll(int n) {
    int counts[6] = {0};
    srand(time(0));

    for (int i = 0; i < n; i++) {
        int roll = rand() % 6 + 1;
        counts[roll - 1]++;
    }

    for (int i = 0; i < 6; i++) {
        printf("Result %d: %d time\n", i + 1, counts[i]);
    }
}

int main() {
    int num;
    printf("Pleas enter the number of dice rolls: ");
    scanf("%d", &num);
    simulateDiceRoll(num);
    return 0;
}

