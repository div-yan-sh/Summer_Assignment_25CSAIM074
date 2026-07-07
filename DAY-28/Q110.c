#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0, amount;
    char name[50];

    printf("Enter Account Holder Name: ");
    scanf("%[^\n]s", name);

    while(1) {
        printf("\n--- Bank System ---\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter deposit amount: "); scanf("%f", &amount);
                balance += amount;
                break;
            case 2:
                printf("Enter withdrawal amount: "); scanf("%f", &amount);
                if(amount <= balance) balance -= amount;
                else printf("Insufficient balance!\n");
                break;
            case 3:
                printf("Account Holder: %s\nBalance: $%.2f\n", name, balance);
                break;
            case 4: return 0;
        }
    }
}
