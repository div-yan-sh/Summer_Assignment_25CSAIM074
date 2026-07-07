#include <stdio.h>

struct Product {
    int pid;
    char name[50];
    int qty;
    float price;
};

int main() {
    struct Product inventory[100];
    int count = 0, choice, id, new_qty;

    while(1) {
        printf("\n1. Add Product\n2. Update Stock\n3. Display Inventory\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("ID: "); scanf("%d", &inventory[count].pid);
                printf("Name: "); scanf(" %[^\n]s", inventory[count].name);
                printf("Qty: "); scanf("%d", &inventory[count].qty);
                printf("Price: "); scanf("%f", &inventory[count].price);
                count++;
                break;
            case 2:
                printf("Enter Product ID: "); scanf("%d", &id);
                for(int i=0; i<count; i++) {
                    if(inventory[i].pid == id) {
                        printf("Enter new Quantity: "); scanf("%d", &new_qty);
                        inventory[i].qty = new_qty;
                    }
                }
                break;
            case 3:
                for(int i=0; i<count; i++) {
                    printf("ID: %d | Name: %s | Qty: %d | Price: $%.2f\n", 
                           inventory[i].pid, inventory[i].name, inventory[i].qty, inventory[i].price);
                }
                break;
            case 4: return 0;
        }
    }
}
