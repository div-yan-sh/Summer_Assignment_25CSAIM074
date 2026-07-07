#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, value, index;

    while(1) {
        printf("\n1. Insert\n2. Delete (by position)\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value: "); scanf("%d", &value);
                arr[n++] = value;
                break;
            case 2:
                printf("Enter element index to delete (0 to %d): ", n-1); scanf("%d", &index);
                if(index >= 0 && index < n) {
                    for(int i = index; i < n - 1; i++) arr[i] = arr[i+1];
                    n--;
                }
                break;
            case 3:
                printf("Array Elements: ");
                for(int i=0; i<n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 4: return 0;
        }
    }
}
