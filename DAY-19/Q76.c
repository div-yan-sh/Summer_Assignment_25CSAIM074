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

    int sum = 0;
    for (i = 0; i < n; ++i)
        sum += a[i][i];

    printf("Diagonal sum = %d\n", sum);
    return 0;
}
