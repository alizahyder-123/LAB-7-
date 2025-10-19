#include <stdio.h>
#include <stdlib.h> 
#include <time.h>    

int main() {
    int numbers[10];
    int i, search, found = 0;

 
    srand(time(0));

    printf("Generated numbers:\n");
    for (i = 0; i < 10; i++) {
        numbers[i] = rand() % 100 + 1; 
        printf("%d ", numbers[i]);
    }

    
    printf("\n\nEnter a number to search: ");
    scanf("%d", &search);

    
    for (i = 0; i < 10; i++) {
        if (numbers[i] == search) {
            printf("Number is found at index %d ", i);
            found = 1;
            break;  
        }
    }

   
    if (!found) {
        printf("Number not found in the list.\n");
    }

    return 0;
}

