#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    int is_issued;
};

int main() {
    struct Book library[100];
    int count = 0, choice, bid;

    while(1) {
        printf("\n1. Add Book\n2. Issue Book\n3. Return Book\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Book ID: "); scanf("%d", &library[count].id);
                printf("Title: "); scanf(" %[^\n]s", library[count].title);
                library[count].is_issued = 0;
                count++;
                break;
            case 2:
                printf("Enter Book ID to issue: "); scanf("%d", &bid);
                for(int i=0; i<count; i++) {
                    if(library[i].id == bid && library[i].is_issued == 0) {
                        library[i].is_issued = 1;
                        printf("Book Issued.\n");
                    }
                }
                break;
            case 3:
                printf("Enter Book ID to return: "); scanf("%d", &bid);
                for(int i=0; i<count; i++) {
                    if(library[i].id == bid && library[i].is_issued == 1) {
                        library[i].is_issued = 0;
                        printf("Book Returned.\n");
                    }
                }
                break;
            case 4: return 0;
        }
    }
}
