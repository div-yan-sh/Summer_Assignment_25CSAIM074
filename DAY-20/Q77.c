#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and cols of first matrix: ");
    if (scanf("%d %d", &r1, &c1) != 2) return 1;
    printf("Enter rows and cols of second matrix: ");
    if (scanf("%d %d", &r2, &c2) != 2) return 1;

    if (c1 != r2) {
        printf("Matrices cannot be multiplied (c1 must equal r2)\n");
        return 1;
    }

    int a[r1][c1], b[r2][c2], prod[r1][c2];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j) {
            prod[i][j] = 0;
            for (k = 0; k < c1; ++k)
                prod[i][j] += a[i][k] * b[k][j];
        }

    printf("Product matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j)
            printf("%d ", prod[i][j]);
        printf("\n");
    }
    return 0;
}
