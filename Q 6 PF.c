#include <stdio.h>

int main() {
    int dailySold[10] = {1, 2, 2, 3, 3, 3, 7, 7, 8, 9};
    int notFaulty[10];
    int faulty = 3;
    int i, j = 0; 
    int size = 10;

    for (i = 0; i < size; i++) {
        if (dailySold[i] != faulty) {
            notFaulty[j] = dailySold[i];
            j++;
        }
    }

    printf("New updated list:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", notFaulty[i]);
    }

    return 0;
}

