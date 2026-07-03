#include <stdio.h>

// Q103: Simple ATM simulation
int main() {
    double balance = 1000.0; // starting balance
    int choice;
    double amount;
    while (1) {
        printf("\nATM Menu:\n1. Check Balance\n2. Withdraw\n3. Deposit\n4. Exit\nChoose: ");
        if (scanf("%d", &choice) != 1) break;
        if (choice == 1) {
            printf("Current balance: %.2f\n", balance);
        } else if (choice == 2) {
            printf("Enter amount to withdraw: ");
            if (scanf("%lf", &amount) != 1) break;
            if (amount > balance) printf("Insufficient funds\n");
            else { balance -= amount; printf("Please collect cash. New balance: %.2f\n", balance); }
        } else if (choice == 3) {
            printf("Enter amount to deposit: ");
            if (scanf("%lf", &amount) != 1) break;
            balance += amount;
            printf("Amount deposited. New balance: %.2f\n", balance);
        } else if (choice == 4) {
            printf("Thank you. Goodbye.\n");
            break;
        } else {
            printf("Invalid option\n");
        }
    }
    return 0;
}
