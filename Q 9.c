#include <stdio.h>

int main() {
    int seats[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int seat;
    int booked = 0;
    int size = 10;
    int i = 0;

    while (booked < 5) {
        printf("\nEnter a seat number (0 to 9): ");
        scanf("%d", &seat);

     
        if (seats[seat] == 0) {
            seats[seat] = 1; 
            booked++;
            printf("Your seat %d has been booked successfully! (%d/5 booked)\n", seat, booked);
        } else {
            printf("Seat %d is already booked. Try another seat.\n", seat);
        }
    }

    printf("\nFinal seat status:\n");
    for ( i; i < size; i++) {
        printf("Seat %d: %d\n", i, seats[i]);
    }

    return 0;
}

