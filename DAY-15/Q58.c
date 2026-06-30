#include <stdio.h>

int main() {
    int n, a[100], f, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    f = a[0];
    for (i = 0; i < n - 1; i++)
        a[i] = a[i + 1];
    a[n - 1] = f;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
