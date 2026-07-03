#include <stdio.h>
#include <stdlib.h>

// Q97: Merge two sorted arrays
int main() {
    int n1, n2;
    printf("Enter size of first sorted array: ");
    if (scanf("%d", &n1) != 1) return 0;
    int *a = malloc(n1 * sizeof(int));
    printf("Enter elements (ascending):\n");
    for (int i = 0; i < n1; ++i) scanf("%d", &a[i]);

    printf("Enter size of second sorted array: ");
    if (scanf("%d", &n2) != 1) { free(a); return 0; }
    int *b = malloc(n2 * sizeof(int));
    printf("Enter elements (ascending):\n");
    for (int i = 0; i < n2; ++i) scanf("%d", &b[i]);

    int *c = malloc((n1 + n2) * sizeof(int));
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }
    while (i < n1) c[k++] = a[i++];
    while (j < n2) c[k++] = b[j++];

    printf("Merged array:\n");
    for (int t = 0; t < k; ++t) printf("%d ", c[t]);
    printf("\n");

    free(a); free(b); free(c);
    return 0;
}
