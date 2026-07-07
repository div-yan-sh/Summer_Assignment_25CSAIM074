#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int count = 0, choice;
    char search_name[50];

    while(1) {
        printf("\n1. Add Contact\n2. Search Contact\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Name: "); scanf(" %[^\n]s", contacts[count].name);
                printf("Phone: "); scanf("%s", contacts[count].phone);
                count++;
                break;
            case 2:
                printf("Search Name: "); scanf(" %[^\n]s", search_name);
                for(int i=0; i<count; i++) {
                    if(strcmp(contacts[i].name, search_name) == 0) {
                        printf("Found! Phone: %s\n", contacts[i].phone);
                    }
                }
                break;
            case 3: return 0;
        }
    }
}
