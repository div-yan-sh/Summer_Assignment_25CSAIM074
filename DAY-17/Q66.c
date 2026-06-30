#include <stdio.h>

int main() {
    int n1, n2, a[100], b[100], c[200], i, j, k = 0, found;
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n1; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (c[j] == a[i]) {
                found = 1;
                break;
            }
        }
        if (!found)
            c[k++] = a[i];
    }
    for (i = 0; i < n2; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (c[j] == b[i]) {
                found = 1;
                break;
            }
        }
        if (!found)
            c[k++] = b[i];
    }
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
    return 0;
}
