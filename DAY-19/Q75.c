#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2) return 1;

    int a[r][c];

    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            scanf("%d", &a[i][j]);

    printf("Transpose:\n");
    for (j = 0; j < c; ++j) {
        for (i = 0; i < r; ++i)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
