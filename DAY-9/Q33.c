#include <stdio.h>

int main() {
    int i, j, rows = 5;

    /* Reverse star: ***** / **** / ... / * */
    for (i = rows; i >= 1; i--) {
        for (j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
