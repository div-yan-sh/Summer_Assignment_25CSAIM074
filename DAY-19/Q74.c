#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2) return 1;

    int a[r][c], b[r][c], diff[r][c];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            scanf("%d", &b[i][j]);

    printf("Difference (first - second):\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            diff[i][j] = a[i][j] - b[i][j];
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}
