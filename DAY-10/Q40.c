#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++)
            printf(" ");
        for (j = 0; j < i; j++)
            printf("%c", 'A' + j);
        for (j = i - 2; j >= 0; j--)
            printf("%c", 'A' + j);
        printf("\n");
    }
    return 0;
}
