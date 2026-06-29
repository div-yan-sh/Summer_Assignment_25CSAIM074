#include <stdio.h>

int main() {
    int i, j, rows = 5;

    /* Repeated number: 1 / 22 / 333 ... */
    for (i = 1; i <= rows; i++) {
        for (j = 0; j < i; j++)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}
