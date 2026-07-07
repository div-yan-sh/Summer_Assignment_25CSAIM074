#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter string: ");
    scanf("%[^\n]s", str);

    while(1) {
        printf("\n1. Length\n2. Reverse\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length: %lu\n", strlen(str));
                break;
            case 2:
                printf("Reversed String: ");
                for(int i = strlen(str) - 1; i >= 0; i--) printf("%c", str[i]);
                printf("\n");
                break;
            case 3: return 0;
        }
    }
}
