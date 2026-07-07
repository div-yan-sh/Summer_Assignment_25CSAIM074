#include <stdio.h>

int main() {
    int total_seats = 50, booked, choice;

    while(1) {
        printf("\nAvailable Seats: %d\n1. Book Tickets\n2. Exit\nChoice: ", total_seats);
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter seats to book: "); scanf("%d", &booked);
                if(booked <= total_seats) {
                    total_seats -= booked;
                    printf("Tickets successfully booked!\n");
                } else {
                    printf("Not enough seats available.\n");
                }
                break;
            case 2: return 0;
        }
    }
}
