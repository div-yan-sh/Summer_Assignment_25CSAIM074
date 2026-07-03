#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    printf("Enter size of square matrix (n): ");
    if (scanf("%d", &n) != 1) return 1;

    int a[n][n];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);

    int symmetric = 1;
    for (i = 0; i < n && symmetric; ++i)
        for (j = i + 1; j < n; ++j)
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }

    if (symmetric)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");
    return 0;
}
